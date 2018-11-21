/********************************************************************************
** Form generated from reading UI file 'dianmianlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIANMIANLOGIN_H
#define UI_DIANMIANLOGIN_H

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

class Ui_dianmianlogin
{
public:
    QPushButton *pushButton_3;
    QLineEdit *pwdlineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *usrlineEdit;

    void setupUi(QDialog *dianmianlogin)
    {
        if (dianmianlogin->objectName().isEmpty())
            dianmianlogin->setObjectName(QStringLiteral("dianmianlogin"));
        dianmianlogin->resize(400, 300);
        pushButton_3 = new QPushButton(dianmianlogin);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 180, 93, 28));
        pwdlineEdit = new QLineEdit(dianmianlogin);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(150, 110, 113, 21));
        label = new QLabel(dianmianlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 72, 15));
        label_2 = new QLabel(dianmianlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 110, 72, 15));
        pushButton = new QPushButton(dianmianlogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 180, 93, 28));
        usrlineEdit = new QLineEdit(dianmianlogin);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(150, 60, 113, 21));

        retranslateUi(dianmianlogin);

        QMetaObject::connectSlotsByName(dianmianlogin);
    } // setupUi

    void retranslateUi(QDialog *dianmianlogin)
    {
        dianmianlogin->setWindowTitle(QApplication::translate("dianmianlogin", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("dianmianlogin", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("dianmianlogin", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("dianmianlogin", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dianmianlogin", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dianmianlogin: public Ui_dianmianlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIANMIANLOGIN_H
