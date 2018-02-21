/********************************************************************************
** Form generated from reading UI file 'exam.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAM_H
#define UI_EXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exam
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Exam)
    {
        if (Exam->objectName().isEmpty())
            Exam->setObjectName(QStringLiteral("Exam"));
        Exam->resize(673, 527);
        centralwidget = new QWidget(Exam);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 180, 281, 171));
        Exam->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Exam);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 17));
        Exam->setMenuBar(menubar);
        statusbar = new QStatusBar(Exam);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Exam->setStatusBar(statusbar);

        retranslateUi(Exam);

        QMetaObject::connectSlotsByName(Exam);
    } // setupUi

    void retranslateUi(QMainWindow *Exam)
    {
        Exam->setWindowTitle(QApplication::translate("Exam", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Exam", "\346\265\213\350\257\225  to do ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Exam: public Ui_Exam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAM_H
