/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPushButton *btn_regist;
    QLineEdit *lineEdit_passwd;
    QPushButton *btn_edit_pwd;
    QComboBox *cBox_account;
    QLabel *label_top_img;
    QLabel *label_user_img;
    QPushButton *btn_login;
    QCheckBox *checkBox_autoLogin;
    QLabel *label_2;
    QCheckBox *checkBox_rPasswd;
    QLabel *label;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(427, 330);
        Login->setMinimumSize(QSize(427, 330));
        Login->setMaximumSize(QSize(427, 330));
        Login->setAutoFillBackground(true);
        btn_regist = new QPushButton(Login);
        btn_regist->setObjectName(QStringLiteral("btn_regist"));
        btn_regist->setGeometry(QRect(321, 199, 91, 23));
        QFont font;
        font.setPointSize(9);
        btn_regist->setFont(font);
        btn_regist->setStyleSheet(QStringLiteral("color: rgb(11, 163, 219);"));
        btn_regist->setFlat(true);
        lineEdit_passwd = new QLineEdit(Login);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setGeometry(QRect(130, 227, 193, 26));
        lineEdit_passwd->setMinimumSize(QSize(170, 22));
        QFont font1;
        font1.setPointSize(12);
        lineEdit_passwd->setFont(font1);
        lineEdit_passwd->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_passwd->setStyleSheet(QStringLiteral(""));
        btn_edit_pwd = new QPushButton(Login);
        btn_edit_pwd->setObjectName(QStringLiteral("btn_edit_pwd"));
        btn_edit_pwd->setGeometry(QRect(321, 229, 91, 23));
        btn_edit_pwd->setFont(font);
        btn_edit_pwd->setStyleSheet(QStringLiteral("color: rgb(11, 163, 219);"));
        btn_edit_pwd->setFlat(true);
        cBox_account = new QComboBox(Login);
        cBox_account->setObjectName(QStringLiteral("cBox_account"));
        cBox_account->setGeometry(QRect(130, 196, 193, 29));
        cBox_account->setFont(font1);
        cBox_account->setEditable(true);
        label_top_img = new QLabel(Login);
        label_top_img->setObjectName(QStringLiteral("label_top_img"));
        label_top_img->setGeometry(QRect(0, 0, 427, 185));
        label_user_img = new QLabel(Login);
        label_user_img->setObjectName(QStringLiteral("label_user_img"));
        label_user_img->setGeometry(QRect(30, 195, 80, 80));
        btn_login = new QPushButton(Login);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(170, 290, 100, 26));
        checkBox_autoLogin = new QCheckBox(Login);
        checkBox_autoLogin->setObjectName(QStringLiteral("checkBox_autoLogin"));
        checkBox_autoLogin->setGeometry(QRect(259, 261, 16, 16));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(278, 261, 75, 16));
        checkBox_rPasswd = new QCheckBox(Login);
        checkBox_rPasswd->setObjectName(QStringLiteral("checkBox_rPasswd"));
        checkBox_rPasswd->setGeometry(QRect(133, 261, 16, 16));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(152, 261, 75, 16));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        btn_regist->setText(QApplication::translate("Login", "\346\263\250\345\206\214\345\270\220\345\217\267", Q_NULLPTR));
        btn_edit_pwd->setText(QApplication::translate("Login", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        label_top_img->setText(QString());
        label_user_img->setText(QString());
        btn_login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        checkBox_autoLogin->setText(QString());
        label_2->setText(QApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        checkBox_rPasswd->setText(QString());
        label->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
