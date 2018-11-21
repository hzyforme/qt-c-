   #include "washdesign.h"
#include "ui_washdesign.h"
#include <QtSql>
#include <QMessageBox>
washdesign::washdesign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::washdesign)
{
    ui->setupUi(this);
    setWindowTitle(tr("设置衣物信息"));
}

washdesign::~washdesign()
{
    delete ui;
}
void washdesign::receivedesign()
{
    this->show();
}

void washdesign::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString zhonglei=ui->lineEdit_2->text();
    QString washproduce=ui->lineEdit_3->text();
    QString other=ui->lineEdit_4->text();
    QString yonghuming=ui->lineEdit_5->text();
    if(username==""||zhonglei==""||washproduce==""){
        QMessageBox::warning(this, tr("警告 !"),tr("不能为空!"),QMessageBox::Yes);
    }
    else {
       QSqlQuery query;
       query.exec("SELECT * FROM clouth WHERE username='" + username + "'");
       if(query.next()){
           QMessageBox::warning(this, tr("警告 !"),tr("该衣物名已存在 !"),QMessageBox::Yes);
           ui->lineEdit->clear();
           ui->lineEdit_2->clear();
           ui->lineEdit_3->clear();
           ui->lineEdit_4->clear();
       }
       else{
           QSqlQuery quer;
           quer.prepare("INSERT INTO clouth (yonghuming,username,zhonglei,washproduce,other) VALUES (:yonghuming,:username,:zhonglei,:washproduce,:other)");
           qDebug()<<"111";
           quer.bindValue(":yonghuming", yonghuming);
           quer.bindValue(":username", username);
           quer.bindValue(":zhonglei", zhonglei);
           quer.bindValue(":washproduce", washproduce);
           quer.bindValue(":other", other);
           quer.exec();
           QMessageBox::warning(this, tr("design!"),tr("设置成功 !"),QMessageBox::Yes);
           ui->lineEdit->clear();
           ui->lineEdit_2->clear();
           ui->lineEdit_3->clear();
           ui->lineEdit_4->clear();
           ui->lineEdit_5->clear();
           accept();
           this->hide();
           emit showmembermain();
       }
    }
}

void washdesign::on_pushButton_2_clicked()
{
    this->hide();
    emit showmembermain();
}
