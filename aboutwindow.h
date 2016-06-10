#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QWidget>

#include <QWidget>
namespace Ui {
class aboutWindow;
}

class aboutWindow : public QWidget
{
    Q_OBJECT
public:
    explicit aboutWindow(QWidget *parent = 0);
    ~aboutWindow();
signals:

public slots:
private:
    Ui::aboutWindow *ui;
};

#endif // ABOUTWINDOW_H
