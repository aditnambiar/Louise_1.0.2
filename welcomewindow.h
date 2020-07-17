#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include<QMainWindow>
#include<QPixmap>
#include<QLabel>
#include<QBoxLayout>
#include<QPushButton>
#include<QIcon>
#include "helpwindow.h"
#include "game.h"

class welcomewindow : public QMainWindow
{
public:
    welcomewindow();
private:
    helpwindow* hw;
    Game* game;
};

#endif // WELCOMEWINDOW_H
