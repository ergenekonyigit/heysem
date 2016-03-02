#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T09:46:57
#
#-------------------------------------------------

QT       -= gui

TARGET = Veri
TEMPLATE = lib

DEFINES += VERI_LIBRARY

SOURCES += veritabani.cpp \
    otobus.cpp \
    metro.cpp \
    denizaraclari.cpp

HEADERS += veritabani.h\
        veri_global.h \
    otobus.h \
    metro.h \
    denizaraclari.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
