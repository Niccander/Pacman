#include "klasaglowna.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KlasaGlowna CPierwsza;
    CPierwsza.show();

    return a.exec();
}
