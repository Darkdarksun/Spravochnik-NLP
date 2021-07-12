#ifndef SPRAV_H
#define SPRAV_H

#include <QGraphicsScene>
#include <QGraphicsView>

class Sprav: public QGraphicsView
{
    public:
        Sprav();

        QGraphicsScene * Scene;
};

#endif // SPRAV_H
