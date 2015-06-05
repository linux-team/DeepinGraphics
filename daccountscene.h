#ifndef DACCOUNTSCENE_H
#define DACCOUNTSCENE_H
#include <QObject>
#include <QGraphicsScene>
#include "dbutton.h"
extern const char * pressIcon[50] ;
extern const char *releaseIcon[50] ;
extern const char *hoverIcon[50] ;

class DAccountscene:public QGraphicsScene
{

public:
    DAccountscene();
    DButton *button_home1;
    DButton *button_account1;
    DButton *button_display1;
    DButton *button_default1;
    DButton *button_personalization1;
    DButton *button_network1;
    DButton *button_sound1;
    DButton *button_date1;
    DButton *button_power1;
    DButton *button_mouse1;
    DButton *button_keyboard1;
    DButton *button_shortcuts1;
    DButton *button_menu1;
    DButton *button_system1;
    DButton *button_pow1;


};

#endif // DACCOUNTSCENE_H
