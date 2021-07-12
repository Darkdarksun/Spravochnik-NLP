#include "Sprav.h"

Sprav::Sprav(){

   Scene =  new QGraphicsScene();

   setScene(Scene);
   Scene->setSceneRect(0,0,1920,1080);

   setFixedSize(1920,1080);
   move(0,0);

}
