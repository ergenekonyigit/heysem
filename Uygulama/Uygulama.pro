#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T09:47:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Uygulama
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    durakekleotobus.cpp \
    durakeklemetro.cpp \
    durakeklevapur.cpp \
    hatekleotobus.cpp \
    hateklemetro.cpp \
    hateklevapur.cpp

HEADERS  += mainwindow.h \
    durakekleotobus.h \
    durakeklemetro.h \
    durakeklevapur.h \
    hatekleotobus.h \
    hateklemetro.h \
    hateklevapur.h

FORMS    += mainwindow.ui \
    durakekleotobus.ui \
    durakeklemetro.ui \
    durakeklevapur.ui \
    hatekleotobus.ui \
    hateklemetro.ui \
    hateklevapur.ui
