#include "Fenetre.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
//#include "fenetredepart.h"

#include <QGraphicsPixmapItem>


#include <QtGui>



int main(int argc, char *argv[])
{

      QApplication app(argc, argv);


      Fenetre fenetre;

      fenetre.show();

      //Fenetredepart fpr;
      //fpr.show();




      return app.exec();

}
