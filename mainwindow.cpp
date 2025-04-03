#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow),databaseConnection("movieDB/movies.db"){
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(StackView::LoginScreen);

    connect(ui->actionNewUser, SIGNAL(triggered()), this, SLOT(displaySignUp()));
    connect(ui->loginButton, SIGNAL(clicked()), this, SLOT(handleLogin()));
    connect(ui->allMovies, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(showMovieDetails(const QModelIndex&)));
    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(findMovies()));
    connect(ui->watchedMovies, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(showMovieDetails(const QModelIndex&)));
    connect(ui->searchResults, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(showMovieDetails(const QModelIndex&)));

    // resize table
    QList<QTableView*> tables = {ui->allMovies, ui->watchedMovies, ui->searchResults};
    for (QTableView* table : tables) {
        table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    }

    moviesListModel = new QSqlQueryModel();
    watchedMoviesListModel = new QSqlQueryModel();
    movieSearchResultsModel = new QSqlQueryModel();
    databaseConnection.populateMovies(moviesListModel);

    ui->allMovies->setModel(moviesListModel);
    ui->watchedMovies->setModel(watchedMoviesListModel);
    ui->searchResults->setModel(movieSearchResultsModel);
}


MainWindow::~MainWindow() { delete movieSearchResultsModel; delete watchedMoviesListModel; delete moviesListModel; delete ui; }

void MainWindow::findMovies() {databaseConnection.searchMovies(ui->inputSearch->text(), movieSearchResultsModel);}

bool MainWindow::validateUsername(const QString& username)  {
    if (!databaseConnection.isUsernameRegistered(username)) {
        qWarning() << "Username not found. Please try again.";
        return false;
    }
    return true;
}

void MainWindow::handleLogin() {
    QString inputUsername = ui->signIn->text();

    if (!validateUsername(inputUsername)) {
        return;
    }
    loggedInUser = inputUsername;
    databaseConnection.populateWatchedMovies(loggedInUser, watchedMoviesListModel);
    ui->stackedWidget->setCurrentIndex(StackView::MovieScreen);
}

void MainWindow::showMovieDetails(const QModelIndex& index) {
    uint movieId = index.siblingAtColumn(MovieDatabase::RowEntry::entryID).data().toUInt();
    MovieDetailsView movieDialog(this, movieId, loggedInUser, &databaseConnection);
    movieDialog.exec();

    // update watched movie list
    databaseConnection.populateWatchedMovies(loggedInUser, watchedMoviesListModel);
}

void MainWindow::displaySignUp(){
    RegisterUser nud(this, &databaseConnection);
    nud.exec(); //show sign up dialog
}
