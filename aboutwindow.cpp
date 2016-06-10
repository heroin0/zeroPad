#include "aboutwindow.h"
#include <QWidget>
//#include "ui_aboutwindow.h"
aboutWindow::aboutWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QWidget)
{
ui->setupUi(this);
}

aboutWindow::~aboutWindow()
{
    delete ui;


}
