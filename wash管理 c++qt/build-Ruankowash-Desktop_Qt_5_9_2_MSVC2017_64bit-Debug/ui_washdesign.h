/********************************************************************************
** Form generated from reading UI file 'washdesign.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WASHDESIGN_H
#define UI_WASHDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_washdesign
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *washdesign)
    {
        if (washdesign->objectName().isEmpty())
            washdesign->setObjectName(QStringLiteral("washdesign"));
        washdesign->resize(368, 250);
        lineEdit = new QLineEdit(washdesign);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 113, 21));
        label = new QLabel(washdesign);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 72, 15));
        label_2 = new QLabel(washdesign);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 10, 91, 20));
        label_3 = new QLabel(washdesign);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 90, 71, 20));
        lineEdit_2 = new QLineEdit(washdesign);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 90, 113, 21));
        label_4 = new QLabel(washdesign);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 120, 81, 20));
        lineEdit_3 = new QLineEdit(washdesign);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 120, 113, 21));
        label_5 = new QLabel(washdesign);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 150, 81, 20));
        lineEdit_4 = new QLineEdit(washdesign);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 150, 113, 21));
        pushButton = new QPushButton(washdesign);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 180, 93, 28));
        pushButton_2 = new QPushButton(washdesign);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 180, 93, 28));
        label_6 = new QLabel(washdesign);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 30, 81, 20));
        lineEdit_5 = new QLineEdit(washdesign);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 30, 113, 21));

        retranslateUi(washdesign);

        QMetaObject::connectSlotsByName(washdesign);
    } // setupUi

    void retranslateUi(QDialog *washdesign)
    {
        washdesign->setWindowTitle(QApplication::translate("washdesign", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("washdesign", "\350\241\243\347\211\251\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("washdesign", "\350\256\276\347\275\256\350\241\243\347\211\251\344\277\241\346\201\257", Q_NULLPTR));
        label_3->setText(QApplication::translate("washdesign", "\350\241\243\347\211\251\347\247\215\347\261\273\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("washdesign", "\346\234\237\345\276\205\346\264\227\350\241\243\345\223\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("washdesign", "\345\205\266\344\273\226\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("washdesign", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("washdesign", "\351\200\200\345\207\272", Q_NULLPTR));
        label_6->setText(QApplication::translate("washdesign", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class washdesign: public Ui_washdesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WASHDESIGN_H
