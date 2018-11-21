#ifndef MEMBERLOGIN_H
#define MEMBERLOGIN_H

#include <QDialog>

namespace Ui {
class memberlogin;
}

class memberlogin : public QDialog
{
    Q_OBJECT

public:
    explicit memberlogin(QWidget *parent = 0);
    ~memberlogin();


private slots:
    void on_pushButton_3_clicked();
    void receivelogin();
    void on_pushButton_clicked();

signals:
    void showmembermain();
    void showmain();
private:
    Ui::memberlogin *ui;
};

#endif // MEMBERLOGIN_H
