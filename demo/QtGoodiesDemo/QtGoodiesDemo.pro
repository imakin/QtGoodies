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
    ../../goodies/hoverbutton/hoverbutton.cpp \
    ../../goodies/slider/slider.cpp \
    ../../goodies/hoverframe/hoverframe.cpp \
    demo1_slider.cpp

HEADERS  += mainwindow.h \
    ../../goodies/roundbutton/roundbutton.h \
    ../../goodies/hoverbutton/hoverbutton.h \
    ../../goodies/slider/slider.h \
    ../../goodies/hoverframe/hoverframe.h \
    demo1_slider.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc

OTHER_FILES += \
    ../../test/qtquick/GaleryButton.qml
