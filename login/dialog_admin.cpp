#include "dialog_admin.h"
#include "ui_dialog_admin.h"
#include "qdebug.h"
Dialog_admin::Dialog_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_admin)
{
    ui->setupUi(this);
}

Dialog_admin::~Dialog_admin()
{
    delete ui;
}

void Dialog_admin::on_pushButton_2_clicked()
{
    this->close();
}

void Dialog_admin::setParent(Login *dialog)
{
    if(dialog != NULL){
        pWidget = dialog;
    }
}

void Dialog_admin::on_pushButton_clicked()
{
    pWidget->admin_user_info_stu.passwd = ui->lineEdit_passwd->text();
    pWidget->admin_user_info_stu.userName = ui->lineEdit_user->text();
    qDebug() << "the admin_dialog.ui data is" << "admin_user" << pWidget->admin_user_info_stu.passwd
    << "admin_passwd" << pWidget->admin_user_info_stu.userName;
    this->close();
}
