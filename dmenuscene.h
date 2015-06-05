#ifndef DMUNESCENE_H
#define DMUNESCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DMenuscene
{
public:
    DMenuscene();
    QGraphicsScene menuscene;

};

#endif // DMUNESCENE_H
