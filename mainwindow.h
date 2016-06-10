#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_close_triggered();

    void on_openFile_triggered();

    void on_about_triggered();

    void on_openFileAction_triggered();

    void on_closeAction_triggered();

    void on_aboutAction_triggered();

private:
    Ui::MainWindow *ui;
  //  Ui::AboutWindow *myAbout;
};

#endif // MAINWINDOW_H
