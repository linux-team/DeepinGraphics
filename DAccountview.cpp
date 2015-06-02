#include "DAccountview.h"
#include "DBus.h"

DAccountview ::DAccountview()
{
    scene.setSceneRect(-150,-300,300,600);
    accountScene.setSceneRect(-150,-300,300,600);
    displayScene.setSceneRect(-150,-300,300,600);
    defaultScene.setSceneRect(-150,-300,300,600);
    personalizationScene.setSceneRect(-150,-300,300,600);
    networkScene.setSceneRect(-150,-300,300,600);
    soundScene.setSceneRect(-150,-300,300,600);
    dateScene.setSceneRect(-150,-300,300,600);
    powerScene.setSceneRect(-150,-300,300,600);
    mouseScene.setSceneRect(-150,-300,300,600);
    keyboardScene.setSceneRect(-150,-300,300,600);
    shortcutsScene.setSceneRect(-150,-300,300,600);
    menuScene.setSceneRect(-150,-300,300,600);
    systemScene.setSceneRect(-150,-300,300,600);
    view.resize(320, 700);
    view.setBackgroundBrush(QColor(33,33,33,255));

    accountScene.addLine(-100,-400,-100,400);
    displayScene.addLine(-100,-400,-100,400);
    defaultScene.addLine(-100,-400,-100,400);
    personalizationScene.addLine(-100,-400,-100,400);
    networkScene.addLine(-100,-400,-100,400);
    soundScene.addLine(-100,-400,-100,400);
    dateScene.addLine(-100,-400,-100,400);
    powerScene.addLine(-100,-400,-100,400);
    mouseScene.addLine(-100,-400,-100,400);
    keyboardScene.addLine(-100,-400,-100,400);
    shortcutsScene.addLine(-100,-400,-100,400);
    menuScene.addLine(-100,-400,-100,400);
    systemScene.addLine(-100,-400,-100,400);



 
}

void DAccountview ::account()
{
    view.setScene(&accountScene);
    view.show();
}
void DAccountview::display()
{

    view.setScene(&displayScene);
    view.show();

}
void DAccountview::default1()
{

    view.setScene(&defaultScene);
    view.show();

}
void DAccountview::personalization()
{
    view.setScene(&personalizationScene);
    view.show();

}
void DAccountview::network()
{
    view.setScene(&networkScene);
    view.show();

}
void DAccountview::sound()
{
    view.setScene(&soundScene);
    view.show();

}
void DAccountview::date()
{
    view.setScene(&dateScene);
    view.show();

}
void DAccountview::power()
{
    view.setScene(&powerScene);
    view.show();

}
void DAccountview::mouse()
{
    view.setScene(&mouseScene);
    view.show();

}
void DAccountview::keyboard()
{
    view.setScene(&keyboardScene);
    view.show();

}
void DAccountview::shortcuts()
{
    view.setScene(&shortcutsScene);
    view.show();

}
void DAccountview::menu()
{
    view.setScene(&menuScene);
    view.show();

}
void DAccountview::system()
{
    view.setScene(&systemScene);
    view.show();

}
void DAccountview::home()
{
    view.setScene(&scene);
    view.show();

}

void DAccountview::pow()
{
    QDBusMessage m = QDBusMessage::createMethodCall("com.deepin.SessionManager",
                                                    "/com/deepin/SessionManager",
                                                    "com.deepin.SessionManager",
                                                    "PowerOffChoose");

    QDBusMessage response = QDBusConnection::sessionBus().call(m);

}
