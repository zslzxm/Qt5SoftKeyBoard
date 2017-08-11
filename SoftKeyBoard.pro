#-------------------------------------------------
#
# Project created by QtCreator 2017-08-11T14:02:59
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SoftKeyBoard
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    keyboard.cpp

HEADERS  += widget.h \
    keyboard.h

FORMS    += widget.ui \
    keyboard.ui

RESOURCES += \
    resource.qrc
