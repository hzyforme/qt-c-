/********************************************************************************
** Form generated from reading UI file 'membermain.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERMAIN_H
#define UI_MEMBERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_membermain
{
public:
    QLabel *label_4;
    QLineEdit *pwdlineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pwdlineEdit;
    QTableWidget *tableWidget;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *usrlineEdit;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLabel *label_10;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *membermain)
    {
        if (membermain->objectName().isEmpty())
            membermain->setObjectName(QStringLiteral("membermain"));
        membermain->resize(1122, 562);
        label_4 = new QLabel(membermain);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 380, 72, 15));
        pwdlineEdit_2 = new QLineEdit(membermain);
        pwdlineEdit_2->setObjectName(QStringLiteral("pwdlineEdit_2"));
        pwdlineEdit_2->setGeometry(QRect(180, 80, 113, 21));
        pushButton_2 = new QPushButton(membermain);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 410, 93, 28));
        label = new QLabel(membermain);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 10, 91, 16));
        label_2 = new QLabel(membermain);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 320, 121, 20));
        pwdlineEdit = new QLineEdit(membermain);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(190, 380, 113, 21));
        tableWidget = new QTableWidget(membermain);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 120, 511, 192));
        label_6 = new QLabel(membermain);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 80, 72, 15));
        pushButton = new QPushButton(membermain);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 80, 93, 28));
        usrlineEdit = new QLineEdit(membermain);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(190, 350, 113, 21));
        label_5 = new QLabel(membermain);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 50, 91, 16));
        pushButton_3 = new QPushButton(membermain);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1030, 530, 93, 28));
        lineEdit = new QLineEdit(membermain);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 50, 113, 21));
        label_3 = new QLabel(membermain);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 350, 91, 16));
        pushButton_4 = new QPushButton(membermain);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 470, 93, 28));
        label_8 = new QLabel(membermain);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(600, 350, 91, 31));
        lineEdit_3 = new QLineEdit(membermain);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(690, 70, 113, 21));
        label_9 = new QLabel(membermain);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(660, 390, 181, 20));
        label_10 = new QLabel(membermain);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(550, 70, 121, 20));
        tableWidget_2 = new QTableWidget(membermain);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(520, 120, 551, 191));
        pushButton_6 = new QPushButton(membermain);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(860, 70, 93, 28));
        pushButton_7 = new QPushButton(membermain);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(860, 360, 93, 28));
        lineEdit_4 = new QLineEdit(membermain);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(700, 410, 113, 21));
        pushButton_5 = new QPushButton(membermain);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(860, 40, 93, 28));
        lineEdit_2 = new QLineEdit(membermain);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(690, 40, 113, 21));
        label_7 = new QLabel(membermain);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(550, 40, 121, 20));
        label_11 = new QLabel(membermain);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(720, 10, 61, 16));
        lineEdit_5 = new QLineEdit(membermain);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(700, 360, 113, 21));
        label_12 = new QLabel(membermain);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(630, 410, 61, 20));
        label_13 = new QLabel(membermain);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(640, 440, 61, 20));
        lineEdit_6 = new QLineEdit(membermain);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(700, 440, 113, 21));

        retranslateUi(membermain);

        QMetaObject::connectSlotsByName(membermain);
    } // setupUi

    void retranslateUi(QDialog *membermain)
    {
        membermain->setWindowTitle(QApplication::translate("membermain", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("membermain", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("membermain", "\344\277\256\346\224\271", Q_NULLPTR));
        label->setText(QApplication::translate("membermain", "\346\237\245\346\211\276\344\274\232\345\221\230\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("membermain", "\344\274\232\345\221\230\344\277\241\346\201\257\344\277\256\346\224\271\347\241\256\350\256\244", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("membermain", "\351\202\256\347\256\261", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("membermain", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("membermain", "\345\257\206\347\240\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("membermain", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("membermain", "\346\224\266\350\264\247\345\234\260\345\235\200", Q_NULLPTR));
        label_6->setText(QApplication::translate("membermain", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("membermain", "\346\237\245\346\211\276", Q_NULLPTR));
        label_5->setText(QApplication::translate("membermain", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("membermain", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("membermain", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("membermain", "\347\273\223\345\215\225", Q_NULLPTR));
        label_8->setText(QApplication::translate("membermain", "\350\256\242\345\215\225\344\277\241\346\201\257\347\241\256\350\256\244", Q_NULLPTR));
        label_9->setText(QApplication::translate("membermain", "\350\241\243\347\211\251\345\267\262\345\256\214\346\210\220\350\257\267\345\241\253\345\206\231\346\264\227\350\241\243\350\257\204\344\273\267", Q_NULLPTR));
        label_10->setText(QApplication::translate("membermain", "\346\237\245\346\211\276\350\241\243\347\211\251\350\256\242\345\215\225\344\277\241\346\201\257", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("membermain", "\350\256\242\345\215\225\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("membermain", "\346\264\227\350\241\243\345\223\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("membermain", "\350\241\243\347\211\251\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("membermain", "\350\256\242\345\215\225\345\244\204\347\220\206\345\221\230\345\267\245", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("membermain", "\350\256\242\345\215\225\345\244\204\347\220\206\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("membermain", "\345\205\266\344\273\226", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("membermain", "\346\237\245\346\211\276", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("membermain", "\344\270\213\345\215\225", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("membermain", "\350\256\276\347\275\256", Q_NULLPTR));
        label_7->setText(QApplication::translate("membermain", "\350\256\276\347\275\256\351\234\200\346\264\227\350\241\243\347\211\251\344\277\241\346\201\257", Q_NULLPTR));
        label_11->setText(QApplication::translate("membermain", "\345\207\206\345\244\207\344\270\213\345\215\225", Q_NULLPTR));
        label_12->setText(QApplication::translate("membermain", "\350\256\242\345\215\225\345\220\215:", Q_NULLPTR));
        label_13->setText(QApplication::translate("membermain", "\350\257\204\344\273\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class membermain: public Ui_membermain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERMAIN_H
