#ifndef OBUS_H
#define OBUS_H


#include <QObject>
#include <QGraphicsItem>

class Obus :public QObject, public QGraphicsPixmapItem {
Q_OBJECT
public:


    Obus(QGraphicsItem * parent=0);

public slots:

};



#endif // OBUS_H

