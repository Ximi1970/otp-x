#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
 * Qt include
 */
#include <QGuiApplication>
#include <QScreen>
#include <QPaintDevice>

/*
 * Constructor
 */
MainWindow::MainWindow( QWidget* parent )
    : QMainWindow( parent )
    , ui( new Ui::MainWindow )
{
    /*
     * Set the UI
     */
    ui->setupUi( this );

    int logDpiX = QGuiApplication::primaryScreen()->logicalDotsPerInchX();
    int logDpiY = QGuiApplication::primaryScreen()->logicalDotsPerInchY();
    int physDpiX = QGuiApplication::primaryScreen()->physicalDotsPerInchX();
    int physDpiY = QGuiApplication::primaryScreen()->physicalDotsPerInchY();
    QSizeF physSize = QGuiApplication::primaryScreen()->physicalSize();

    /*
     * Full screen
     */
    QSize size = QGuiApplication::primaryScreen()->size();
    resize( size );

    ui->widthLabel->setText( QString::number( size.width() ) );
    ui->heightLabel->setText( QString::number( size.height() ) );

    ui->logDpX->setText( QString::number( logDpiX ) );
    ui->logDpiY->setText( QString::number( logDpiY ) );

    ui->physDpiX->setText( QString::number( physDpiX ) );
    ui->physDpiY->setText( QString::number( physDpiY ) );

    ui->physSizeX->setText( QString::number( physSize.width() ) );
    ui->physSizeY->setText( QString::number( physSize.height() ) );
}


/*
 * Destructor
 */
MainWindow::~MainWindow()
{
    delete ui;
}
