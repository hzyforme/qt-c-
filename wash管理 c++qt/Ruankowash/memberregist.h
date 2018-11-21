#ifndef MEMBERREGIST_H
#define MEMBERREGIST_H

#include <QDialog>

namespace Ui {
class memberregist;
}

class memberregist : public QDialog
{
    Q_OBJECT

public:
    explicit memberregist(QWidget *parent = 0);
    ~memberregist();
private slots:
    void receiveregist();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void showmembermain();
    void showmain();
private:
    Ui::memberregist *ui;
};

#endif // MEMBERREGIST_H
