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
    durakeklemetro.cpp \
    durakekleotobus.cpp \
    durakeklevapur.cpp \
    hateklemetro.cpp \
    hatekleotobus.cpp \
    hateklevapur.cpp

HEADERS  += mainwindow.h \
    durakeklemetro.h \
    durakekleotobus.h \
    durakeklevapur.h \
    hateklemetro.h \
    hatekleotobus.h \
    hateklevapur.h

FORMS    += mainwindow.ui \
    durakeklemetro.ui \
    durakekleotobus.ui \
    durakeklevapur.ui \
    hateklemetro.ui \
    hatekleotobus.ui \
    hateklevapur.ui

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Veri/release/ -lVeri
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Veri/debug/ -lVeri
else:unix: LIBS += -L$$OUT_PWD/../Veri/ -lVeri

INCLUDEPATH += $$PWD/../Veri
DEPENDPATH += $$PWD/../Veri
