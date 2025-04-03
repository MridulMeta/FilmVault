#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H

#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSql>
#include <QVariant>
#include <QSqlDatabase>

class MovieDatabase {
public:
    enum RowEntry { entryID, entryTitle, entryYear, entryGenre, entryRuntime, entryActor, entryDirector, entryWriter };
    MovieDatabase(const QString& path);

    void searchMovies(const QString& queryText, QSqlQueryModel* model);
    bool unmarkMovieAsWatched(const QString& userName, const uint movieID);
    void populateWatchedMovies(const QString& userName, QSqlQueryModel* model);
    bool isUsernameRegistered(const QString& userName);
    bool markWatchedMovie(const QString& userName, const uint movieID);
    bool registerUser(const QString& userName, const QString& name);
    bool watchedMovie(const QString& userName, const uint movieID);
    void populateMovies(QSqlQueryModel* model);

    QList<QVariant> loadCreatorsAndMovieInfo(const uint movieID);
};

#endif // MOVIEDATABASE_H
