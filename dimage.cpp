#include "dimage.h"
#include "qpainter.h"


Dimage::Dimage()
{

}

Dimage::Dimage(QString path)

{
   image.load(path);
   setBounds(-image.width()/2,-image.height()/2,
              image.width(),image.height());
}

void Dimage::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
              QWidget *widget)
{

     painter->drawPixmap(-image.width()/2,-image.height()/2,
                         image.width(),image.height(),image);

}
