#ifndef SNEEZE_H
#define SNEEZE_H

#include <QGraphicsRectItem>
#include <QObject>

class sneeze: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
private:
    int facing;
public:
    sneeze(int facing);
public slots:
    void move();
};

#endif // SNEEZE_H
