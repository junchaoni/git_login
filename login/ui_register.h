/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *labelName;
    QLabel *labelPassword;
    QLabel *labelPasswordCheck;
    QLineEdit *lineEditName;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditPasswordCheck;
    QPushButton *registerCheckButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(236, 314);
        labelName = new QLabel(Register);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(30, 40, 72, 20));
        labelPassword = new QLabel(Register);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setGeometry(QRect(30, 80, 72, 20));
        labelPasswordCheck = new QLabel(Register);
        labelPasswordCheck->setObjectName(QStringLiteral("labelPasswordCheck"));
        labelPasswordCheck->setGeometry(QRect(30, 130, 72, 20));
        lineEditName = new QLineEdit(Register);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(120, 40, 91, 20));
        lineEditPassword = new QLineEdit(Register);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(120, 80, 91, 20));
        lineEditPasswordCheck = new QLineEdit(Register);
        lineEditPasswordCheck->setObjectName(QStringLiteral("lineEditPasswordCheck"));
        lineEditPasswordCheck->setGeometry(QRect(120, 130, 91, 20));
        registerCheckButton = new QPushButton(Register);
        registerCheckButton->setObjectName(QStringLiteral("registerCheckButton"));
        registerCheckButton->setGeometry(QRect(90, 260, 61, 23));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        labelName->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        labelPasswordCheck->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        registerCheckButton->setText(QApplication::translate("Register", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
