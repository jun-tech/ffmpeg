#-------------------------------------------------
#
# Project created by QtCreator 2020-06-07T13:05:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gdigrab
TEMPLATE = app

contains(QT_ARCH, i386) {
message("32-bit")
DESTDIR = $${PWD}/bin32
} else {
message("64-bit")
DESTDIR = $${PWD}/bin64
}



unix{

#INCLUDEPATH += $$PWD/ffmpeg-4.4/include
#LIBS += -L$$PWD/ffmpeg-4.4/lib -lavcodec -lavdevice -lavfilter -lavformat -lavutil -lpostproc -lswresample -lswscale

INCLUDEPATH += /data/home/jun/mysoft-installed/ffmpeg-4.4/include
LIBS += -L/data/home/jun/mysoft-installed/ffmpeg-4.4/lib -lavcodec -lavdevice -lavfilter -lavformat -lavutil -lpostproc -lswresample -lswscale
}

win32{

contains(QT_ARCH, i386) {
message("32-bit")
INCLUDEPATH += $$PWD/lib/win32/ffmpeg/include
$$PWD/src

LIBS += -L$$PWD/lib/win32/ffmpeg/lib -lavcodec -lavdevice -lavfilter -lavformat -lavutil -lpostproc -lswresample -lswscale

} else {
message("64-bit")
INCLUDEPATH += $$PWD/lib/win64/ffmpeg/include
$$PWD/src

LIBS += -L$$PWD/lib/win64/ffmpeg/lib -lavcodec -lavdevice -lavfilter -lavformat -lavutil -lpostproc -lswresample -lswscale
}

}


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/gdigrab.cpp \
    src/aencode.cpp \
    src/rtmpscreen.cpp

HEADERS  += src/mainwindow.h \
    src/gdigrab.h \
    src/aencode.h \
    src/rtmpscreen.h

FORMS    += src/mainwindow.ui
