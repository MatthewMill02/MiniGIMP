#include "appstyle.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    applyModernAppStyle(&a);
    MainWindow w;
    w.show();
    return a.exec();
}
