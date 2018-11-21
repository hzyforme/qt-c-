#ifndef WASHDESIGN_H
#define WASHDESIGN_H

#include <QDialog>

namespace Ui {
class washdesign;
}

class washdesign : public QDialog
{
    Q_OBJECT

public:
    explicit washdesign(QWidget *parent = 0);
    ~washdesign();
private slots:
    void receivedesign();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void showmembermain();
private:
    Ui::washdesign *ui;
};

#endif // WASHDESIGN_H
