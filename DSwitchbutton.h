#ifndef DSWITCHBUTTON_H
#define DSWITCHBUTTON_H

#include "DButton.h"

class DSwitchbutton : public DButton
{
public:
    DSwitchbutton();

    void paint(QPainter *painter,
               const QStyleOptionGraphicsItem *option,
               QWidget *widget);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
    void paintSwitchOff(QPainter *painter);

    void paintSwitchOn(QPainter *painter);
    bool switched;
};

#endif // DSWITCHBUTTON_H
