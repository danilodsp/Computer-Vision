#-------------------------------------------------
#
# Project created by QtCreator 2012-12-21T00:14:11
#
#-------------------------------------------------

QT       += core gui

TARGET = camera
TEMPLATE = app


SOURCES += main.cpp\
        mcamera.cpp \
        captura.cpp

HEADERS  += mcamera.h \
            captura.h

FORMS    += mcamera.ui

INCLUDEPATH += C:/opencv/build/include/

LIBS += C:/opencv/build/bin/*.dll






