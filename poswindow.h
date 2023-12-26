#ifndef POSWINDOW_H
#define POSWINDOW_H

#include <QMainWindow>

namespace Ui {
class POSWindow;
}

class POSWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit POSWindow(QWidget *parent = nullptr);
    ~POSWindow();

private:
    Ui::POSWindow *ui;
};

#endif // POSWINDOW_H
