/********************************************************************************
** Form generated from reading UI file 'dialog_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ADMIN_H
#define UI_DIALOG_ADMIN_H

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

class Ui_Dialog_admin
{
public:
    QLabel *label;
    QLineEdit *lineEdit_user;
    QLabel *label_2;
    QLineEdit *lineEdit_passwd;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_admin)
    {
        if (Dialog_admin->objectName().isEmpty())
            Dialog_admin->setObjectName(QStringLiteral("Dialog_admin"));
        Dialog_admin->resize(400, 300);
        label = new QLabel(Dialog_admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 91, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_user = new QLineEdit(Dialog_admin);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(180, 50, 131, 31));
        label_2 = new QLabel(Dialog_admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 120, 91, 31));
        label_2->setFont(font);
        lineEdit_passwd = new QLineEdit(Dialog_admin);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setGeometry(QRect(180, 120, 131, 31));
        pushButton = new QPushButton(Dialog_admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 200, 91, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(Dialog_admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 200, 91, 31));
        pushButton_2->setFont(font1);

        retranslateUi(Dialog_admin);

        QMetaObject::connectSlotsByName(Dialog_admin);
    } // setupUi

    void retranslateUi(QDialog *Dialog_admin)
    {
        Dialog_admin->setWindowTitle(QApplication::translate("Dialog_admin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_admin", "\347\256\241\347\220\206\345\221\230\350\264\246\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_admin", "\347\256\241\347\220\206\345\221\230\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog_admin", "\347\241\256 \350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog_admin", "\345\217\226 \346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_admin: public Ui_Dialog_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ADMIN_H
