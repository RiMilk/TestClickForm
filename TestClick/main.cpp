#include "TestClick.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestClick w;
    w.show();
    return a.exec();
}
