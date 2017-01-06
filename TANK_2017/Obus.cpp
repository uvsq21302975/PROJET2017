/*#include "Obus.h"
#include <typeinfo>

Obus::Obus(int type): QGraphicsPixmapItem(parent){


    setPixmap(QPixmap("image_obus.png"));//image a telecharger

    QTimer * timer = new QTimer();

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}
*/
/*
void Obus::tir()
{
// CREER OBUS


    // get a list of all the items currently colliding with this bullet
       QList<QGraphicsItem *> colliding_items = collidingItems();

       // if one of the colliding items is an Enemy, destroy both the bullet and the enemy
       for (int i = 0, n = colliding_items.size(); i < n; ++i){
           if (typeid(*(colliding_items[i])) == typeid(arbre)){


               // remove them from the scene (still on the heap)
              // QGraphicsPixmapItem  colliding_items[i]->setPixmap(QPixmap(":/images/FellTree.png"));
               scene()->removeItem(this);

               // delete them from the heap to save memory
              // delete colliding_items[i];

               delete this;

               // return (all code below refers to a non existint bullet)
               return;
           }
       }

       // if there was no collision with an Enemy, move the bullet forward
       setPos(x()+10,y());
       // if the bullet is off the screen, destroy it
       if (pos().y() >600){
           scene()->removeItem(this);

           delete this;

        }
}

//1e etape : calculer point d'impact de l'obus
//          bouger obus
//          modifier terrain(matrice) : detruire item visuellement plus dans la matrice
//          passer le tour
*/
