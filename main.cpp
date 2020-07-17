#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGridLayout>
#include <QWidget>
#include "player.h"
#include "welcomewindow.h"
#include "helpwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    QGraphicsScene* scene = new QGraphicsScene (); // creates scene/level
//    scene->setSceneRect(0, 0, 1000, 1000);
//    scene->width();

//    player* Louise = new player (); // creates player object and sets dimensions and starting point
//    Louise->setRect(400, 400, 40, 40);


//    scene->addItem(Louise); // adds player and wall to scene

//    Louise->setFlag(QGraphicsItem::ItemIsFocusable); // sets focus on player for key movement
//    Louise->setFocus();

//    QGraphicsView* view = new QGraphicsView(scene);

//    view->show();

    welcomewindow* welcome = new welcomewindow;
    welcome->show();


    return a.exec();
}
