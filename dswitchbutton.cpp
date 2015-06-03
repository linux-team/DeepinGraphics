#include "dswitchbutton.h"
#include <QPainter>
#include <QCursor>
#include <QKeyEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QMenu>

DSwitchbutton::DSwitchbutton()
{
    setBounds(-20,-8,40,16);
}

void DSwitchbutton::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
    if(switched)
    {
        paintSwitchOn(painter);
    }
    else
    {
        paintSwitchOff(painter);
    } 
}

void DSwitchbutton::paintSwitchOff(QPainter *painter)
{
    int lineLen = 20;
    int radius = 10;

    painter->setPen(Qt::black);
    QPen pen = painter->pen();
    pen.setWidth(1);
    painter->setPen(pen);
    painter->setBrush(Qt::black);

    //draw top and bottom lines.
    painter->drawLine(-lineLen/2, -radius, lineLen/2, -radius);
    painter->drawLine(-lineLen/2, radius - 1, lineLen/2, radius - 1);

    //draw semi-circle on left-end and right-end.
    painter->drawArc(-lineLen/2 -radius, -radius, radius*2, radius*2, 91*16, 178*16);
    painter->drawArc(lineLen/2 -radius,-radius, radius*2, radius*2, 271*16, 178*16);

    //fill the rectangle in the middle and two semi-circles on both sides.
    painter->setBrush(Qt::blue);
    painter->drawPie(lineLen/2 -radius ,-radius, radius*2, radius*2, 271*16, 178*16);
    painter->fillRect(-radius+1, -radius+1, lineLen + 2, radius*2 -2, Qt::blue);

    //draw the round button
    painter->setBrush(Qt::black);
    painter->drawPie(-lineLen/2 -radius, -radius, radius*2, radius*2, 0*16, 360*16);
}

void DSwitchbutton::paintSwitchOn(QPainter *painter)
{
    int lineLen = 20;
    int radius = 10;

    painter->setPen(Qt::black);
    QPen pen = painter->pen();
    pen.setWidth(1);
    painter->setPen(pen);
    painter->setBrush(Qt::black);

    //draw top and bottom lines.
    painter->drawLine(-lineLen/2, -radius, lineLen/2, -radius);
    painter->drawLine(-lineLen/2, radius - 1, lineLen/2, radius - 1);

    //draw semi-circle on left-end and right-end.
    painter->drawArc(-lineLen/2 -radius, -radius, radius*2, radius*2, 91*16, 178*16);
    painter->drawArc(lineLen/2 -radius,-radius, radius*2, radius*2, 271*16, 178*16);

    //fill the rectangle in the middle and two semi-circles on both sides.
    painter->setBrush(Qt::blue);
    painter->drawPie(-lineLen/2 -radius ,-radius, radius*2, radius*2, 91*16, 178*16);
    painter->fillRect(-radius-2, -radius+1, lineLen + 2, radius*2 -2, Qt::blue);

    //draw the round button
    painter->setBrush(Qt::black);
    painter->drawPie(lineLen/2 -radius, -radius, radius*2, radius*2, 0*16, 360*16);
}

// 鼠标按下事件处理函数，设置被点击的图形项获得焦点，并改变光标外观
void DSwitchbutton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(switched)
        switched = false;
    else
        switched = true;
    update();
}

// 鼠标按下事件处理函数，设置被点击的图形项获得焦点，并改变光标外观
void DSwitchbutton::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

}
