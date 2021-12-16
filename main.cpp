#include "onlearn.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Onlearn w;
    w.show();
    return a.exec();
}
