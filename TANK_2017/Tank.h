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
    Canon* canon_tank;
    contenu_case plateau[10][6];

    Obus** tabobu = new Obus*[10]; // ICI ON VEUT DECLARER UN TABLEAU D'OBUS DYNAMIQUE CAR (voir plus BAS)
    Obus* obus1;
    Obus* obus2;
    Obus* obus3;
    // Obus* tabobu[10] = new Obus(0);  IDEE ?

    void tir();


private:

};

#endif // TANK_H
