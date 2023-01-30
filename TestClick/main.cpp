#include "TestClick.h"
#include "Form2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestClick w;
    w.show();
    return a.exec();
}
