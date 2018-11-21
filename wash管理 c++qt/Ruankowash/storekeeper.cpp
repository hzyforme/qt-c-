#include "storekeeper.h"
#include "ui_storekeeper.h"
#include <QtSql>
#include <QMessageBox>
storekeeper::storekeeper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storekeeper)
{
    ui->setupUi(this);
    setWindowTitle(tr("店主页面"));
}

storekeeper::~storekeeper()
{
    delete ui;
}
void storekeeper::receivestore()
{
    this->show();
}

void storekeeper::on_pushButton_clicked()
{
    QSqlQuery query;
    query.exec("SELECT * FROM clouth ");
    if(query.next()){
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
    }

}

void storekeeper::on_pushButton_3_clicked()
{
    QString ordername=ui->lineEdit->text();
    QString clouthname=ui->lineEdit_2->text();
    QString washproduce=ui->lineEdit_3->text();
    QString dealpeople=ui->lineEdit_4->text();
    QString condition=ui->lineEdit_5->text();
    QString otherthing=ui->lineEdit_6->text();




    if(ordername==""||clouthname==""||washproduce==""||dealpeople==""||condition==""){
        QMessageBox::warning(this, tr("警告!"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery qq;
        qq.exec("SELECT * FROM dingdan WHERE username='" + ordername + "'");

        if(qq.next()){
            qDebug()<<"fsdf";
            QMessageBox::warning(this, tr("警告!"),tr("该订单名已存在!"),QMessageBox::Yes);
        }
        else{
            QSqlQuery query;
            query.exec("SELECT * FROM clouth WHERE username='" + clouthname + "'");
            if(query.next()){
                QSqlQuery quer;
                quer.exec("SELECT * FROM yuangong WHERE username='" + dealpeople + "'");
                if(quer.next()){
                    QSqlQuery querss;
                    querss.exec("SELECT * FROM dingdan WHERE yifuname='" + clouthname + "'");
                    if(querss.next()){
                        QMessageBox::warning(this, tr("no!"),tr("该衣物已存在订单!"),QMessageBox::Yes);
                    }
                    else{
                        QSqlQuery quers;
                        quers.prepare("INSERT INTO dingdan (username,yifuname,washpin,dealpeople,zhuangtai,other) VALUES (:username,:yifuname,:washpin,:dealpeople,:zhuangtai,:other)");
                        qDebug()<<"111";
                        quers.bindValue(":username", ordername);
                        quers.bindValue(":yifuname", clouthname);
                        quers.bindValue(":dealpeople", dealpeople);
                        qDebug()<<"222";
                        quers.bindValue(":washpin", washproduce);
                        quers.bindValue(":zhuangtai", condition);
                        quers.bindValue(":other", otherthing);
                        quers.exec();

                        QMessageBox::warning(this, tr("design!"),tr("设置成功 !"),QMessageBox::Yes);


                        ui->lineEdit->clear();
                        ui->lineEdit_2->clear();
                        ui->lineEdit_3->clear();
                        ui->lineEdit_4->clear();
                        ui->lineEdit_5->clear();
                        ui->lineEdit_6->clear();
                    }
                }
                else{
                    QMessageBox::warning(this, tr("warning!"),tr("该员工不存在 !"),QMessageBox::Yes);
                    ui->lineEdit->clear();
                    ui->lineEdit_2->clear();
                    ui->lineEdit_3->clear();
                    ui->lineEdit_4->clear();
                    ui->lineEdit_5->clear();
                    ui->lineEdit_6->clear();
                }

            }
            else{
                QMessageBox::warning(this, tr("警告!"),tr("该衣物不存在!"),QMessageBox::Yes);
            }

        }
    }

}

void storekeeper::on_pushButton_4_clicked()
{
    QString ordername=ui->lineEdit_12->text();
    QString clouthname=ui->lineEdit_7->text();
    QString washproduce=ui->lineEdit_8->text();
    QString dealpeople=ui->lineEdit_10->text();
    QString condition=ui->lineEdit_9->text();
    QString otherthing=ui->lineEdit_11->text();
    if(ordername==""||clouthname==""||washproduce==""||dealpeople==""||condition==""){
        QMessageBox::warning(this, tr("警告!"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery qq;
        qq.exec("SELECT * FROM dingdan WHERE username='" + ordername + "'");

        if(qq.next()){
            QString str=qq.value(2).toString();
            if(str==clouthname){
                QSqlQuery query;
                query.exec("DELETE FROM dingdan WHERE username='" + ordername + "'");
                QSqlQuery quers;
                quers.prepare("INSERT INTO dingdan (username,yifuname,washpin,dealpeople,zhuangtai,other) VALUES (:username,:yifuname,:washpin,:dealpeople,:zhuangtai,:other)");
                qDebug()<<"111";
                quers.bindValue(":username", ordername);
                quers.bindValue(":yifuname", clouthname);
                quers.bindValue(":dealpeople", dealpeople);
                qDebug()<<"222";
                quers.bindValue(":washpin", washproduce);
                quers.bindValue(":zhuangtai", condition);
                quers.bindValue(":other", otherthing);
                quers.exec();

                QMessageBox::warning(this, tr("succeed!"),tr("修改成功 !"),QMessageBox::Yes);
            }
            else{
                QMessageBox::warning(this, tr("failed!"),tr("修改失败 !"),QMessageBox::Yes);
                ui->lineEdit_7->clear();
                ui->lineEdit_8->clear();
                ui->lineEdit_9->clear();
                ui->lineEdit_10->clear();
                ui->lineEdit_11->clear();
                ui->lineEdit_12->clear();
            }
        }
}
}

void storekeeper::on_pushButton_2_clicked()
{
    exit(0);
}

void storekeeper::on_pushButton_5_clicked()
{
    QString username=ui->lineEdit_13->text();
    QString salary=ui->lineEdit_14->text();
    QString tianjiatime=ui->lineEdit_15->text();
    QString lizhitime=ui->lineEdit_18->text();
    QString leibie=ui->lineEdit_16->text();
    QString suoshu=ui->lineEdit_17->text();
    if(username==""||salary==""||tianjiatime==""||leibie==""||suoshu==""){
         QMessageBox::warning(this, tr("警告!"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery qq;
        qq.exec("SELECT * FROM yuangong WHERE username='" + username + "'");
        if(qq.next()){
            QMessageBox::warning(this, tr("failed!"),tr("该员工已存在!"),QMessageBox::Yes);
        }
        else{
            QSqlQuery qs;
            qs.exec("SELECT * FROM dianmianuser WHERE dianname='" + suoshu + "'");
            if(qs.next()){

                QSqlQuery quers;
                quers.prepare("INSERT INTO yuangong (username,salary,time,leibie,dianmian,lizhitime) VALUES (:username,:salary,:time,:leibie,:dianmian,:lizhitime)");
                qDebug()<<"111";
                quers.bindValue(":username", username);
                quers.bindValue(":salary", salary);
                quers.bindValue(":time", tianjiatime);
                qDebug()<<"222";
                quers.bindValue(":leibie", leibie);
                quers.bindValue(":dianmian", suoshu);
                quers.bindValue(":lizhitime", lizhitime);
                quers.exec();
                QMessageBox::warning(this, tr("succeed!"),tr("添加成功 !"),QMessageBox::Yes);
                ui->lineEdit_13->clear();
                ui->lineEdit_14->clear();
                ui->lineEdit_15->clear();
                ui->lineEdit_16->clear();
                ui->lineEdit_17->clear();
                ui->lineEdit_18->clear();
            }
            else{
                QMessageBox::warning(this, tr("failed!"),tr("添加失败，店面不存在 !"),QMessageBox::Yes);
                ui->lineEdit_17->clear();

            }
        }
    }

}

void storekeeper::on_pushButton_6_clicked()
{
    QString username=ui->yuangongming->text();
    QString salary=ui->salary->text();
    QString tianjiatime=ui->tianjiatime->text();
    QString lizhitime=ui->lizhitime->text();
    QString leibie=ui->leibie->text();
    QString suoshu=ui->suoshu->text();
    if(username==""||salary==""||tianjiatime==""||leibie==""||suoshu==""){
         QMessageBox::warning(this, tr("警告!"),tr("不能为空!"),QMessageBox::Yes);
    }
    else{
        QSqlQuery qq;
        qq.exec("SELECT * FROM yuangong WHERE username='" + username + "'");
        if(qq.next()){
            QString str=qq.value(4).toString();
            if(str==suoshu){
                QSqlQuery query;
                query.exec("DELETE FROM yuangong WHERE username='" + username + "'");
                QSqlQuery quers;
                quers.prepare("INSERT INTO yuangong (username,salary,time,leibie,dianmian,lizhitime) VALUES (:username,:salary,:time,:leibie,:dianmian,:lizhitime)");
                qDebug()<<"111";
                quers.bindValue(":username", username);
                quers.bindValue(":salary", salary);
                quers.bindValue(":time", tianjiatime);
                qDebug()<<"222";
                quers.bindValue(":leibie", leibie);
                quers.bindValue(":dianmian", suoshu);
                quers.bindValue(":lizhitime", lizhitime);
                quers.exec();
                QMessageBox::warning(this, tr("succeed!"),tr("修改成功 !"),QMessageBox::Yes);
                ui->yuangongming->clear();
                ui->leibie->clear();
                ui->tianjiatime->clear();
                ui->lizhitime->clear();
                ui->suoshu->clear();
                ui->salary->clear();
            }
            else{
                 QMessageBox::warning(this, tr("警告!"),tr("员工店面对应不对!"),QMessageBox::Yes);
            }
        }
    }
}

void storekeeper::on_pushButton_7_clicked()
{
    QString username=ui->dianmian->text();
    QSqlQuery query;
    query.exec("SELECT * FROM yuangong WHERE dianmian='" + username + "'");
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
        QMessageBox::warning(this, tr("店面名!"),tr("查询失败 !"),QMessageBox::Yes);
    }
}
