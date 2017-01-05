#ifndef TANK_H
#define TANK_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QString>
#include "Canon.h"




class Tank:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Tank(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
    int direction;
    Canon* canon_tank;


private:

};

#endif // TANK_H
