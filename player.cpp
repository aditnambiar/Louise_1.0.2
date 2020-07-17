#include "player.h"
#include "sneeze.h"
#include <QKeyEvent>
#include <QGraphicsScene>

player::player():facing(0){}

void player::keyPressEvent(QKeyEvent *event) {
    // keys for moving up, down, and left and right
    if(event->key()==Qt::Key_Left){
        setPos(x()-10, y());
        facing = 1;
    }
    if(event->key()==Qt::Key_Right) {
        setPos(x()+10, y());
        facing = 2;
    }
    if(event->key()==Qt::Key_Up) {
        setPos(x(), y()-10);
        facing = 3;
    }
    if(event->key()==Qt::Key_Down) {
        setPos(x(), y()+10);
        facing = 4;
    }
    if(event->key()==Qt::Key_Space)
    {
        // creates sneeze and adds to scene
        sneeze * s1 = new sneeze(facing);
        s1->setPos(x(), y());
        scene()->addItem(s1);
    }
}
