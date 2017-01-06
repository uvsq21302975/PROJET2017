#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

enum type_obstacle
{
   rocher, arbre, eau, joueur, rien
};

typedef struct t{

  type_obstacle P[10][6] ;
} tab;


class Obstacle : public QGraphicsPixmapItem{


public:

Obstacle(QGraphicsItem * parent=0,type_obstacle x=arbre);

int resistance;

};



#endif // OBSTACLE_H




