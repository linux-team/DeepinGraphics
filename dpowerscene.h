#ifndef DPOWERSCENE_H
#define DPOWERSCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DPowerscene
{
public:
    DPowerscene();
    QGraphicsScene powerscene;
};

#endif // DPOWERSCENE_H
