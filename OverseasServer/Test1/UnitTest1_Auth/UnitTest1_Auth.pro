QT += testlib sql network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_authtest.cpp \
    ../../server/mytcpserver.cpp \
    ../../server/parsing.cpp \
    ../../server/singletondb.cpp \
    ../../server/translate.cpp

HEADERS += \
    ../../server/mytcpserver.h \
    ../../server/parsing.h \
    ../../server/singletondb.h \
    ../../server/translate.h
