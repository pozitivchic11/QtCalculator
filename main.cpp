#include "QtCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QtCalculator w;

    w.resize(400, 600);
    w.setMaximumSize(400, 600);

    w.show();

    return a.exec();
}
