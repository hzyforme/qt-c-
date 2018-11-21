#include "membermain.h"
#include "ui_membermain.h"
#include <QtSql>
#include <QMessageBox>
membermain::membermain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::membermain)
{
    ui->setupUi(this);
    setWindowTitle(tr("会员页面"));
}

membermain::~membermain()
{
    delete ui;
}

void membermain::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString password=ui->pwdlineEdit_2->text();
    if(username==""||password==""){
        QMessageBox::warning(this, tr("警告 !"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        qDebug()<<username;
        //QVariant variant(username);
        //qDebug()<<variant;
        QSqlQuery query;
        query.exec("SELECT * FROM userlogin WHERE username='" + username + "'");
        //query.seek(-1);
        if(query.next()){
             QString str=query.value(2).toString();
             qDebug()<<str;
             if(password==str)
             {

                 qDebug()<<"sfsf";
                 int i=0,j=0,nColumn,nRow;
                 query.last();
                 nRow=query.at()+1;
                 qDebug()<<nRow;
                 ui->tableWidget->setRowCount(nRow);
                 nColumn=ui->tableWidget->columnCount();
                 query.first();
                 while(j<nRow)
                     {
                     for (i = 0; i<nColumn; i++)
                     ui->tableWidget->setItem(j, i, new QTableWidgetItem(query.value(i).toString()));
                     j++;
                     query.next();
                     }
                 QMessageBox::warning(this, tr("信息验证!"),tr("查询成功 !"),QMessageBox::Yes);
                 ui->lineEdit->clear();
                 ui->pwdlineEdit_2->clear();
             }
             else {

                 QMessageBox::warning(this, tr("警告 !"),tr("用户名或密码错误 !"),QMessageBox::Yes);
                 ui->lineEdit->clear();
                 ui->pwdlineEdit_2->clear();
                 ui->lineEdit->setFocus();
             }
        }
        else{
            QMessageBox::warning(this, tr("警告 !"),tr("该用户不存在!"),QMessageBox::Yes);
        }

    }
}
void membermain::receive()
{
    this->show();
}

void membermain::on_pushButton_2_clicked()
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
              QMessageBox::warning(this, tr("信息验证!"),tr("验证成功 !"),QMessageBox::Yes);
              accept();
              this->hide();
              emit showchange();
              ui->usrlineEdit->clear();
              ui->pwdlineEdit->clear();
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

void membermain::on_pushButton_3_clicked()
{
    exit(0);
}

void membermain::on_pushButton_5_clicked()
{
    this->hide();
    emit showdesign();
}

void membermain::on_pushButton_8_clicked()
{

}

void membermain::on_pushButton_6_clicked()
{
    QString yifuname=ui->lineEdit_3->text();
    QSqlQuery query;
    query.exec("SELECT * FROM dingdan WHERE yifuname='" + yifuname + "'");
    if(query.next()){
        int i=0,j=0,nColumn,nRow;
        query.last();
        nRow=query.at()+1;
        qDebug()<<nRow;
        ui->tableWidget_2->setRowCount(nRow);
        nColumn=ui->tableWidget_2->columnCount();
        query.first();
        while(j<nRow)
            {
            for (i = 0; i<nColumn; i++)
            ui->tableWidget_2->setItem(j, i, new QTableWidgetItem(query.value(i).toString()));
            j++;
            query.next();
            }
        QMessageBox::warning(this, tr("信息验证!"),tr("查询成功 !"),QMessageBox::Yes);
    }
    else{
        QMessageBox::warning(this, tr("衣物名错误!"),tr("查询失败 !"),QMessageBox::Yes);
    }
}

void membermain::on_pushButton_7_clicked()
{
    QString username=ui->lineEdit_5->text();
    QSqlQuery query;
    query.exec("SELECT * FROM dingdan WHERE yifuname='" + username + "'");
    if(query.next()){

        QString washpin=query.value(1).toString();
        QString clouthname=query.value(2).toString();
        QString dealpeople=query.value(3).toString();
        QString condition="makesure";
        QString other=query.value(5).toString();
        QSqlQuery quer;
        quer.exec("DELETE FROM dingdan WHERE yifuname='" + username + "'");
        QSqlQuery quers;
        quers.prepare("INSERT INTO dingdan (username,yifuname,washpin,dealpeople,zhuangtai,other) VALUES (:username,:yifuname,:washpin,:dealpeople,:zhuangtai,:other)");
        qDebug()<<"111";
        quers.bindValue(":username", username);
        quers.bindValue(":yifuname", clouthname);
        quers.bindValue(":dealpeople", dealpeople);
        qDebug()<<"222";
        quers.bindValue(":washpin", washpin);
        quers.bindValue(":zhuangtai", condition);
        quers.bindValue(":other", other);
        quers.exec();

        QMessageBox::warning(this, tr("succeed!"),tr("下单成功 !"),QMessageBox::Yes);

    }
    else{
        QMessageBox::warning(this, tr("failed!"),tr("衣物名错误!"),QMessageBox::Yes);
    }
}

void membermain::on_pushButton_4_clicked()
{
    QString username=ui->lineEdit_4->text();
    QString pingjia=ui->lineEdit_6->text();
    QSqlQuery query;
    query.exec("SELECT * FROM dingdan WHERE username='" + username + "'");
    if(query.next()){
        QSqlQuery quer;
        quer.prepare("INSERT INTO pingjia (dingdanming,pingjia) VALUES (:dingdanming,:pingjia)");
        quer.bindValue(":dingdanming",username);
        quer.bindValue(":pingjia",pingjia);
        quer.exec();
        QMessageBox::warning(this, tr("succeed!"),tr("评价成功!"),QMessageBox::Yes);
    }
    else{
        QMessageBox::warning(this, tr("failed!"),tr("无此订单!"),QMessageBox::Yes);
        ui->lineEdit_4->clear();
    }
}
