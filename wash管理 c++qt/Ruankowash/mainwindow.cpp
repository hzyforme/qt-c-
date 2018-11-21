#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("软酷洗衣管理系统登录"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    emit showmember();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->hide();
    emit showmemberregist();
}
void MainWindow::receivemain()
{
    this->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    this->hide();
    emit showdianmianregist();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    emit showdianmianlogin();
}
