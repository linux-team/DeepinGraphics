#ifndef DHOMESCENE_H
#define DHOMESCENE_H
#include <QGraphicsScene>
#include "dbutton.h"

extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;
extern const char * itemName[20] ;

class DHomescene:public QGraphicsScene
{

public:
    DHomescene();
    DButton *button_account;
    DButton *button_display;
    DButton *button_default;
    DButton *button_personalization;
    DButton *button_network;
    DButton *button_sound;
    DButton *button_date;
    DButton *button_power;
    DButton *button_mouse;
    DButton *button_keyboard;
    DButton *button_shortcuts;
    DButton *button_menu;
    DButton *button_system;


};

#endif // DHOMESCENE_H
