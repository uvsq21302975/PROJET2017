#ifndef CANON_H
#define CANON_H

#include<QGraphicsPixmapItem>
#include <QGraphicsItem>
class Canon : public QGraphicsPixmapItem{

public:
int angleH;
int angleV;
int angle_actuel;
Canon(QGraphicsItem * parent=0);


};




#endif
