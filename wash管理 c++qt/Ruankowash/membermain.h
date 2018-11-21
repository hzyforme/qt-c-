#ifndef MEMBERMAIN_H
#define MEMBERMAIN_H

#include <QDialog>

namespace Ui {
class membermain;
}

class membermain : public QDialog
{
    Q_OBJECT

public:
    explicit membermain(QWidget *parent = 0);
    ~membermain();

private slots:
    void on_pushButton_clicked();
    void receive();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

signals:
    void showchange();
    void showdesign();
private:
    Ui::membermain *ui;
};

#endif // MEMBERMAIN_H
