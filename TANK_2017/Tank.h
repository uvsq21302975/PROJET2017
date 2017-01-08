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

    Obus* obus1;
    Obus* obus2;
    Obus* obus3;



  //  int actif ;

private:

};

#endif // TANK_H
