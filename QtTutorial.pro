#-------------------------------------------------
#
# Project created by QtCreator 2014-12-15T13:50:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtTutorial
TEMPLATE = app


SOURCES += lib/main.cpp\
           lib/view/mainwindow.cpp

HEADERS  += lib/view/mainwindow.h

FORMS    += lib/view/mainwindow.ui

OTHER_FILES += \
    doc/VERSION_LOG \
    README.md
