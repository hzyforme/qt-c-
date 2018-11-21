/********************************************************************************
** Form generated from reading UI file 'memberregist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERREGIST_H
#define UI_MEMBERREGIST_H

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

class Ui_memberregist
{
public:
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLineEdit *pwdlineEdit;
    QLabel *label_3;
    QLineEdit *infolineEdit_2;
    QLineEdit *emaillineEdit;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *infolineEdit;
    QLineEdit *usrlineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *memberregist)
    {
        if (memberregist->objectName().isEmpty())
            memberregist->setObjectName(QStringLiteral("memberregist"));
        memberregist->resize(400, 300);
        label_4 = new QLabel(memberregist);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 110, 72, 15));
        pushButton_2 = new QPushButton(memberregist);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 200, 93, 28));
        pwdlineEdit = new QLineEdit(memberregist);
        pwdlineEdit->setObjectName(QStringLiteral("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(180, 80, 113, 21));
        label_3 = new QLabel(memberregist);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 80, 72, 15));
        infolineEdit_2 = new QLineEdit(memberregist);
        infolineEdit_2->setObjectName(QStringLiteral("infolineEdit_2"));
        infolineEdit_2->setGeometry(QRect(180, 170, 113, 21));
        emaillineEdit = new QLineEdit(memberregist);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));
        emaillineEdit->setGeometry(QRect(180, 110, 113, 21));
        label_6 = new QLabel(memberregist);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 170, 72, 15));
        label_5 = new QLabel(memberregist);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 140, 72, 15));
        infolineEdit = new QLineEdit(memberregist);
        infolineEdit->setObjectName(QStringLiteral("infolineEdit"));
        infolineEdit->setGeometry(QRect(180, 140, 113, 21));
        usrlineEdit = new QLineEdit(memberregist);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(180, 50, 113, 21));
        label = new QLabel(memberregist);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 50, 72, 15));
        pushButton = new QPushButton(memberregist);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 200, 93, 28));
        label_2 = new QLabel(memberregist);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 10, 72, 15));

        retranslateUi(memberregist);

        QMetaObject::connectSlotsByName(memberregist);
    } // setupUi

    void retranslateUi(QDialog *memberregist)
    {
        memberregist->setWindowTitle(QApplication::translate("memberregist", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("memberregist", "\351\202\256\347\256\261\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("memberregist", "\351\200\200\345\207\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("memberregist", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("memberregist", "\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("memberregist", "\344\270\252\344\272\272\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("memberregist", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("memberregist", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("memberregist", "\350\257\267\345\241\253\345\206\231\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class memberregist: public Ui_memberregist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERREGIST_H
