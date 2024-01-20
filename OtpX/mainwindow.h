#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*
 * Set OtpX namespace
 */
QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:

        /**
         * @brief MainWindow. Constructor.
         *
         *  @param parent
         */
        MainWindow( QWidget* parent = nullptr );

        /**
         * @brief MainWindow. Destructor.
         */
        ~MainWindow();

    private:

        /**
         * @brief ui. Pointer to the UI
         */
        Ui::MainWindow* ui;
};

#endif // MAINWINDOW_H
