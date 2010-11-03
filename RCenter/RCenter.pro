#-------------------------------------------------
#
# Project created by QtCreator 2010-10-30T02:53:57
#
#-------------------------------------------------

QT       += core gui
QT       += sql

TARGET = RCenter
TEMPLATE = app


!win32-borland:LIBS	*= -lodbc32
win32-borland:LIBS	*= $(BCB)/lib/PSDK/odbc32.lib

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
