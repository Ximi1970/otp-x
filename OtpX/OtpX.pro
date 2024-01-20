QT       += core gui widgets

lessThan(QT_MAJOR_VERSION, 5): error( "Only made for Qt 5.15" )
greaterThan(QT_MAJOR_VERSION, 5): error( "Only made for Qt 5.15" )

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
