/********************************************************************************
** Form generated from reading UI file 'memberlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERLOGIN_H
#define UI_MEMBERLOGIN_H

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

class Ui_memberlogin
{
public:
    QPushButton *pushButton;
    QLineEdit *pwdlineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *usrlineEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *memberlogin)
    {
        if (memberlogin->objectName().isEmpty())
            memberlogin->setObjectName(QStringLiteral("memberlogin"));
        memberlogin->resize(400, 300);
        pushButton = new QPushButton(memberlogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 170, 93, 28));
        pwdlineEdit = new QLineEdit(memberlogin);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(170, 100, 113, 21));
        label_2 = new QLabel(memberlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 100, 72, 15));
        label = new QLabel(memberlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 72, 15));
        usrlineEdit = new QLineEdit(memberlogin);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(170, 50, 113, 21));
        pushButton_3 = new QPushButton(memberlogin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 170, 93, 28));

        retranslateUi(memberlogin);

        QMetaObject::connectSlotsByName(memberlogin);
    } // setupUi

    void retranslateUi(QDialog *memberlogin)
    {
        memberlogin->setWindowTitle(QApplication::translate("memberlogin", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("memberlogin", "\351\200\200\345\207\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("memberlogin", "\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("memberlogin", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("memberlogin", "\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class memberlogin: public Ui_memberlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERLOGIN_H
