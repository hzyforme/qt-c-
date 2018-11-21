#include "memberregist.h"
#include "ui_memberregist.h"
#include <QMessageBox>
#include <QtSql>
memberregist::memberregist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberregist)
{
    ui->setupUi(this);
    setWindowTitle(tr("会员注册"));
}

memberregist::~memberregist()
{
    delete ui;
}
void memberregist::receiveregist()
{
    this->show();
}

void memberregist::on_pushButton_clicked()
{
    QString username=ui->usrlineEdit->text();
    QString password=ui->pwdlineEdit->text();
    QString email=ui->emaillineEdit->text();
    QString info=ui->infolineEdit->text();
    QString address=ui->infolineEdit_2->text();
    if(username==""||password==""||email==""||info==""||address==""){
        QMessageBox::warning(this, tr("警告 !"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery query;
        query.exec("SELECT * FROM userlogin WHERE username='" + username + "'");
        if(query.next()){

            QMessageBox::warning(this, tr("警告 !"),tr("该用户已存在 !"),QMessageBox::Yes);
            ui->usrlineEdit->clear();
            ui->pwdlineEdit->clear();
            ui->usrlineEdit->setFocus();
        }
        else{

            QSqlQuery quer;
            quer.prepare("INSERT INTO userlogin (id,username,password,info,address) VALUES (:id,:username,:password,:info,:address)");
            qDebug()<<"111";
            quer.bindValue(":id", ui->emaillineEdit->text());
            quer.bindValue(":username", username);
            quer.bindValue(":password", password);
            quer.bindValue(":info", info);
            quer.bindValue(":address", address);
            quer.exec();
            QMessageBox::warning(this, tr("regist!"),tr("注册成功 !"),QMessageBox::Yes);
            accept();
            this->hide();
            emit showmembermain();


        }
    }
}

void memberregist::on_pushButton_2_clicked()
{
    this->hide();
    emit showmain();
}
