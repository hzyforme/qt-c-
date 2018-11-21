#ifndef DIANMIANREGIST_H
#define DIANMIANREGIST_H

#include <QDialog>

namespace Ui {
class dianmianregist;
}

class dianmianregist : public QDialog
{
    Q_OBJECT

public:
    explicit dianmianregist(QWidget *parent = 0);
    ~dianmianregist();
private slots:
    void receivedregist();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
signals:
    void showmain();
    void showstore();
private:
    Ui::dianmianregist *ui;
};

#endif // DIANMIANREGIST_H
