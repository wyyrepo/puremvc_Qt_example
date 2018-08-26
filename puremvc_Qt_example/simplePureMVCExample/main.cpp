#include "simplepuremvcexample.h"

#include "AppFacade.h"

#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simplePureMVCExample w;
    w.show();

    AppFacade::getInstance().startUp(&w);

    return a.exec();
}
