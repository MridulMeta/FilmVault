#include "ui_movieDetailsView.h"
#include "movieDetailsView.h"

MovieDetailsView::MovieDetailsView(QWidget *parent, const uint movieID,const QString& userName, MovieDatabase* databaseConnection)
    : QDialog(parent), ui(new Ui::MovieDetailsView), movieID(movieID), userName(userName), databaseConnection(databaseConnection) {
    ui->setupUi(this);
    connect(ui->watchList, &QPushButton::clicked, this, &MovieDetailsView::switchWatchlistStatus);
    loadMovieDetails();
}

MovieDetailsView::~MovieDetailsView() { delete ui;}

// toggle movie watchlist status (watched/unwatched)
void MovieDetailsView::switchWatchlistStatus(){
    bool isWatched = databaseConnection->watchedMovie(userName, movieID);

    if (isWatched) {
        databaseConnection->unmarkMovieAsWatched(userName, movieID);
    } else {
        databaseConnection->markWatchedMovie(userName, movieID);
    }
    ui->watchList->setText(isWatched ? "Add Movie to Watchlist" : "Remove Movie from Watchlist");
}

void MovieDetailsView::loadMovieDetails(){
    QList<QVariant> data = databaseConnection->loadCreatorsAndMovieInfo(movieID);

    QString title = data[MovieDatabase::RowEntry::entryTitle].toString();
    QString year = data[MovieDatabase::RowEntry::entryYear].toString();
    QString runtime = data[MovieDatabase::RowEntry::entryRuntime].toString();
    QString genre = data[MovieDatabase::RowEntry::entryGenre].toString();
    QString writer = data[MovieDatabase::RowEntry::entryWriter].toString();
    QString actor = data[MovieDatabase::RowEntry::entryActor].toString();
    QString director = data[MovieDatabase::RowEntry::entryDirector].toString();
    setWindowTitle(title);
    ui->movieTitle->setText(title);
    ui->platformRelease->setText("Year: " + year);
    ui->writers->setText("Writers: " + writer);
    ui->directors->setText("Directors: " + director);
    ui->length->setText("Runtime: " + runtime);
    ui->actors->setText("Actors: " + actor);
    ui->genres->setText("Genre: " + genre);

    QString buttonText = (databaseConnection->watchedMovie(userName, movieID))
                         ? "Remove Movie from Watchlist"
                         : "Add Movie to Watchlist";
    ui->watchList->setText(buttonText);
}
