#-------------------------------------------------
#
# Project created by QtCreator 2015-08-04T19:01:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtGoodiesDemo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../../goodies/roundbutton/roundbutton.cpp \
    ../../goodies/hoverbutton/hoverbutton.cpp

HEADERS  += mainwindow.h \
    ../../goodies/roundbutton/roundbutton.h \
    ../../goodies/hoverbutton/hoverbutton.h

FORMS    += mainwindow.ui
