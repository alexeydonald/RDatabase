#-------------------------------------------------
#
# Project created by QtCreator 2010-11-06T14:52:37
#
#-------------------------------------------------

QT       += core gui sql

TARGET = RCenter
TEMPLATE = app


!win32-borland:LIBS	*= -lodbc32
win32-borland:LIBS	*= $(BCB)/lib/PSDK/odbc32.lib

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
