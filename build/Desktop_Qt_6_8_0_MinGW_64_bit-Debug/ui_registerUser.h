/********************************************************************************
** Form generated from reading UI file 'registerUser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERUSER_H
#define UI_REGISTERUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_RegisterUser
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *realNameLabel;
    QLineEdit *nameInput;
    QLabel *usernameLabel;
    QLineEdit *inputUser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegisterUser)
    {
        if (RegisterUser->objectName().isEmpty())
            RegisterUser->setObjectName("RegisterUser");
        RegisterUser->resize(655, 1237);
        RegisterUser->setStyleSheet(QString::fromUtf8("background-color: white"));
        RegisterUser->setSizeGripEnabled(false);
        gridLayout = new QGridLayout(RegisterUser);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(400, 300, 50, 500);
        label = new QLabel(RegisterUser);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        label_2 = new QLabel(RegisterUser);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8("../Downloads/createAccount.jpg")));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        realNameLabel = new QLabel(RegisterUser);
        realNameLabel->setObjectName("realNameLabel");
        realNameLabel->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, realNameLabel);

        nameInput = new QLineEdit(RegisterUser);
        nameInput->setObjectName("nameInput");
        nameInput->setStyleSheet(QString::fromUtf8("color: white;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, nameInput);

        usernameLabel = new QLabel(RegisterUser);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("color: black;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, usernameLabel);

        inputUser = new QLineEdit(RegisterUser);
        inputUser->setObjectName("inputUser");
        inputUser->setStyleSheet(QString::fromUtf8("color: white;"));

        formLayout->setWidget(5, QFormLayout::FieldRole, inputUser);

        buttonBox = new QDialogButtonBox(RegisterUser);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(6, QFormLayout::FieldRole, buttonBox);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        retranslateUi(RegisterUser);

        QMetaObject::connectSlotsByName(RegisterUser);
    } // setupUi

    void retranslateUi(QDialog *RegisterUser)
    {
        RegisterUser->setWindowTitle(QCoreApplication::translate("RegisterUser", "New User", nullptr));
        label->setText(QCoreApplication::translate("RegisterUser", "Create Account", nullptr));
        label_2->setText(QString());
        realNameLabel->setText(QCoreApplication::translate("RegisterUser", "Name:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("RegisterUser", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterUser: public Ui_RegisterUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERUSER_H
