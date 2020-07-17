#include "welcomewindow.h"

welcomewindow::welcomewindow()
{
    //Fix size of window
    setFixedSize(800,600);

    //Set background of window
    QPixmap background(":/sneezelouisebackground.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    setPalette(palette);

    //Sneeze Louise title
    QLabel* titlelabel = new QLabel();
    QPixmap title(":/Sneeze-Louise.png");
    titlelabel->setPixmap(title);
    titlelabel->setAlignment(Qt::AlignCenter);

    //Button that starts the game
    QPushButton* startbutton = new QPushButton();
    QPixmap start(":/Start.png");
    startbutton->setIconSize(0.5*(start.size()));
    startbutton->resize(0.5*(start.size()));
    startbutton->setStyleSheet("background-color: transparent;");
    startbutton->setIcon(start);

    game = new Game();
    QObject::connect(startbutton, SIGNAL(clicked()), game, SLOT(start_game()));

    //Button that gives instructions
    QPushButton* helpbutton = new QPushButton();
    QPixmap help(":/Help.png");
    helpbutton->setIconSize(0.5*(help.size()));
    helpbutton->resize(0.5*(help.size()));
    helpbutton->setStyleSheet("background-color: transparent;");
    helpbutton->setIcon(help);

    hw = new helpwindow();
    QObject::connect(helpbutton, SIGNAL(clicked()), hw, SLOT(show()));

    //Button that closes the window
    QPushButton* quitbutton = new QPushButton();
    QPixmap quit(":/Quit.png");
    quitbutton->setIconSize(0.5*(quit.size()));
    quitbutton->resize(0.5*(quit.size()));
    quitbutton->setStyleSheet("background-color: transparent;");
    quitbutton->setIcon(quit);

    QObject::connect(quitbutton, SIGNAL(clicked()), this, SLOT(close()));

    //Create layout, add widgets
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(titlelabel);
    layout->addWidget(startbutton);
    layout->addWidget(helpbutton);
    layout->addWidget(quitbutton);
    layout->setContentsMargins(0,150,0,160);

    QWidget* centralwidget = new QWidget;
    centralwidget->setLayout(layout);
    setCentralWidget(centralwidget);
}
