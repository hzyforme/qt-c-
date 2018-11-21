#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QMessageBox>
#include "memberlogin.h"
#include "memberregist.h"
#include "membermain.h"
#include "memberchange.h"
#include "dianmianregist.h"
#include "dianmianlogin.h"
#include "washdesign.h"
#include "storekeeper.h"
int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("hzy");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("111111");
    bool ok = db.open();
    if(ok){
          qDebug()<<"succeed";
    }else{
          QMessageBox::warning(NULL,"warning","failed");
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    memberlogin ml;
    QObject::connect(&w,SIGNAL(showmember()),&ml,SLOT(receivelogin()));
    QObject::connect(&ml,SIGNAL(showmain()),&w,SLOT(receivemain()));
    memberregist mr;
    QObject::connect(&w,SIGNAL(showmemberregist()),&mr,SLOT(receiveregist()));
    QObject::connect(&mr,SIGNAL(showmain()),&w,SLOT(receivemain()));
    membermain mm;
    QObject::connect(&ml,SIGNAL(showmembermain()),&mm,SLOT(receive()));
    QObject::connect(&mr,SIGNAL(showmembermain()),&mm,SLOT(receive()));
    memberchange mc;
    QObject::connect(&mm,SIGNAL(showchange()),&mc,SLOT(receivechange()));
    QObject::connect(&mc,SIGNAL(showmembermain()),&mm,SLOT(receive()));
    dianmianregist dm;
    QObject::connect(&w,SIGNAL(showdianmianregist()),&dm,SLOT(receivedregist()));
    QObject::connect(&dm,SIGNAL(showmain()),&w,SLOT(receivemain()));
    dianmianlogin dl;
    QObject::connect(&w,SIGNAL(showdianmianlogin()),&dl,SLOT(receivedlogin()));
    QObject::connect(&dl,SIGNAL(showmain()),&w,SLOT(receivemain()));
    washdesign wd;
    QObject::connect(&mm,SIGNAL(showdesign()),&wd,SLOT(receivedesign()));
    QObject::connect(&wd,SIGNAL(showmembermain()),&mm,SLOT(receive()));
    storekeeper sk;
    QObject::connect(&dm,SIGNAL(showstore()),&sk,SLOT(receivestore()));
    QObject::connect(&dl,SIGNAL(showstore()),&sk,SLOT(receivestore()));
    return a.exec();
}
