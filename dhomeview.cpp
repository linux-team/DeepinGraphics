#include "dhomeview.h"
#include "dbus.h"
#include "dimage.h"
#include "dreset.h"
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

DHomeview ::DHomeview()
{




    connect(homeScene.button_account,SIGNAL(fireAction()),this,SLOT(account()));
    connect(homeScene.button_display,SIGNAL(fireAction()),this,SLOT(display()));
    connect(homeScene.button_default,SIGNAL(fireAction()),this,SLOT(default1()));
    connect(homeScene.button_personalization,SIGNAL(fireAction()),this,SLOT(personalization()));



    view.resize(320, 700);
    view.setBackgroundBrush(QColor(33,33,33,255));

    //设置无边框，不可移动

    view.setWindowFlags(Qt::FramelessWindowHint);
    view.setAttribute(Qt::WA_TranslucentBackground);

 
}
#if 0

void DHomeview::enter()
{

    view.setScene(&(homescene));
    view.show();

}
#endif
void DHomeview::account()
{

    view.setScene(&accountScene);
    view.show();
}

void DHomeview::display()
{

    view.setScene(&displayScene);
    view.show();

}
void DHomeview::default1()
{

    view.setScene(&defaultScene);
    view.show();

}
void DHomeview::personalization()
{
    view.setScene(&personalizationScene);
    view.show();

}

void DHomeview::network()
{
    //view.setScene(&networkScene);
    //view.show();

}
void DHomeview::sound()
{
    //view.setScene(&soundScene);
    //view.show();

}
void DHomeview::date()
{
    //view.setScene(&dateScene);
    //view.show();

}
void DHomeview::power()
{
    //view.setScene(&powerScene);
    //view.show();

}
void DHomeview::mouse()
{
    //view.setScene(&mouseScene);
    //view.show();

}
void DHomeview::keyboard()
{
    //view.setScene(&keyboardScene);
   // view.show();

}
void DHomeview::shortcuts()
{
    //view.setScene(&shortcutsScene);
    //view.show();

}
void DHomeview::menu()
{
    //view.setScene(&menuScene);
    //view.show();

}
void DHomeview::system()
{
   // view.setScene(&systemScene);
    //view.show();

}

void DHomeview::home()
{
    //view.setScene(&scene);
    //view.show();

}


void DHomeview::pow()
{
    QDBusMessage m = QDBusMessage::createMethodCall("com.deepin.SessionManager",
                                                    "/com/deepin/SessionManager",
                                                    "com.deepin.SessionManager",
                                                    "PowerOffChoose");

    QDBusMessage response = QDBusConnection::sessionBus().call(m);

}

void DHomeview::displayreset()
{


}
