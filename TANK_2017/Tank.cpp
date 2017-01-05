#include "Tank.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>
//#include "fenetre.h"
#include <typeinfo>
#include <iostream>

using namespace std;



//extern Fenetre * fenetre;


Tank::Tank(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{


    setPixmap(QPixmap("image_tank.jpg"));
    direction = 0;
    canon_tank= new Canon();
    canon_tank->setFlag(QGraphicsItem::ItemIsFocusable);
    canon_tank->setTransformOriginPoint(5,30);

}





void Tank::keyPressEvent(QKeyEvent *event){






            if (event->key() == Qt::Key_Left){
                setRotation(270);
                if(direction == 0){
                    setPos(x()+10,y()+50);
                    direction = 3;

                   }
                    if(direction == 2){
                    setPos(x()-40,y()-25);
                    direction = 3;

                    }
                    if(direction == 1){
                    setPos(x()-65,y()+50);
                    direction = 3;

                    }
                    //

                    canon_tank->setRotation(-90);
                     canon_tank->setPos(x()+15,y()-53);
                    //
                if (pos().x() > 0) // pour pas que il sorte de la fenetre
                  //if((plateau(i-1)(j) == rien) && (i>0))
                setPos(x()-10,y());


             }
            else if (event->key() == Qt::Key_Right){
                setRotation(90);
                if(direction == 0){
                    setPos(x()+65,y());
                    direction = 1;

                   }
                    if(direction == 2){
                    setPos(x()+15,y()-70);
                    direction = 1;

                    }
                    if(direction == 3){
                    setPos(x()+65,y()-50);
                    direction = 1;

                    }
                    //
                     canon_tank->setRotation(90);
                      canon_tank->setPos(x()-25,y()-5);
                      //
                if (pos().x() < 1000)
                setPos(x()+10,y());
             }


            else if (event->key() == Qt::Key_Up){//si jappuie up
                setRotation(0);
                if(direction == 2){ //si direction est bas
                setPos(x()-50,y()-65);
                direction = 0;

                }
                if(direction == 1){ //si direction est droite
                setPos(x()-73,y()+12);
                direction = 0;

                }
                if(direction == 3){ //si direction est gauche
                setPos(x(),y()-40);
                direction = 0;

                }

                canon_tank->setRotation(0);
                 canon_tank->setPos(x()+20,y()-10);
                if (pos().y()>0)
                setPos(x(),y()-10);
             }


           else if (event->key() == Qt::Key_Down){
                setRotation(180);
                if(direction == 0){
                    setPos(x()+50,y()+65);
                    direction = 2;
                   }
                    if(direction == 1){
                    setPos(x()-25,y()+65);
                    direction = 2;
                    }
                    if(direction == 3){
                    setPos(x()+50,y()+15);
                    direction = 2;

                    }

                    canon_tank->setRotation(-180);
                     canon_tank->setPos(x()-28,y()-50);
                if (pos().y()<600)
                setPos(x(),y()+10);

    }
            else if (event->key() == Qt::Key_Q){
              canon_tank->setRotation(canon_tank->angleH - 10);
              canon_tank->angleH -= 10;

             }
            else if (event->key() == Qt::Key_W){
                canon_tank->setRotation(canon_tank->angleH + 10);
                canon_tank->angleH += 10;
             }
            else if ((event->key() == Qt::Key_S)&&(canon_tank->angleV < 90)){
              canon_tank->angleV += 10;
              cout << canon_tank->angleV << endl;

             }
            else if ((event->key() == Qt::Key_X)&&(canon_tank->angleV > 0)){
                canon_tank->angleV -= 10;
                cout << canon_tank->angleV << endl;
             }

}

/*
    if (event->key() == Qt::Key_Space){



        Obus *obus= new Obus();

        obus->setPos(x()+100,y()+60);
        scene()->addItem(obus);
    }
*/

