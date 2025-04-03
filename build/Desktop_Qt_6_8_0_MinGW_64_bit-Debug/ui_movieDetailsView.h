/********************************************************************************
** Form generated from reading UI file 'movieDetailsView.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVIEDETAILSVIEW_H
#define UI_MOVIEDETAILSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MovieDetailsView
{
public:
    QGridLayout *gridLayout;
    QLabel *genres;
    QVBoxLayout *verticalLayout;
    QLabel *movieTitle;
    QPushButton *watchList;
    QLabel *directors;
    QLabel *writers;
    QLabel *platformRelease;
    QLabel *actors;
    QLabel *length;

    void setupUi(QDialog *MovieDetailsView)
    {
        if (MovieDetailsView->objectName().isEmpty())
            MovieDetailsView->setObjectName("MovieDetailsView");
        MovieDetailsView->resize(407, 345);
        MovieDetailsView->setStyleSheet(QString::fromUtf8("background-color: black;"));
        gridLayout = new QGridLayout(MovieDetailsView);
        gridLayout->setObjectName("gridLayout");
        genres = new QLabel(MovieDetailsView);
        genres->setObjectName("genres");
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font.setBold(true);
        genres->setFont(font);
        genres->setStyleSheet(QString::fromUtf8("color: grey"));

        gridLayout->addWidget(genres, 4, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        movieTitle = new QLabel(MovieDetailsView);
        movieTitle->setObjectName("movieTitle");
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        movieTitle->setFont(font1);
        movieTitle->setStyleSheet(QString::fromUtf8("color: red;"));
        movieTitle->setScaledContents(false);

        verticalLayout->addWidget(movieTitle);


        gridLayout->addLayout(verticalLayout, 2, 1, 8, 1);

        watchList = new QPushButton(MovieDetailsView);
        watchList->setObjectName("watchList");
        watchList->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        watchList->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(watchList, 10, 1, 1, 1);

        directors = new QLabel(MovieDetailsView);
        directors->setObjectName("directors");
        directors->setFont(font);
        directors->setStyleSheet(QString::fromUtf8("color: grey;"));

        gridLayout->addWidget(directors, 5, 2, 1, 1);

        writers = new QLabel(MovieDetailsView);
        writers->setObjectName("writers");
        writers->setFont(font);
        writers->setStyleSheet(QString::fromUtf8("color: grey;"));

        gridLayout->addWidget(writers, 7, 2, 1, 1);

        platformRelease = new QLabel(MovieDetailsView);
        platformRelease->setObjectName("platformRelease");
        platformRelease->setFont(font);
        platformRelease->setStyleSheet(QString::fromUtf8("color: grey"));

        gridLayout->addWidget(platformRelease, 8, 2, 1, 1);

        actors = new QLabel(MovieDetailsView);
        actors->setObjectName("actors");
        actors->setFont(font);
        actors->setLayoutDirection(Qt::LeftToRight);
        actors->setStyleSheet(QString::fromUtf8("color: grey;\n"
""));

        gridLayout->addWidget(actors, 6, 2, 1, 1);

        length = new QLabel(MovieDetailsView);
        length->setObjectName("length");
        length->setFont(font);
        length->setStyleSheet(QString::fromUtf8("color: grey"));

        gridLayout->addWidget(length, 3, 2, 1, 1);


        retranslateUi(MovieDetailsView);

        QMetaObject::connectSlotsByName(MovieDetailsView);
    } // setupUi

    void retranslateUi(QDialog *MovieDetailsView)
    {
        MovieDetailsView->setWindowTitle(QCoreApplication::translate("MovieDetailsView", "Dialog", nullptr));
        genres->setText(QCoreApplication::translate("MovieDetailsView", "Genres:", nullptr));
        movieTitle->setText(QCoreApplication::translate("MovieDetailsView", "Movie Title", nullptr));
        watchList->setText(QCoreApplication::translate("MovieDetailsView", "Add to watch list", nullptr));
        directors->setText(QCoreApplication::translate("MovieDetailsView", "Directors:", nullptr));
        writers->setText(QCoreApplication::translate("MovieDetailsView", "Writers:", nullptr));
        platformRelease->setText(QCoreApplication::translate("MovieDetailsView", "Year released: ", nullptr));
        actors->setText(QCoreApplication::translate("MovieDetailsView", "Actors:", nullptr));
        length->setText(QCoreApplication::translate("MovieDetailsView", "Runtime(min):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MovieDetailsView: public Ui_MovieDetailsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVIEDETAILSVIEW_H
