#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include "aboutwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openFileAction_triggered()
{
    QUrl fileName = QFileDialog::getOpenFileName(this,
                                                 tr("Open Text File"), "/home/", tr("Text files (*.txt)"));
    ui->textBrowser->setSource(fileName);
}

void MainWindow::on_closeAction_triggered()
{
    this->close();
}

void MainWindow::on_aboutAction_triggered()
{
    AboutWindow myAbout;
    myAbout.exec();
}
