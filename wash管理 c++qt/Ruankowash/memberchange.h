#ifndef MEMBERCHANGE_H
#define MEMBERCHANGE_H

#include <QDialog>

namespace Ui {
class memberchange;
}

class memberchange : public QDialog
{
    Q_OBJECT

public:
    explicit memberchange(QWidget *parent = 0);
    ~memberchange();
private slots:
    void receivechange();
    void on_yes_modify_associator_BTN_clicked();
    void on_yes_modify_associator_BTN_2_clicked();

signals:
    void showmembermain();
private:
    Ui::memberchange *ui;
};

#endif // MEMBERCHANGE_H
