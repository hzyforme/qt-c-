#include "dianmianregist.h"
#include "ui_dianmianregist.h"
#include <QtSql>
#include <QMessageBox>
dianmianregist::dianmianregist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dianmianregist)
{
    ui->setupUi(this);
    setWindowTitle(tr("店面注册"));
}

dianmianregist::~dianmianregist()
{
    delete ui;
}
void dianmianregist::receivedregist()
{
    this->show();
}

void dianmianregist::on_pushButton_clicked()
{
    QString username=ui->usrlineEdit->text();
    QString password=ui->pwdlineEdit->text();
    QString email=ui->emaillineEdit->text();
    QString info=ui->infolineEdit->text();
    QString dianname=ui->infolineEdit_2->text();
    QString address=ui->infolineEdit_3->text();
    if(username==""||password==""||email==""||info==""||address==""||dianname==""){
        QMessageBox::warning(this, tr("警告 !"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery query;
        query.exec("SELECT * FROM dianmianuser WHERE username='" + username + "'");
        if(query.next()){

            QMessageBox::warning(this, tr("警告 !"),tr("该用户已存在 !"),QMessageBox::Yes);
            ui->usrlineEdit->clear();
            ui->pwdlineEdit->clear();
            ui->usrlineEdit->setFocus();
        }
        else{

            QSqlQuery quer;
            quer.prepare("INSERT INTO dianmianuser (id,username,password,info,address,dianname) VALUES (:id,:username,:password,:info,:address,:dianname)");
            qDebug()<<"111";
            quer.bindValue(":id", ui->emaillineEdit->text());
            quer.bindValue(":username", username);
            quer.bindValue(":password", password);
            quer.bindValue(":info", info);
            quer.bindValue(":address", address);
            quer.bindValue(":dianname",dianname);
            quer.exec();
            QMessageBox::warning(this, tr("regist!"),tr("注册成功 !"),QMessageBox::Yes);
            accept();
            this->hide();
            emit showstore();
        }
    }
}

void dianmianregist::on_pushButton_2_clicked()
{
    this->hide();
    emit showmain();
}
