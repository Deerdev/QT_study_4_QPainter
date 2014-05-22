#include "paintedwidget.h"
#include "painterantialiasing.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintedWidget w1;
    w1.show();
    painterAntialiasing w2;
    w2.show();

    return a.exec();
}
