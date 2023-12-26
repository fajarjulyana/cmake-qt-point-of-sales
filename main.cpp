#include <QApplication>
#include "poswindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    POSWindow posWindow;
    posWindow.show();

    return app.exec();
}
