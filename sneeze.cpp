#include "sneeze.h"
#include "player.h"
#include <QTimer>
#include <QKeyEvent>

sneeze::sneeze(int facing):facing(facing) {
    setRect(400, 400, 20, 20); // size and location of default bullet

    // connects bullet to timer
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

void sneeze::move() {
    // makes bullet move in direction of key
    if(facing==1)
        setPos(x()-10,y());
    if(facing==2)
        setPos(x()+10,y());
    if(facing==3)
        setPos(x(), y()-10);
    if(facing==4)
        setPos(x(),y()+10);
}
