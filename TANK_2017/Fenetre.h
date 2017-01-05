#ifndef FENETRE_H
#define FENETRE_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Tank.h"
#include "Obstacle.h"





namespace Ui {
class Fenetre;
}

class Fenetre : public QGraphicsView
{
public:
    Fenetre();



    QGraphicsScene *scene;
    Tank * player;



};

#endif // FENETRE_H
