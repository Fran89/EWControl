#-------------------------------------------------
#
# Project created by QtCreator 2015-05-30T02:05:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ewcontrol
TEMPLATE = app

SOURCES += main.cpp\
        ewcontrol.cpp

HEADERS  += ewcontrol.h

ewcontrol.path = $$(EW_HOME)/$$(EW_VERSION)/bin
ewcontrol.files = ewcontrol

INSTALLS += ewcontrol

FORMS    += ewcontrol.ui

QMAKE_CXXFLAGS += -m32 -Dlinux -D__i386 -D_LINUX -D_INTEL -D_USE_SCHED  -D_USE_PTHREADS -D_USE_TERMIOS -Wno-write-strings
QMAKE_CFLAGS += -m32 -Dlinux -D__i386 -D_LINUX -D_INTEL -D_USE_SCHED  -D_USE_PTHREADS -D_USE_TERMIOS -Wno-write-strings

#unix:!macx: PRE_TARGETDEPS += $$(EW_HOME)/$$(EW_VERSION)/lib/libew.a $$(EW_HOME)/$$(EW_VERSION)/lib/dirops_ew.o

INCLUDEPATH += $$(EW_HOME)/$$(EW_VERSION)/include
DEPENDPATH += $$(EW_HOME)/$$(EW_VERSION)/include

LIBS += -L$$(EW_HOME)/$$(EW_VERSION)/lib/ -lew
OBJECTS += $$(EW_HOME)/$$(EW_VERSION)/lib/dirops_ew.o #$$PWD/../../../lib/libew.a

