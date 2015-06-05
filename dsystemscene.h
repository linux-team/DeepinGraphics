#ifndef DSYSTEMSCENE_H
#define DSYSTEMSCENE_H

#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;
class DSystemscene
{
public:
    DSystemscene();
    QGraphicsScene systemscene;
};

#endif // DSYSTEMSCENE_H
