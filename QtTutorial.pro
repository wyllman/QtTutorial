######################################################################
# Automatically generated by qmake (2.01a) lun dic 15 16:48:15 2014
######################################################################

QT       += core gui

CONFIG += console

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = QtTutorial
DEPENDPATH += . lib lib/view
INCLUDEPATH += . lib/view

# Input
HEADERS += lib/view/mainwindow.h \
           lib/view/finddialog.h \
           lib/view/gotocelldialog.h \
    lib/view/sortdialog.h

FORMS +=   lib/view/mainwindow.ui \
           lib/view/gotocelldialog.ui \
           lib/view/sortdialog.ui

SOURCES += lib/main.cpp\
           lib/view/mainwindow.cpp \
           lib/view/finddialog.cpp \
           lib/view/gotocelldialog.cpp \
    lib/view/sortdialog.cpp

OTHER_FILES += \
               README.md \
               doc/VERSION_LOG
