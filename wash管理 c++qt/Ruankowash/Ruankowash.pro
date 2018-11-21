#-------------------------------------------------
#
# Project created by QtCreator 2017-10-27T20:08:40
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ruankowash
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    memberlogin.cpp \
    memberregist.cpp \
    membermain.cpp \
    memberchange.cpp \
    dianmianregist.cpp \
    dianmianlogin.cpp \
    washdesign.cpp \
    storekeeper.cpp

HEADERS += \
        mainwindow.h \
    memberlogin.h \
    memberregist.h \
    membermain.h \
    memberchange.h \
    dianmianregist.h \
    dianmianlogin.h \
    washdesign.h \
    storekeeper.h

FORMS += \
        mainwindow.ui \
    memberlogin.ui \
    memberregist.ui \
    membermain.ui \
    memberchange.ui \
    dianmianregist.ui \
    dianmianlogin.ui \
    washdesign.ui \
    storekeeper.ui
