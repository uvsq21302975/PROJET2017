#ifndef TANK_H
#define TANK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QString>
#include "Canon.h"
#include "Obstacle.h"


class Tank:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Tank(contenu_case pere[10][6]);
    void keyPressEvent(QKeyEvent * event);
    int direction;
    int comptobus1;
    int comptobus2;
    int typeobus;
    void setAdversaire(Tank* T);// fonction qui permet de lier a son adversaire (setter)
    Canon* canon_tank;
    contenu_case plateau[10][6];

    Obus* obus1;
    Obus* obus2;
    Obus* obus3;
    Obus* obus4;
    Obus* obus5;
    Tank* adversaire;// pointeur sur l'adversaire




private:

};

#endif // TANK_H
