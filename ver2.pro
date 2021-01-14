#-------------------------------------------------
#
# Project created by QtCreator 2016-09-01T11:20:49
#
#-------------------------------------------------

QT       += core gui
include(qextserialport/qextserialport.pri)

TARGET = ver2
TEMPLATE = app

SOURCES += main.cpp\
        ventanaprincipal.cpp \
    portcfg.cpp

HEADERS  += ventanaprincipal.h \
    portcfg.h

FORMS    += ventanaprincipal.ui \
    portcfg.ui
