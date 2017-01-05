#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

enum type_obstacle
{
   rocher, arbre, eau, joueur, rien
};


class Obstacle : public QGraphicsPixmapItem{


public:

Obstacle(QGraphicsItem * parent=0,type_obstacle x=arbre);
int resistance;

};



#endif // OBSTACLE_H




