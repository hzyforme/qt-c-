/********************************************************************************
** Form generated from reading UI file 'dianmianregist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIANMIANREGIST_H
#define UI_DIANMIANREGIST_H

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

class Ui_dianmianregist
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *pwdlineEdit;
    QLineEdit *infolineEdit_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *usrlineEdit;
    QPushButton *pushButton_2;
    QLineEdit *emaillineEdit;
    QLineEdit *infolineEdit;
    QLabel *label_7;
    QLineEdit *infolineEdit_3;

    void setupUi(QDialog *dianmianregist)
    {
        if (dianmianregist->objectName().isEmpty())
            dianmianregist->setObjectName(QStringLiteral("dianmianregist"));
        dianmianregist->resize(400, 300);
        pushButton = new QPushButton(dianmianregist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 240, 93, 28));
        label_2 = new QLabel(dianmianregist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 111, 16));
        label_6 = new QLabel(dianmianregist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 180, 72, 15));
        label_3 = new QLabel(dianmianregist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 90, 72, 15));
        pwdlineEdit = new QLineEdit(dianmianregist);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(170, 90, 113, 21));
        infolineEdit_2 = new QLineEdit(dianmianregist);
        infolineEdit_2->setObjectName(QStringLiteral("infolineEdit_2"));
        infolineEdit_2->setGeometry(QRect(170, 180, 113, 21));
        label = new QLabel(dianmianregist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 72, 15));
        label_4 = new QLabel(dianmianregist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 120, 72, 15));
        label_5 = new QLabel(dianmianregist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 150, 72, 15));
        usrlineEdit = new QLineEdit(dianmianregist);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(170, 60, 113, 21));
        pushButton_2 = new QPushButton(dianmianregist);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 240, 93, 28));
        emaillineEdit = new QLineEdit(dianmianregist);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));
        emaillineEdit->setGeometry(QRect(170, 120, 113, 21));
        infolineEdit = new QLineEdit(dianmianregist);
        infolineEdit->setObjectName(QStringLiteral("infolineEdit"));
        infolineEdit->setGeometry(QRect(170, 150, 113, 21));
        label_7 = new QLabel(dianmianregist);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 210, 72, 15));
        infolineEdit_3 = new QLineEdit(dianmianregist);
        infolineEdit_3->setObjectName(QStringLiteral("infolineEdit_3"));
        infolineEdit_3->setGeometry(QRect(170, 210, 113, 21));

        retranslateUi(dianmianregist);

        QMetaObject::connectSlotsByName(dianmianregist);
    } // setupUi

    void retranslateUi(QDialog *dianmianregist)
    {
        dianmianregist->setWindowTitle(QApplication::translate("dianmianregist", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dianmianregist", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("dianmianregist", "\350\257\267\345\241\253\345\206\231\345\272\227\351\235\242\344\277\241\346\201\257", Q_NULLPTR));
        label_6->setText(QApplication::translate("dianmianregist", "\345\272\227\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("dianmianregist", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("dianmianregist", "\345\272\227\344\270\273\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("dianmianregist", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("dianmianregist", "\344\270\252\344\272\272\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("dianmianregist", "\351\200\200\345\207\272", Q_NULLPTR));
        label_7->setText(QApplication::translate("dianmianregist", "\345\272\227\351\235\242\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dianmianregist: public Ui_dianmianregist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIANMIANREGIST_H
