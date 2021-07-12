#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>

#include "Sprav.h"

Sprav * nlp;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    nlp = new Sprav();
    nlp->show();

    return a.exec();
}
