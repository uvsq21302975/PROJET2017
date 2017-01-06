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
    Tank(type_obstacle pere[10][6]);
    void keyPressEvent(QKeyEvent * event);
    int direction;
    Canon* canon_tank;
    type_obstacle plateau[10][6];


private:

};

#endif // TANK_H
