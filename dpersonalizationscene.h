#ifndef DPERSONALIZATIONSCENE_H
#define DPERSONALIZATIONSCENE_H
#include <QGraphicsScene>
#include "dbutton.h"

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DPersonalizationscene:public QGraphicsScene
{
public:
    DPersonalizationscene();
    DButton *button_home4;
    DButton *button_account4;
    DButton *button_display4;
    DButton *button_default4;
    DButton *button_personalization4;
    DButton *button_network4;
    DButton *button_sound4;
    DButton *button_date4;
    DButton *button_power4;
    DButton *button_mouse4;
    DButton *button_keyboard4;
    DButton *button_shortcuts4;
    DButton *button_menu4;
    DButton *button_system4;
    DButton *button_pow4;

};

#endif // DPERSONALIZATIONSCENE_H
