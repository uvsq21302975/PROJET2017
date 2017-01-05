#include "Fenetre.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>
#include <QTime>



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

    int plateau[10][6];

    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 6; j++)
      {
          if (i%2==0 and j%2==0){
        Obstacle *obstacle= new Obstacle(0,eau);
        obstacle->setPos(i*100,j*100);
         scene->addItem(obstacle);
          plateau[i][j]=arbre;}
      }

    }

    // double boucle pour remplir la map
    //

    // coordoonnees du tank

    int x_tank1_depart=500;
    int y_tank1_depart=500;

    int x_canon=520;
    int y_canon=500;



    // creation du Tank
    Tank *tank = new Tank();

        tank->setPos(x_tank1_depart,y_tank1_depart); // positionement aleatoire du Tank

        tank->canon_tank->setPos(x_canon,y_canon);

    plateau[x_tank1_depart/100][y_tank1_depart/100]=joueur;


    // Pour se faucaliser sur un Tank
    tank->setFlag(QGraphicsItem::ItemIsFocusable);
    tank->setFocus();

    //
  //  Obstacle *obstacle= new Obstacle(0,arbre);// 0 par defaut

    // scene->addItem(obstacle);

    //
    // ajouter le tank a la scene
    scene->addItem(tank);
    // ajouter le canon a la scene
    scene->addItem(tank->canon_tank);















show();


}



