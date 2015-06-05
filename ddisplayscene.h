#ifndef DDISPLAYSCENE_H
#define DDISPLAYSCENE_H
#include <QGraphicsScene>
#include "dbutton.h"
extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;


class DDisplayscene:public QGraphicsScene
{
public:
    DDisplayscene();
    DButton *button_home2;
    DButton *button_account2;
    DButton *button_display2;
    DButton *button_default2;
    DButton *button_personalization2;
    DButton *button_network2;
    DButton *button_sound2;
    DButton *button_date2;
    DButton *button_power2;
    DButton *button_mouse2;
    DButton *button_keyboard2;
    DButton *button_shortcuts2;
    DButton *button_menu2;
    DButton *button_system2;
    DButton *button_pow2;

};

#endif // DDISPLAYSCENE_H
