#include "ewcontrol.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ewcontrol w;
    w.show();

    return a.exec();
}
