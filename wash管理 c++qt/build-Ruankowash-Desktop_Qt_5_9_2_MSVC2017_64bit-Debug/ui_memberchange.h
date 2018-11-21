/********************************************************************************
** Form generated from reading UI file 'memberchange.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCHANGE_H
#define UI_MEMBERCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_memberchange
{
public:
    QLineEdit *lineEdit_8;
    QLabel *label_4;
    QCommandLinkButton *yes_modify_associator_BTN_2;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *usrlineEdit;
    QLabel *label_2;
    QLineEdit *pwdlineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_6;
    QCommandLinkButton *yes_modify_associator_BTN;
    QLineEdit *lineEdit_7;
    QLabel *label_7;

    void setupUi(QDialog *memberchange)
    {
        if (memberchange->objectName().isEmpty())
            memberchange->setObjectName(QStringLiteral("memberchange"));
        memberchange->resize(399, 348);
        lineEdit_8 = new QLineEdit(memberchange);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(160, 210, 113, 21));
        label_4 = new QLabel(memberchange);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 180, 72, 15));
        yes_modify_associator_BTN_2 = new QCommandLinkButton(memberchange);
        yes_modify_associator_BTN_2->setObjectName(QStringLiteral("yes_modify_associator_BTN_2"));
        yes_modify_associator_BTN_2->setGeometry(QRect(140, 290, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(14);
        yes_modify_associator_BTN_2->setFont(font);
        yes_modify_associator_BTN_2->setAutoDefault(false);
        label_5 = new QLabel(memberchange);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 210, 72, 15));
        label = new QLabel(memberchange);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 101, 51));
        usrlineEdit = new QLineEdit(memberchange);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(160, 60, 113, 21));
        label_2 = new QLabel(memberchange);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 72, 15));
        pwdlineEdit = new QLineEdit(memberchange);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(160, 90, 113, 21));
        lineEdit_5 = new QLineEdit(memberchange);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 120, 113, 21));
        lineEdit_6 = new QLineEdit(memberchange);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 150, 113, 21));
        label_3 = new QLabel(memberchange);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 120, 72, 16));
        label_6 = new QLabel(memberchange);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 90, 72, 16));
        yes_modify_associator_BTN = new QCommandLinkButton(memberchange);
        yes_modify_associator_BTN->setObjectName(QStringLiteral("yes_modify_associator_BTN"));
        yes_modify_associator_BTN->setGeometry(QRect(140, 240, 91, 41));
        yes_modify_associator_BTN->setFont(font);
        yes_modify_associator_BTN->setAutoDefault(false);
        lineEdit_7 = new QLineEdit(memberchange);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(160, 180, 113, 21));
        label_7 = new QLabel(memberchange);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 60, 72, 16));

        retranslateUi(memberchange);

        QMetaObject::connectSlotsByName(memberchange);
    } // setupUi

    void retranslateUi(QDialog *memberchange)
    {
        memberchange->setWindowTitle(QApplication::translate("memberchange", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("memberchange", "\351\202\256\347\256\261\344\277\256\346\224\271\357\274\232", Q_NULLPTR));
        yes_modify_associator_BTN_2->setText(QApplication::translate("memberchange", "\351\200\200\345\207\272", Q_NULLPTR));
        label_5->setText(QApplication::translate("memberchange", "\344\277\241\346\201\257\344\277\256\346\224\271\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("memberchange", "\344\274\232\345\221\230\344\277\241\346\201\257\344\277\256\346\224\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("memberchange", "\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("memberchange", "\345\257\206\347\240\201\344\277\256\346\224\271\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("memberchange", "\345\216\237\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        yes_modify_associator_BTN->setText(QApplication::translate("memberchange", "\347\241\256\345\256\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("memberchange", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class memberchange: public Ui_memberchange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCHANGE_H
