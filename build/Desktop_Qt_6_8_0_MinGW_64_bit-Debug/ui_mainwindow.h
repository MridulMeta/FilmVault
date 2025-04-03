/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNewUser;
    QAction *actionExit;
    QAction *actionAboutQt;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QGridLayout *gridLayout_6;
    QHBoxLayout *loginTextHorizontalLayout;
    QLabel *label;
    QLabel *LogInLabel;
    QHBoxLayout *loginButtonHorizontalLayout;
    QLineEdit *signIn;
    QPushButton *loginButton;
    QWidget *moviePage;
    QGridLayout *gridLayout;
    QVBoxLayout *movieVerticalLayout;
    QHBoxLayout *movieSearchHorizontalLayout;
    QTabWidget *tabWidget;
    QWidget *searchTab;
    QGridLayout *gridLayout_5;
    QTableView *searchResults;
    QLineEdit *inputSearch;
    QPushButton *searchButton;
    QWidget *allTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *logoutHorizontalLayout;
    QTableView *allMovies;
    QWidget *watchedTab;
    QGridLayout *gridLayout_4;
    QTableView *watchedMovies;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(633, 524);
        actionNewUser = new QAction(MainWindow);
        actionNewUser->setObjectName("actionNewUser");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName("actionAboutQt");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 0, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout_6 = new QGridLayout(loginPage);
        gridLayout_6->setObjectName("gridLayout_6");
        loginTextHorizontalLayout = new QHBoxLayout();
        loginTextHorizontalLayout->setObjectName("loginTextHorizontalLayout");
        label = new QLabel(loginPage);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../Downloads/image.png")));

        loginTextHorizontalLayout->addWidget(label);

        LogInLabel = new QLabel(loginPage);
        LogInLabel->setObjectName("LogInLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font.setPointSize(20);
        font.setBold(true);
        LogInLabel->setFont(font);

        loginTextHorizontalLayout->addWidget(LogInLabel);

        loginButtonHorizontalLayout = new QHBoxLayout();
        loginButtonHorizontalLayout->setObjectName("loginButtonHorizontalLayout");
        signIn = new QLineEdit(loginPage);
        signIn->setObjectName("signIn");

        loginButtonHorizontalLayout->addWidget(signIn);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName("loginButton");

        loginButtonHorizontalLayout->addWidget(loginButton);


        loginTextHorizontalLayout->addLayout(loginButtonHorizontalLayout);


        gridLayout_6->addLayout(loginTextHorizontalLayout, 9, 0, 1, 1);

        stackedWidget->addWidget(loginPage);
        moviePage = new QWidget();
        moviePage->setObjectName("moviePage");
        gridLayout = new QGridLayout(moviePage);
        gridLayout->setObjectName("gridLayout");
        movieVerticalLayout = new QVBoxLayout();
        movieVerticalLayout->setObjectName("movieVerticalLayout");
        movieVerticalLayout->setContentsMargins(0, 0, 230, 100);
        movieSearchHorizontalLayout = new QHBoxLayout();
        movieSearchHorizontalLayout->setObjectName("movieSearchHorizontalLayout");
        tabWidget = new QTabWidget(moviePage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:white"));
        searchTab = new QWidget();
        searchTab->setObjectName("searchTab");
        gridLayout_5 = new QGridLayout(searchTab);
        gridLayout_5->setObjectName("gridLayout_5");
        searchResults = new QTableView(searchTab);
        searchResults->setObjectName("searchResults");
        searchResults->setSelectionBehavior(QAbstractItemView::SelectItems);
        searchResults->setSortingEnabled(true);
        searchResults->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        searchResults->horizontalHeader()->setStretchLastSection(true);
        searchResults->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(searchResults, 2, 0, 1, 1);

        inputSearch = new QLineEdit(searchTab);
        inputSearch->setObjectName("inputSearch");
        inputSearch->setStyleSheet(QString::fromUtf8("background-color:white"));

        gridLayout_5->addWidget(inputSearch, 0, 0, 1, 1);

        searchButton = new QPushButton(searchTab);
        searchButton->setObjectName("searchButton");
        searchButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        searchButton->setStyleSheet(QString::fromUtf8("background-color:white"));

        gridLayout_5->addWidget(searchButton, 1, 0, 1, 1);

        tabWidget->addTab(searchTab, QString());
        allTab = new QWidget();
        allTab->setObjectName("allTab");
        gridLayout_2 = new QGridLayout(allTab);
        gridLayout_2->setObjectName("gridLayout_2");
        logoutHorizontalLayout = new QHBoxLayout();
        logoutHorizontalLayout->setObjectName("logoutHorizontalLayout");
        allMovies = new QTableView(allTab);
        allMovies->setObjectName("allMovies");
        allMovies->setStyleSheet(QString::fromUtf8("background-color:white"));
        allMovies->setSelectionBehavior(QAbstractItemView::SelectItems);
        allMovies->setSortingEnabled(true);
        allMovies->horizontalHeader()->setCascadingSectionResizes(false);
        allMovies->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        allMovies->horizontalHeader()->setStretchLastSection(true);
        allMovies->verticalHeader()->setVisible(false);

        logoutHorizontalLayout->addWidget(allMovies);


        gridLayout_2->addLayout(logoutHorizontalLayout, 9, 1, 1, 1);

        tabWidget->addTab(allTab, QString());
        watchedTab = new QWidget();
        watchedTab->setObjectName("watchedTab");
        gridLayout_4 = new QGridLayout(watchedTab);
        gridLayout_4->setObjectName("gridLayout_4");
        watchedMovies = new QTableView(watchedTab);
        watchedMovies->setObjectName("watchedMovies");
        watchedMovies->setSelectionBehavior(QAbstractItemView::SelectItems);
        watchedMovies->setSortingEnabled(true);
        watchedMovies->horizontalHeader()->setStretchLastSection(true);
        watchedMovies->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(watchedMovies, 0, 0, 1, 1);

        tabWidget->addTab(watchedTab, QString());

        movieSearchHorizontalLayout->addWidget(tabWidget);


        movieVerticalLayout->addLayout(movieSearchHorizontalLayout);


        gridLayout->addLayout(movieVerticalLayout, 2, 0, 1, 1);

        stackedWidget->addWidget(moviePage);

        gridLayout_3->addWidget(stackedWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 633, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNewUser);
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Movie Database", nullptr));
        actionNewUser->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        LogInLabel->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        signIn->setPlaceholderText(QCoreApplication::translate("MainWindow", "enter username...", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        inputSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search movies...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(searchTab), QCoreApplication::translate("MainWindow", "Search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(allTab), QCoreApplication::translate("MainWindow", "Movies", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(watchedTab), QCoreApplication::translate("MainWindow", "Watchlist", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
