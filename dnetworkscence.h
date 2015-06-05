#ifndef DNETWORK_H
#define DNETWORK_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DNetworkscene
{
public:
    DNetworkscene();
    QGraphicsScene networkscene;
};

#endif // DNETWORK_H
