#include "movieDatabase.h"

MovieDatabase::MovieDatabase(const QString& path){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    const bool success = db.open();

    if (!success){
        qDebug() << "Database connection error:" << db.lastError();
    }
}

// Search for movies by title
void MovieDatabase::searchMovies(const QString& queryText, QSqlQueryModel* model){
    QSqlQuery query;
    query.prepare(R"(
        SELECT movie_id, title
        FROM movies
        WHERE LOWER(title) LIKE LOWER(:queryText)
    )");

    query.bindValue(":queryText", "%" + queryText + "%");
    query.exec();
    model->clear();
    model->setQuery(query);
}

bool MovieDatabase::watchedMovie(const QString& userName, const uint movieID){
    QSqlQuery query;
    QString sql = QString(
        "SELECT username "
        "FROM users_has_watched "
        "WHERE username = '%1' AND movie_id = %2"
    ).arg(userName)
     .arg(movieID);
    query.exec(sql);
    return query.next();
}

void MovieDatabase::populateMovies(QSqlQueryModel* model){
    model->clear();
    model->setQuery("SELECT movie_id, title "
                    "FROM movies");
}

bool MovieDatabase::markWatchedMovie(const QString& userName, const uint movieID){
    QSqlQuery query;
    QString sql = QString("INSERT INTO users_has_watched (username, movie_id) "
                          "VALUES ('%1', %2)")
                          .arg(userName)
                          .arg(movieID);
    return query.exec(sql);
}

bool MovieDatabase::unmarkMovieAsWatched(const QString& userName, const uint movieID){
    QSqlQuery query;
    QString sql = QString("DELETE FROM users_has_watched "
                          "WHERE username='%1' AND movie_id=%2")
                          .arg(userName)
                          .arg(movieID);
    return query.exec(sql); // delete the movie from the watched list
}

bool MovieDatabase::isUsernameRegistered(const QString& userName){
    QSqlQuery query;
    query.prepare("SELECT 1 FROM users WHERE username = :username");
    query.bindValue(":username", userName);
    query.exec();

    return query.next(); // If a row is returned, the username exists
}

bool MovieDatabase::registerUser(const QString& userName, const QString& name){
    QSqlQuery query;
    QString sql = QString(
        "INSERT INTO users (username, real_name, email) "
        "VALUES ('%1', '%2', '%3')"
    ).arg(userName)
     .arg(name);
    return query.exec(sql); //register new user to database
}

void MovieDatabase::populateWatchedMovies(const QString& userName, QSqlQueryModel* model){
    QString sql = QString("SELECT movie_id, title "
                          "FROM movies "
                          "NATURAL JOIN users_has_watched "
                          "WHERE username='%1'")
                          .arg(userName);
    model->clear();
    model->setQuery(sql);
}

QList<QVariant> MovieDatabase::loadCreatorsAndMovieInfo(const uint movieID){
    QSqlQuery query;
    QList<QVariant> result;

    // Retrieve movie details
    query.prepare("SELECT movie_id, title, year, genre, runtime "
                  "FROM movies "
                  "WHERE movie_id=(:movieID)");
    query.bindValue(":movieID", movieID);
    query.exec();

    if (query.next()) {
        result.append(query.value(0));  // movie_id
        result.append(query.value(1));  // title
        result.append(query.value(2));  // year
        result.append(query.value(3));  // genre
        result.append(query.value(4));  // runtime
    }

    // Retrieve directors
    QString directors;
    query.prepare("SELECT Fullname "
                  "FROM movieDirectors "
                  "NATURAL JOIN creators "
                  "WHERE movie_id=(:movieID)");
    query.bindValue(":movieID", movieID);
    query.exec();

    while (query.next()) {
        directors.append(query.value(0).toString() + ", ");
    }
    directors.chop(2);
    result.append(directors);

    // Retrieve writers
    QString writers;
    query.prepare("SELECT Fullname "
                  "FROM movieWriters "
                  "NATURAL JOIN creators "
                  "WHERE movie_id=(:movieID)");
    query.bindValue(":movieID", movieID);
    query.exec();

    while (query.next()) {
        writers.append(query.value(0).toString() + ", ");
    }
    writers.chop(2);
    result.append(writers);

    // Retrieve actors
    QString actors;
    query.prepare("SELECT Fullname "
                  "FROM movieCast "
                  "NATURAL JOIN creators "
                  "WHERE movie_id=(:movieID)");
    query.bindValue(":movieID", movieID);
    query.exec();

    while (query.next()) {
        actors.append(query.value(0).toString() + ", ");
    }
    actors.chop(2);
    result.append(actors);
    return result;
}
