#ifndef STOREKEEPER_H
#define STOREKEEPER_H

#include <QDialog>

namespace Ui {
class storekeeper;
}

class storekeeper : public QDialog
{
    Q_OBJECT

public:
    explicit storekeeper(QWidget *parent = 0);
    ~storekeeper();
private slots:
    void receivestore();
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::storekeeper *ui;
};

#endif // STOREKEEPER_H
