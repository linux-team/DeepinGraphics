#ifndef DACCOUNTVIEW_H
#define DACCOUNTVIEW_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QObject>
#include "dhomescene.h"
#include "daccountscene.h"
#include "ddisplayscene.h"
#include "ddefaultscene.h"
#include "dpersonalizationscene.h"
#include "dnetworkscence.h"
#include "dsoundscene.h"
#include "ddatescene.h"
#include "dpowerscene.h"
#include "dmousescene.h"
#include "dkeyboardscene.h"
#include "dshortcutsscene.h"
#include "dmenuscene.h"
#include "dsystemscene.h"



class DHomeview : public QObject
{
    Q_OBJECT
public:
    DHomeview();
    DHomescene homeScene;
    DAccountscene accountScene;
    DDisplayscene displayScene;
    DDefaultscene defaultScene;
    DPersonalizationscene personalizationScene;
    DNetworkscene networkScene;
    DSoundscene soundScene;
    DDatescene dateScene;
    DPowerscene powerScene;
    DMousescene mousescene;
    DKeyboardscene keyboardScene;
    DShortcutsscene shortcutsScene;
    DMenuscene menuScene;
    DSystemscene systemScene;
   // void enter();


    QGraphicsView view;
public slots:
    
    void account();
    void display();
    void default1();
    void personalization();
    void network();
    void sound();
    void date();
    void power();
    void mouse();
    void keyboard();
    void shortcuts();
    void menu();
    void system();
    void home();
    void pow();
    void displayreset();
    
};



#endif // DACCOUNTVIEW_H
