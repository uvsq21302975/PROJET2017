#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

enum contenu_case
{
   rocher, arbre, eau, joueur, rien, impact
};

typedef struct t{

  contenu_case P[10][6] ;
} tab;


class Obstacle : public QGraphicsPixmapItem{


public:

Obstacle(QGraphicsItem * parent=0,contenu_case x=arbre);

int resistance;

};



#endif // OBSTACLE_H




