#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsEllipseItem>

class player: public QGraphicsEllipseItem
{
public:
    player();
    void keyPressEvent (QKeyEvent* event);
private:
    int facing;
};

#endif // PLAYER_H
