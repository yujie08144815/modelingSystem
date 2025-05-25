#include "ModelingSystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelingSystem w;
    w.show();
    return a.exec();
}
