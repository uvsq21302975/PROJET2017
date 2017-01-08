#include "Canon.h"
#include <QGraphicsScene>
#include "Fenetre.h"
#include <QKeyEvent>


extern Fenetre * fenetre;

Canon::Canon(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    angleH = 0;
    angleV = 0;
    angle_actuel=0;// probleme initaliser place du canon selon direction tank

    setPixmap(QPixmap("image_canon.jpeg"));
    setZValue(2);//superieur au tank car on affiche par dessus
}




