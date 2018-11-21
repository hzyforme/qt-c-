#include "memberlogin.h"
#include "ui_memberlogin.h"
#include <QtSql>
#include <QMessageBox>
memberlogin::memberlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberlogin)
{
    ui->setupUi(this);
    setWindowTitle(tr("会员登录"));
}

memberlogin::~memberlogin()
{
    delete ui;
}

void memberlogin::on_pushButton_3_clicked()
{
    QString username=ui->usrlineEdit->text();
    QString password=ui->pwdlineEdit->text();
    if(username==""||password==""){
        QMessageBox::warning(this, tr("警告 !"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        qDebug()<<username;
        //QVariant variant(username);
        //qDebug()<<variant;
        QSqlQuery query;
        bool success = query.exec("SELECT * FROM userlogin WHERE username='" + username + "'");

        qDebug()<<success;
        if(!success){
            qDebug() << "查询user失败";return;
        }

        QSqlRecord rec=query.record();
        qDebug()<<"sdds"<<rec.count();
        query.seek(-1);
        if(query.next()){
             QString str=query.value(2).toString();
             qDebug()<<str;
             if(password==str)

             {
              QMessageBox::warning(this, tr("login!"),tr("登录成功 !"),QMessageBox::Yes);
              accept();
              this->hide();
              emit showmembermain();
             }
             else {

                 QMessageBox::warning(this, tr("警告 !"),tr("用户名或密码错误 !"),QMessageBox::Yes);
                 ui->usrlineEdit->clear();
                 ui->pwdlineEdit->clear();
                 ui->usrlineEdit->setFocus();
             }
        }
        else{
            QMessageBox::warning(this, tr("警告 !"),tr("该用户不存在!"),QMessageBox::Yes);
        }

    }
}
void memberlogin::receivelogin()
{
    this->show();
}

void memberlogin::on_pushButton_clicked()
{
    this->hide();
    emit showmain();
}
