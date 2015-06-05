#ifndef DMOUSESCENE_H
#define DMOUSESCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DMousescene
{
public:
    DMousescene();
    QGraphicsScene mousescene;
};

#endif // DMOUSESCENE_H
