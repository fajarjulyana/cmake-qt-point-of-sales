#include "poswindow.h"
#include "ui_poswindow.h"

POSWindow::POSWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::POSWindow)
{
    ui->setupUi(this);
}

POSWindow::~POSWindow()
{
    delete ui;
}
