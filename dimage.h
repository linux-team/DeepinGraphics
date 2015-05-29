#ifndef DIMAGE_H
#define DIMAGE_H
#include "DComponent.h"
class Dimage:public DComponent
{
public:
    Dimage();
    Dimage(QString path);

    QPixmap image;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                  QWidget *widget);
};

#endif // DIMAGE_H
