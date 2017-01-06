#ifndef OBUS_H
#define OBUS_H


#include <QGraphicsRectItem>
#include <QObject>

class Obus :public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:

    Obus(int type);
int type;
public slots:
    void tir();

};



#endif // OBUS_H

