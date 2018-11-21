#include "memberchange.h"
#include "ui_memberchange.h"
#include <QtSql>
#include <QMessageBox>
memberchange::memberchange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberchange)
{
    ui->setupUi(this);
    setWindowTitle(tr("会员信息修改"));
}

memberchange::~memberchange()
{
    delete ui;
}
void memberchange::receivechange()
{
    this->show();
}

void memberchange::on_yes_modify_associator_BTN_clicked()
{
    QString username=ui->usrlineEdit->text();
    QString password=ui->pwdlineEdit->text();
    QString newpassword=ui->lineEdit_5->text();
    QString newaddress=ui->lineEdit_6->text();
    QString newemail=ui->lineEdit_7->text();
    QString newinfo=ui->lineEdit_8->text();
    if(username==""||password==""||newpassword==""||newaddress==""||newinfo==""||newemail==""){
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
        qDebug()<<"hh"<<rec.count();
        query.seek(-1);
        if(query.next()){
             QString str=query.value(2).toString();
             qDebug()<<str;
             if(password==str)

             {
                 query.exec("DELETE FROM userlogin WHERE username='" + username + "'");
                 qDebug()<<query.next();
                 QSqlQuery quer;
                 quer.prepare("INSERT INTO userlogin (id,username,password,info,address) VALUES (:id,:username,:password,:info,:address)");
                 qDebug()<<"111";
                 quer.bindValue(":id", newemail);
                 quer.bindValue(":username", username);
                 quer.bindValue(":password", newpassword);
                 quer.bindValue(":info", newinfo);
                 quer.bindValue(":address", newaddress);
                 quer.exec();
                 QMessageBox::warning(this, tr("succeed!"),tr("修改成功 !"),QMessageBox::Yes);
                 accept();
                 this->hide();
                 emit showmembermain();
                 ui->usrlineEdit->clear();
                 ui->pwdlineEdit->clear();
             }
             else {

                 QMessageBox::warning(this, tr("警告 !"),tr("用户名或原密码错误 !"),QMessageBox::Yes);
                 ui->usrlineEdit->clear();
                 ui->pwdlineEdit->clear();
                 ui->usrlineEdit->setFocus();
                 ui->lineEdit_5->clear();
                 ui->lineEdit_6->clear();
                 ui->lineEdit_7->clear();
                 ui->lineEdit_8->clear();
             }
        }
        else{
            QMessageBox::warning(this, tr("警告 !"),tr("该用户不存在!"),QMessageBox::Yes);
        }

    }
}

void memberchange::on_yes_modify_associator_BTN_2_clicked()
{
    this->hide();
    emit showmembermain();
}
