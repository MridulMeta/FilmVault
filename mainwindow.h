#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "movieDatabase.h"
#include "registerUser.h"
#include "movieDetailsView.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    enum StackView { LoginScreen, MovieScreen };
    enum Tabs { AllMoviesSection, AllMoviesWatched, AllMoviesSearched };

    QSqlQueryModel* moviesListModel;
    Ui::MainWindow* ui;
    QSqlQueryModel* watchedMoviesListModel;
    QSqlQueryModel* movieSearchResultsModel;
    QString loggedInUser;
    MovieDatabase databaseConnection;

private slots:
    void displaySignUp();
    void handleLogin();
    bool validateUsername(const QString& username) ;
    void findMovies();
    void showMovieDetails(const QModelIndex& index);
};

#endif // MAINWINDOW_H
