#include "mainwindow.h"

/*
 * Qt includes
 */
#include <QGuiApplication>
#include <QApplication>

/*
 * Main
 */
int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute( Qt::AA_EnableHighDpiScaling );

    QApplication a( argc, argv );
    MainWindow w;
    w.show();
    return a.exec();
}
