#ifndef MOVIEDETAILSVIEW_H
#define MOVIEDETAILSVIEW_H

#include "movieDatabase.h"
#include <QDialog>

namespace Ui {class MovieDetailsView;}

class MovieDetailsView : public QDialog{
    Q_OBJECT

public:
    explicit MovieDetailsView(QWidget *parent = nullptr, const uint movieName = 0, const QString& userName = "", MovieDatabase* databaseConnection = nullptr);
    ~MovieDetailsView();

private:
    Ui::MovieDetailsView *ui;
    void switchWatchlistStatus();
    const uint movieID;
    const QString& userName;
    MovieDatabase* databaseConnection;

private slots:
    void loadMovieDetails();
};

#endif // MOVIEDETAILSVIEW_H
