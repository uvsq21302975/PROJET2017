#include "Fenetre.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>
#include <QTime>
#include <ctime>
#include <unistd.h>

Fenetre::Fenetre(){



    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,600);
    setBackgroundBrush(QBrush(QImage("image_terrain.jpg")));


    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,600);


// creation matrice(plateau de jeu)

contenu_case plateau[10][6];

srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 6; j++)
      {
          int nb_aleatoire_obstacle=rand()%10;

          if (nb_aleatoire_obstacle>8)
          {
              if(i%2==0){

        Obstacle *obstacle= new Obstacle(0,eau);
        obstacle->setPos(i*100,j*100);
         scene->addItem(obstacle);
          plateau[i][j]=eau;}
              else
              plateau[i][j]=rien;
          }

          else if (nb_aleatoire_obstacle>7)
          {
              if(i%2==0){

        Obstacle *obstacle= new Obstacle(0,rocher);
        obstacle->setPos(i*100,j*100);
         scene->addItem(obstacle);
          plateau[i][j]=rocher;}
              else
              plateau[i][j]=rien;
          }

          else if (nb_aleatoire_obstacle>5)
          {
              if(i%2==0){
        Obstacle *obstacle= new Obstacle(0,arbre);
        obstacle->setPos(i*100,j*100);
         scene->addItem(obstacle);
          plateau[i][j]=arbre;}
              else
              plateau[i][j]=rien;
          }

          else
          plateau[i][j]=rien;

       }
    }



    // coordoonnees du tank

    int x_tank1_depart=500;
    int y_tank1_depart=500;

    int x_canon=520;
    int y_canon=500;



    // creation du Tank

    Tank *tank = new Tank(plateau);

        tank->setPos(x_tank1_depart,y_tank1_depart); // positionement aleatoire du Tank

        tank->canon_tank->setPos(x_canon,y_canon);

    //plateau[x_tank1_depart/100][y_tank1_depart/100]=joueur;


    // Pour se focaliser sur un Tank
    tank->setFlag(QGraphicsItem::ItemIsFocusable);
    //tank->setFocus();



    //
    // ajouter le tank a la scene
    scene->addItem(tank);
    // ajouter le canon a la scene
    scene->addItem(tank->canon_tank);



    Tank *tank2 = new Tank(plateau);

        tank2->setPos(100,100); // positionement aleatoire du Tank

        tank2->canon_tank->setPos(120,100);

        tank2->setFlag(QGraphicsItem::ItemIsFocusable);
//        tank2->setFocus();
       //plateau[100/100][100/100]=joueur;
        scene->addItem(tank2);
        scene->addItem(tank2->canon_tank);

        // faire jouer chacun son tour

        tank->setAdversaire(tank2);
        tank2->setAdversaire(tank);
        // on lie les 2 tanks, l'un est l'adversaire de l'autre et vice versa

        tank2->setFocus();
       show();
//


}
/*
void Fenetre::jouer()
{
    if (aqt%2==0)
    {
        tank->setFocus();
        tank->actif=0;
    }

    else
    {
        tank2->setFocus();
        tank2->actif=0;
        //aqt++;
    }
}
*/
