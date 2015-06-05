#ifndef DSHORTCUTSSCENE_H
#define DSHORTCUTSSCENE_H
#include <QGraphicsScene>

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;
class DShortcutsscene
{
public:
    DShortcutsscene();
    QGraphicsScene shortcutsscene;

};

#endif // DSHORTCUTSSCENE_H
