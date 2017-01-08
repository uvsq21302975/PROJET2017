#include "Obus.h"
#include <typeinfo>

Obus::Obus(QGraphicsItem *parent)
{


    setPixmap(QPixmap("image_obus.png").scaled(1000/10,600/6, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    //setZValue(-1);

}

/*
void Obus::tir()
{
// CREER OBUS


//test collision: obstacle
   //si vrai : detruire obstacle dans matrice plus rajouter image impact

    // SI FAUX
       // test collision 2 : enemi
        // si vrai: fin de partie: tank supprimé


}

//1e etape : calculer point d'impact de l'obus
//          modifier terrain(matrice) : detruire item visuellement plus dans la matrice
//          passer le tour

*/
