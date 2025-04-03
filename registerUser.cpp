#include <QDebug>
#include "ui_registerUser.h"
#include "registerUser.h"

RegisterUser::RegisterUser(QWidget *parent, MovieDatabase* databaseConnection)
    : QDialog(parent),
      ui(new Ui::RegisterUser),
      databaseConnection(databaseConnection){
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &RegisterUser::registerNewUser);
}

RegisterUser::~RegisterUser() {delete ui;}

// Slot to register a new user
void RegisterUser::registerNewUser() {
    QString userName = ui->inputUser->text().trimmed();
    QString name = ui->nameInput->text().trimmed();

    if (userName.isEmpty() || name.isEmpty() ) {
        qWarning() << "Input Error: All fields must be filled out.";
        return;
    }

    // Register user
    if (databaseConnection->registerUser(userName, name)) {
        qDebug() << "User created successfully:" << userName;
        this->accept();
    }
}
