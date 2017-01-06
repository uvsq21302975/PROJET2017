#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "Obstacle.h"




    Obstacle::Obstacle(QGraphicsItem *parent,type_obstacle x): QGraphicsPixmapItem(parent){

        switch (x) {
        case rocher:
            resistance=50;
             setPixmap(QPixmap("image_rocher.jpg").scaled(1000/10,600/6, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
            break;
        case arbre:
            resistance=10;
            setPixmap(QPixmap("image_arbre.png").scaled(1000/10,600/6, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
            break;
        case eau:
            resistance=1000;
            setPixmap(QPixmap("image_eau.jpg").scaled(1000/10,600/6, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
            break;
        default:
            break;
        }

    }


