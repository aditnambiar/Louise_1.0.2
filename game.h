#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGridLayout>
#include <QWidget>
#include "player.h"

class Game : public QObject
{
    Q_OBJECT
public:
    Game();
public slots:
    void start_game();
private:
    QGraphicsView* view;
};

#endif // GAME_H
