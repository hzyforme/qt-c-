#ifndef DIANMIANLOGIN_H
#define DIANMIANLOGIN_H

#include <QDialog>

namespace Ui {
class dianmianlogin;
}

class dianmianlogin : public QDialog
{
    Q_OBJECT

public:
    explicit dianmianlogin(QWidget *parent = 0);
    ~dianmianlogin();

private slots:
    void on_pushButton_3_clicked();
    void receivedlogin();
    void on_pushButton_clicked();

signals:
    void showmain();
    void showstore();
private:
    Ui::dianmianlogin *ui;
};

#endif // DIANMIANLOGIN_H
