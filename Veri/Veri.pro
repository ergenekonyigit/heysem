#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T09:46:57
#
#-------------------------------------------------

QT       += core gui sql

TARGET = Veri
TEMPLATE = lib

DEFINES += VERI_LIBRARY

SOURCES += \
    otobus.cpp \
    metro.cpp \
    vapur.cpp \
    veritabani.cpp

HEADERS +=\
        veri_global.h \
    graf.h \
    otobus.h \
    metro.h \
    vapur.h \
    veritabani.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
