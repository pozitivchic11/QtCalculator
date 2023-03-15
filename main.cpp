#include "QtCalculator.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("style.css");

    file.open(QFile::ReadOnly);

    a.setStyleSheet(file.readAll());

    QtCalculator w;

    w.resize(400, 600);
    w.setMaximumSize(400, 600);

    w.show();

    return a.exec();
}
