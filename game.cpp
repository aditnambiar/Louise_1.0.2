#include "game.h"

Game::Game()
{
    QGraphicsScene* scene = new QGraphicsScene (); // creates scene/level
    scene->setSceneRect(0, 0, 1000, 1000);
    scene->width();

    player* Louise = new player (); // creates player object and sets dimensions and starting point
    Louise->setRect(400, 400, 40, 40);


    scene->addItem(Louise); // adds player and wall to scene

    Louise->setFlag(QGraphicsItem::ItemIsFocusable); // sets focus on player for key movement
    Louise->setFocus();

    view = new QGraphicsView(scene);

}

void Game::start_game()
{
    view->show();
}
