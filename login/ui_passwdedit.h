/********************************************************************************
** Form generated from reading UI file 'passwdedit.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWDEDIT_H
#define UI_PASSWDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_passwdEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_passwd;
    QLabel *label_2;
    QLineEdit *lineEdit_newPasswd;
    QLabel *label_3;
    QLineEdit *lineEdit_passwdOk;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;

    void setupUi(QDialog *passwdEdit)
    {
        if (passwdEdit->objectName().isEmpty())
            passwdEdit->setObjectName(QStringLiteral("passwdEdit"));
        passwdEdit->resize(236, 121);
        horizontalLayout = new QHBoxLayout(passwdEdit);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(passwdEdit);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_passwd = new QLineEdit(passwdEdit);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));

        gridLayout->addWidget(lineEdit_passwd, 0, 1, 1, 2);

        label_2 = new QLabel(passwdEdit);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_newPasswd = new QLineEdit(passwdEdit);
        lineEdit_newPasswd->setObjectName(QStringLiteral("lineEdit_newPasswd"));

        gridLayout->addWidget(lineEdit_newPasswd, 1, 1, 1, 2);

        label_3 = new QLabel(passwdEdit);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_passwdOk = new QLineEdit(passwdEdit);
        lineEdit_passwdOk->setObjectName(QStringLiteral("lineEdit_passwdOk"));

        gridLayout->addWidget(lineEdit_passwdOk, 2, 1, 1, 2);

        btn_ok = new QPushButton(passwdEdit);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        gridLayout->addWidget(btn_ok, 3, 1, 1, 1);

        btn_cancel = new QPushButton(passwdEdit);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        gridLayout->addWidget(btn_cancel, 3, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(passwdEdit);

        QMetaObject::connectSlotsByName(passwdEdit);
    } // setupUi

    void retranslateUi(QDialog *passwdEdit)
    {
        passwdEdit->setWindowTitle(QApplication::translate("passwdEdit", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("passwdEdit", "\346\227\247 \345\257\206 \347\240\201:", Q_NULLPTR));
        label_2->setText(QApplication::translate("passwdEdit", "\346\226\260 \345\257\206 \347\240\201:", Q_NULLPTR));
        label_3->setText(QApplication::translate("passwdEdit", "\347\241\256\350\256\244\345\257\206\347\240\201:", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("passwdEdit", "\347\241\256\345\256\232", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("passwdEdit", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class passwdEdit: public Ui_passwdEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWDEDIT_H
