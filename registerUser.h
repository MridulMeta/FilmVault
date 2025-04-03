#ifndef NEWUSERDIALOG_H
#define NEWUSERDIALOG_H

#include "movieDatabase.h"
#include <QDialog>

namespace Ui {class RegisterUser;}

class RegisterUser : public QDialog{
    Q_OBJECT

public:
    explicit RegisterUser(QWidget *parent = nullptr, MovieDatabase* databaseConnection = nullptr);
    ~RegisterUser();

private:
    Ui::RegisterUser *ui;
    MovieDatabase* databaseConnection;

private slots:
    void registerNewUser();
};

#endif // NEWUSERDIALOG_H
