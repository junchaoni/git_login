#ifndef DIALOG_ADMIN_H
#define DIALOG_ADMIN_H

#include <QDialog>
#include "login.h"
namespace Ui {
class Dialog_admin;
}

class Dialog_admin : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_admin(QWidget *parent = 0);
    ~Dialog_admin();
    void setParent(Login *dialog);
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_admin *ui;
    Login *pWidget;
};

#endif // DIALOG_ADMIN_H
