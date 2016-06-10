#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QMenu>
#include <QVBoxLayout>

#include <QUrl>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
