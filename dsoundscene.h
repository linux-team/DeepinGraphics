#ifndef DSOUNDSCENE_H
#define DSOUNDSCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;


class DSoundscene
{
public:
    DSoundscene();
    QGraphicsScene soundscene;
};

#endif // DSOUNDSCENE_H
