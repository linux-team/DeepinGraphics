#ifndef DKEYBOARDSCENE_H
#define DKEYBOARDSCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DKeyboardscene
{
public:
    DKeyboardscene();
    QGraphicsScene keyboardscene;
};

#endif // DKEYBOARDSCENE_H
