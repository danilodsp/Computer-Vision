#include <QtGui/QApplication>
#include "mcamera.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mCamera w;
    w.show();

    return a.exec();
}
