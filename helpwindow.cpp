#include "helpwindow.h"

helpwindow::helpwindow()
{
    QLabel* instructions = new QLabel("Instructions will go here");
    QGridLayout* layout = new QGridLayout;
    layout->addWidget(instructions);
    setLayout(layout);
}
