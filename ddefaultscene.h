#ifndef DDEFAULTSCENE_H
#define DDEFAULTSCENE_H
#include <QGraphicsScene>
#include "dbutton.h"
extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;


class DDefaultscene:public QGraphicsScene
{
public:
    DDefaultscene();
    DButton *button_home3;
    DButton *button_account3;
    DButton *button_display3;
    DButton *button_default3;
    DButton *button_personalization3;
    DButton *button_network3;
    DButton *button_sound3;
    DButton *button_date3;
    DButton *button_power3;
    DButton *button_mouse3;
    DButton *button_keyboard3;
    DButton *button_shortcuts3;
    DButton *button_menu3;
    DButton *button_system3;
    DButton *button_pow3;

};

#endif // DDEFAULTSCENE_H
