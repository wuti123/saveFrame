TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    src/readvideo.cpp

HEADERS += \
    include/readvideo.h

#opencv
INCLUDEPATH += /usr/include \
               /usr/include/opencv \
               /usr/include/opencv2
LIBS += -L /usr/local/lib/libopencv_*.so
