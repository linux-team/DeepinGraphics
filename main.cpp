#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QMouseEvent>
#include "DButton.h"
#include "DSwitchbutton.h"
#include "DNavigationbar.h"
#include "daccountview.h"
#include "dimage.h"
#include "dbus.h"
#include "DQstring.h"

int main(int argc,char* argv[ ])
{
    QApplication app(argc,argv); 
    DAccountview *accountView = new DAccountview;

    //账户
    DButton *button_account = new DButton;
    button_account->setPos(-100 + 0*84 + 20 ,-200 + 20 + 0*84);
    button_account->setHoverEnableFlag(true);
    button_account->setBackgroundEnable(true);
    button_account->boundImageToPress(pressIcon[0+0*3]);
    button_account->boundImageToRelease(releaseIcon[0+0*3]);
    button_account->boundImageToHover(hoverIcon[0+0*3]);
    button_account->setBounds(-42,-42,84,84);
    button_account->connect(button_account,SIGNAL(fireAction()),accountView,SLOT(account()));
    accountView->scene.addItem(button_account);
    QGraphicsTextItem*item_acount = new QGraphicsTextItem(itemName[0+0*3]);
    item_acount->setPos(-96 + 0*84  ,-200+30 + 0*84);
    item_acount->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_acount;
    font_acount.setPixelSize(12);
    item_acount->setFont(font_acount);
    accountView->scene.addItem(item_acount);
    //显示
    DButton *button_display = new DButton;
    button_display->setPos(-100 + 1*84 + 20 ,-200 + 20 + 0*84);
    button_display->setHoverEnableFlag(true);
    button_display->setBackgroundEnable(true);
    button_display->boundImageToPress(pressIcon[1+0*3]);
    button_display->boundImageToRelease(releaseIcon[1+0*3]);
    button_display->boundImageToHover(hoverIcon[1+0*3]);
    button_display->setBounds(-42,-42,84,84);
    button_display->connect(button_display,SIGNAL(fireAction()),accountView,SLOT(display()));
    accountView->scene.addItem(button_display);
    QGraphicsTextItem*item_display = new QGraphicsTextItem(itemName[1+0*3]);
    item_display->setPos(-96 + 1*84,-200+30 + 0*84);
    item_display->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_display;
    font_display.setPixelSize(12);
    item_display->setFont(font_display);
    accountView->scene.addItem(item_display);

    //默认程序
    DButton *button_default = new DButton;
    button_default->setPos(-100 + 2*84 + 20 ,-200 + 20 + 0*84);
    button_default->setHoverEnableFlag(true);
    button_default->setBackgroundEnable(true);
    button_default->boundImageToPress(pressIcon[2+0*3]);
    button_default->boundImageToRelease(releaseIcon[2+0*3]);
    button_default->boundImageToHover(hoverIcon[2+0*3]);
    button_default->setBounds(-44,-44,84,84);
    button_default->connect(button_default,SIGNAL(fireAction()),accountView,SLOT(default1()));
    accountView->scene.addItem(button_default);
    QGraphicsTextItem*item_default = new QGraphicsTextItem(itemName[2+0*3]);
    item_default->setPos(-107 + 2*84  ,-200+30 + 0*84);
    item_default->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_default;
    font_default.setPixelSize(12);
    item_default->setFont(font_default);
    accountView->scene.addItem(item_default);
    //个性化
    DButton *button_personalization = new DButton;
    button_personalization->setPos(-100 + 0*84 + 20 ,-200 + 20 + 1*84);
    button_personalization->setHoverEnableFlag(true);
    button_personalization->setBackgroundEnable(true);
    button_personalization->boundImageToPress(pressIcon[0+1*3]);
    button_personalization->boundImageToRelease(releaseIcon[0+1*3]);
    button_personalization->boundImageToHover(hoverIcon[0+1*3]);
    button_personalization->setBounds(-42,-42,84,84);
    button_personalization->connect(button_personalization,SIGNAL(fireAction()),accountView,SLOT(personalization()));
    accountView->scene.addItem(button_personalization);
    QGraphicsTextItem*item_personalization = new QGraphicsTextItem(itemName[0+1*3]);
    item_personalization->setPos(-102 + 0*84  ,-200+30 + 1*84);
    item_personalization->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_personalization;
    font_personalization.setPixelSize(12);
    item_personalization->setFont(font_personalization);
    accountView->scene.addItem(item_personalization);
    //网络
    DButton *button_network = new DButton;
    button_network->setPos(-100 + 1*84 + 20 ,-200 + 20 + 1*84);
    button_network->setHoverEnableFlag(true);
    button_network->setBackgroundEnable(true);
    button_network->boundImageToPress(pressIcon[1+1*3]);
    button_network->boundImageToRelease(releaseIcon[1+1*3]);
    button_network->boundImageToHover(hoverIcon[1+1*3]);
    button_network->setBounds(-42,-42,84,84);
    button_network->connect(button_network,SIGNAL(fireAction()),accountView,SLOT(network()));
    accountView->scene.addItem(button_network);
    QGraphicsTextItem*item_network = new QGraphicsTextItem(itemName[1+1*3]);
    item_network->setPos(-96 + 1*84  ,-200+30 + 1*84);
    item_network->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_network;
    font_network.setPixelSize(12);
    item_network->setFont(font_network);
    accountView->scene.addItem(item_network);
    //声音
    DButton *button_sound = new DButton;
    button_sound->setPos(-100 + 2*84 + 20 ,-200 + 20 + 1*84);
    button_sound->setHoverEnableFlag(true);
    button_sound->setBackgroundEnable(true);
    button_sound->boundImageToPress(pressIcon[2+1*3]);
    button_sound->boundImageToRelease(releaseIcon[2+1*3]);
    button_sound->boundImageToHover(hoverIcon[2+1*3]);
    button_sound->setBounds(-42,-42,84,84);
    button_sound->connect(button_sound,SIGNAL(fireAction()),accountView,SLOT(sound()));
    accountView->scene.addItem(button_sound);
    QGraphicsTextItem*item_sound = new QGraphicsTextItem(itemName[2+1*3]);
    item_sound->setPos(-96 + 2*84  ,-200+30 + 1*84);
    item_sound->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_sound;
    font_sound.setPixelSize(12);
    item_sound->setFont(font_sound);
    accountView->scene.addItem(item_sound);

    //日期和时间
    DButton *button_date = new DButton;
    button_date->setPos(-100 + 0*84 + 20 ,-200 + 20 + 2*84);
    button_date->setHoverEnableFlag(true);
    button_date->setBackgroundEnable(true);
    button_date->boundImageToPress(pressIcon[0+2*3]);
    button_date->boundImageToRelease(releaseIcon[0+2*3]);
    button_date->boundImageToHover(hoverIcon[0+2*3]);
    button_date->setBounds(-42,-42,84,84);
    button_date->connect(button_date,SIGNAL(fireAction()),accountView,SLOT(date()));
    accountView->scene.addItem(button_date);
    QGraphicsTextItem*item_date = new QGraphicsTextItem(itemName[0+2*3]);
    item_date->setPos(-114 + 0*84  ,-200+30 + 2*84);
    item_date->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_date;
    font_date.setPixelSize(12);
    item_date->setFont(font_date);
    accountView->scene.addItem(item_date);
    //电源管理
    DButton *button_power = new DButton;
    button_power->setPos(-100 + 1*84 + 20 ,-200 + 20 + 2*84);
    button_power->setHoverEnableFlag(true);
    button_power->setBackgroundEnable(true);
    button_power->boundImageToPress(pressIcon[1+2*3]);
    button_power->boundImageToRelease(releaseIcon[1+2*3]);
    button_power->boundImageToHover(hoverIcon[1+2*3]);
    button_power->setBounds(-42,-42,84,84);
    button_power->connect(button_power,SIGNAL(fireAction()),accountView,SLOT(power()));
    accountView->scene.addItem(button_power);
    QGraphicsTextItem*item_power_control = new QGraphicsTextItem(itemName[1+2*3]);
    item_power_control->setPos(-107 + 1*84  ,-200+30 + 2*84);
    item_power_control->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_power_control;
    font_power_control.setPixelSize(12);
    item_power_control->setFont(font_power_control);
    accountView->scene.addItem(item_power_control);
    //鼠标
    DButton *button_mouse = new DButton;
    button_mouse->setPos(-100 + 2*84 + 20 ,-200 + 20 + 2*84);
    button_mouse->setHoverEnableFlag(true);
    button_mouse->setBackgroundEnable(true);
    button_mouse->boundImageToPress(pressIcon[2+2*3]);
    button_mouse->boundImageToRelease(releaseIcon[2+2*3]);
    button_mouse->boundImageToHover(hoverIcon[2+2*3]);
    button_mouse->setBounds(-42,-42,84,84);
    button_mouse->connect(button_mouse,SIGNAL(fireAction()),accountView,SLOT(mouse()));
    accountView->scene.addItem(button_mouse);
    QGraphicsTextItem*item_mouse = new QGraphicsTextItem(itemName[2+2*3]);
    item_mouse->setPos(-96 + 2*84  ,-200+30 + 2*84);
    item_mouse->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_mouse;
    font_mouse.setPixelSize(12);
    item_mouse->setFont(font_mouse);
    accountView->scene.addItem(item_mouse);
    //键盘和语言
    DButton *button_keyboard = new DButton;
    button_keyboard->setPos(-100 + 0*84 + 20 ,-200 + 20 + 3*84);
    button_keyboard->setHoverEnableFlag(true);
    button_keyboard->setBackgroundEnable(true);
    button_keyboard->boundImageToPress(pressIcon[0+3*3]);
    button_keyboard->boundImageToRelease(releaseIcon[0+3*3]);
    button_keyboard->boundImageToHover(hoverIcon[0+3*3]);
    button_keyboard->setBounds(-42,-42,84,84);
    button_keyboard->connect(button_keyboard,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
    accountView->scene.addItem(button_keyboard);
    QGraphicsTextItem*item_keyboard = new QGraphicsTextItem(itemName[0+3*3]);
    item_keyboard->setPos(-114 + 0*84  ,-200+30 + 3*84);
    item_keyboard->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_keyboard;
    font_keyboard.setPixelSize(12);
    item_keyboard->setFont(font_keyboard);
    accountView->scene.addItem(item_keyboard);

    //快捷键
    DButton *button_shortcuts = new DButton;
    button_shortcuts->setPos(-100 + 1*84 + 20 ,-200 + 20 + 3*84);
    button_shortcuts->setHoverEnableFlag(true);
    button_shortcuts->setBackgroundEnable(true);
    button_shortcuts->boundImageToPress(pressIcon[1+3*3]);
    button_shortcuts->boundImageToRelease(releaseIcon[1+3*3]);
    button_shortcuts->boundImageToHover(hoverIcon[1+3*3]);
    button_shortcuts->setBounds(-42,-42,84,84);
    button_shortcuts->connect(button_shortcuts,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
    accountView->scene.addItem(button_shortcuts);
    QGraphicsTextItem*item_shortcuts = new QGraphicsTextItem(itemName[1+3*3]);
    item_shortcuts->setPos(-102 + 1*84  ,-200+30 + 3*84);
    item_shortcuts->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_shortcuts;
    font_shortcuts.setPixelSize(12);
    item_shortcuts->setFont(font_shortcuts);
    accountView->scene.addItem(item_shortcuts);
    //启动菜单
    DButton *button_menu = new DButton;
    button_menu->setPos(-100 + 2*84 + 20 ,-200 + 20 + 3*84);
    button_menu->setHoverEnableFlag(true);
    button_menu->setBackgroundEnable(true);
    button_menu->boundImageToPress(pressIcon[2+3*3]);
    button_menu->boundImageToRelease(releaseIcon[2+3*3]);
    button_menu->boundImageToHover(hoverIcon[2+3*3]);
    button_menu->setBounds(-42,-42,84,84);
    button_menu->connect(button_menu,SIGNAL(fireAction()),accountView,SLOT(menu()));
    accountView->scene.addItem(button_menu);

    QGraphicsTextItem*item_menu = new QGraphicsTextItem(itemName[2+3*3]);
    item_menu->setPos(-107 + 2*84  ,-200+30 + 3*84);
    item_menu->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_menu;
    font_menu.setPixelSize(12);
    item_menu->setFont(font_menu);
    accountView->scene.addItem(item_menu);




    //系统信息
    DButton *button_system = new DButton;
    button_system->setPos(-100 + 0*84 + 20 ,-200 + 20 + 4*84);
    button_system->setHoverEnableFlag(true);
    button_system->setBackgroundEnable(true);
    button_system->boundImageToPress(pressIcon[12]);
    button_system->boundImageToRelease(releaseIcon[12]);
    button_system->boundImageToHover(hoverIcon[12]);
    button_system->setBounds(-42,-42,84,84);
    button_system->connect(button_system,SIGNAL(fireAction()),accountView,SLOT(system()));
    accountView->scene.addItem(button_system);

    QGraphicsTextItem*item_system = new QGraphicsTextItem(itemName[0+4*3]);
    item_system->setPos(-107 + 0*84  ,-200+30 + 4*84);
    item_system->setDefaultTextColor(QColor(250,250,250,200));
    QFont font_system;
    font_system.setPixelSize(12);
    item_system->setFont(font_system);
    accountView->scene.addItem(item_system);
    //电源按钮
    dbus *powerButton = new dbus;
    powerButton->setPos(0,300);
    powerButton->setBounds(-40,-40,83,83);
    powerButton->setHoverEnableFlag(true);
    powerButton->boundImageToPress("../myScene/resources/images/shutdown_hover.png");
    powerButton->boundImageToRelease("../myScene/resources/images/shutdown_normal.png");
    powerButton->boundImageToHover("../myScene/resources/images/shutdown_hover.png");

    //电源下面背景图片
    Dimage * dimage =new Dimage("../myScene/resources/images/shutdown_bg.png");
    dimage->setPos(0,315);
    accountView->scene.addItem(dimage);
    accountView->scene.addItem(powerButton);
    //电源字体显示
    QGraphicsTextItem*item_power = new QGraphicsTextItem("电源");
    item_power->setPos(-15,320);
    item_power->setDefaultTextColor(QColor(255,255,0));
    QFont font_power;
    font_power.setPixelSize(12);
    item_power->setFont(font_power);
    accountView->scene.addItem(item_power);

    //侧边栏显示

    //侧边栏账户界面
    DButton *button_home1 = new DButton;
    button_home1->setPos(-130,-330 + 0*45);
    button_home1->setHoverEnableFlag(true);
    button_home1->boundImageToPress(pressIcon[13]);
    button_home1->boundImageToRelease(releaseIcon[13]);
    button_home1->boundImageToHover(hoverIcon[13]);
    button_home1->setBounds(-20,-20,40,40);
    button_home1->connect(button_home1,SIGNAL(fireAction()),accountView,SLOT(home()));
    accountView->accountScene.addItem(button_home1);


    DButton *button_account1 = new DButton;
    button_account1->setPos(-130,-330 + 1*45);
    button_account1->setHoverEnableFlag(true);
    button_account1->boundImageToPress(pressIcon[0]);
    button_account1->boundImageToRelease(releaseIcon[0]);
    button_account1->boundImageToHover(hoverIcon[0]);
    button_account1->setBounds(-20,-20,40,40);
    button_account1->connect(button_account1,SIGNAL(fireAction()),accountView,SLOT(account()));
    accountView->accountScene.addItem(button_account1);

    DButton *button_display1 = new DButton;
    button_display1->setPos(-130,-330 + 2*45);
    button_display1->setHoverEnableFlag(true);
    button_display1->boundImageToPress(pressIcon[1]);
    button_display1->boundImageToRelease(releaseIcon[1]);
    button_display1->boundImageToHover(hoverIcon[1]);
    button_display1->setBounds(-20,-20,40,40);
    button_display1->connect(button_display1,SIGNAL(fireAction()),accountView,SLOT(display()));
    accountView->accountScene.addItem(button_display1);

    DButton *button_default1 = new DButton;
    button_default1->setPos(-130,-330 + 3*45);
    button_default1->setHoverEnableFlag(true);
    button_default1->boundImageToPress(pressIcon[2]);
    button_default1->boundImageToRelease(releaseIcon[2]);
    button_default1->boundImageToHover(hoverIcon[2]);
    button_default1->setBounds(-20,-20,40,40);
    button_default1->connect(button_default1,SIGNAL(fireAction()),accountView,SLOT(default1()));
    accountView->accountScene.addItem(button_default1);

    DButton *button_personalization1 = new DButton;
    button_personalization1->setPos(-130,-330 + 4*45);
    button_personalization1->setHoverEnableFlag(true);
    button_personalization1->boundImageToPress(pressIcon[3]);
    button_personalization1->boundImageToRelease(releaseIcon[3]);
    button_personalization1->boundImageToHover(hoverIcon[3]);
    button_personalization1->setBounds(-20,-20,40,40);
    button_personalization1->connect(button_personalization1,SIGNAL(fireAction()),accountView,SLOT(personalization()));
    accountView->accountScene.addItem(button_personalization1);

    DButton *button_network1 = new DButton;
    button_network1->setPos(-130,-330 + 5*45);
    button_network1->setHoverEnableFlag(true);
    button_network1->boundImageToPress(pressIcon[4]);
    button_network1->boundImageToRelease(releaseIcon[4]);
    button_network1->boundImageToHover(hoverIcon[4]);
    button_network1->setBounds(-20,-20,40,40);
    button_network1->connect(button_network1,SIGNAL(fireAction()),accountView,SLOT(network()));
    accountView->accountScene.addItem(button_network1);

    DButton *button_sound1 = new DButton;
    button_sound1->setPos(-130,-330 + 6*45);
    button_sound1->setHoverEnableFlag(true);
    button_sound1->boundImageToPress(pressIcon[5]);
    button_sound1->boundImageToRelease(releaseIcon[5]);
    button_sound1->boundImageToHover(hoverIcon[5]);
    button_sound1->setBounds(-20,-20,40,40);
    button_sound1->connect(button_sound1,SIGNAL(fireAction()),accountView,SLOT(sound()));
    accountView->accountScene.addItem(button_sound1);

    DButton *button_date1 = new DButton;
    button_date1->setPos(-130,-330 + 7*45);
    button_date1->setHoverEnableFlag(true);
    button_date1->boundImageToPress(pressIcon[6]);
    button_date1->boundImageToRelease(releaseIcon[6]);
    button_date1->boundImageToHover(hoverIcon[6]);
    button_date1->setBounds(-20,-20,40,40);
    button_date1->connect(button_date1,SIGNAL(fireAction()),accountView,SLOT(date()));
    accountView->accountScene.addItem(button_date1);

    DButton *button_power1 = new DButton;
    button_power1->setPos(-130,-330 + 8*45);
    button_power1->setHoverEnableFlag(true);
    button_power1->boundImageToPress(pressIcon[7]);
    button_power1->boundImageToRelease(releaseIcon[7]);
    button_power1->boundImageToHover(hoverIcon[7]);
    button_power1->setBounds(-20,-20,40,40);
    button_power1->connect(button_power1,SIGNAL(fireAction()),accountView,SLOT(power()));
    accountView->accountScene.addItem(button_power1);

    DButton *button_mouse1 = new DButton;
    button_mouse1->setPos(-130,-330 + 9*45);
    button_mouse1->setHoverEnableFlag(true);
    button_mouse1->boundImageToPress(pressIcon[8]);
    button_mouse1->boundImageToRelease(releaseIcon[8]);
    button_mouse1->boundImageToHover(hoverIcon[8]);
    button_mouse1->setBounds(-20,-20,40,40);
    button_mouse1->connect(button_mouse1,SIGNAL(fireAction()),accountView,SLOT(mouse()));
    accountView->accountScene.addItem(button_mouse1);

    DButton *button_keyboard1 = new DButton;
    button_keyboard1->setPos(-130,-330 + 10*45);
    button_keyboard1->setHoverEnableFlag(true);
    button_keyboard1->boundImageToPress(pressIcon[9]);
    button_keyboard1->boundImageToRelease(releaseIcon[9]);
    button_keyboard1->boundImageToHover(hoverIcon[9]);
    button_keyboard1->setBounds(-20,-20,40,40);
    button_keyboard1->connect(button_keyboard1,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
    accountView->accountScene.addItem(button_keyboard1);

    DButton *button_shortcuts1 = new DButton;
    button_shortcuts1->setPos(-130,-330 + 11*45);
    button_shortcuts1->setHoverEnableFlag(true);
    button_shortcuts1->boundImageToPress(pressIcon[10]);
    button_shortcuts1->boundImageToRelease(releaseIcon[10]);
    button_shortcuts1->boundImageToHover(hoverIcon[10]);
    button_shortcuts1->setBounds(-20,-20,40,40);
    button_shortcuts1->connect(button_shortcuts1,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
    accountView->accountScene.addItem(button_shortcuts1);

    DButton *button_menu1 = new DButton;
    button_menu1->setPos(-130,-330 + 12*45);
    button_menu1->setHoverEnableFlag(true);
    button_menu1->boundImageToPress(pressIcon[11]);
    button_menu1->boundImageToRelease(releaseIcon[11]);
    button_menu1->boundImageToHover(hoverIcon[11]);
    button_menu1->setBounds(-20,-20,40,40);
    button_menu1->connect(button_menu1,SIGNAL(fireAction()),accountView,SLOT(menu()));
    accountView->accountScene.addItem(button_menu1);

    DButton *button_system1 = new DButton;
    button_system1->setPos(-130,-330 + 13*45);
    button_system1->setHoverEnableFlag(true);
    button_system1->boundImageToPress(pressIcon[12]);
    button_system1->boundImageToRelease(releaseIcon[12]);
    button_system1->boundImageToHover(hoverIcon[12]);
    button_system1->setBounds(-20,-20,40,40);
    button_system1->connect(button_system1,SIGNAL(fireAction()),accountView,SLOT(system()));
    accountView->accountScene.addItem(button_system1);

    DButton *button_pow = new DButton;
    button_pow->setPos(-130,-330 + 14*45);
    button_pow->setHoverEnableFlag(true);
    button_pow->boundImageToPress(pressIcon[14]);
    button_pow->boundImageToRelease(releaseIcon[14]);
    button_pow->boundImageToHover(hoverIcon[14]);
    button_pow->setBounds(-20,-20,40,40);
    button_pow->connect(button_pow,SIGNAL(fireAction()),accountView,SLOT(pow()));
    accountView->accountScene.addItem(button_pow);



//侧边栏显示界面
    DButton *button_home2 = new DButton;
    button_home2->setPos(-130,-330 + 0*45);
    button_home2->setHoverEnableFlag(true);
    button_home2->boundImageToPress(pressIcon[13]);
    button_home2->boundImageToRelease(releaseIcon[13]);
    button_home2->boundImageToHover(hoverIcon[13]);
    button_home2->setBounds(-20,-20,40,40);
    button_home2->connect(button_home2,SIGNAL(fireAction()),accountView,SLOT(home()));
    accountView->displayScene.addItem(button_home2);


    DButton *button_account2 = new DButton;
    button_account2->setPos(-130,-330 + 1*45);
    button_account2->setHoverEnableFlag(true);
    button_account2->boundImageToPress(pressIcon[0]);
    button_account2->boundImageToRelease(releaseIcon[0]);
    button_account2->boundImageToHover(hoverIcon[0]);
    button_account2->setBounds(-20,-20,40,40);
    button_account2->connect(button_account2,SIGNAL(fireAction()),accountView,SLOT(account()));
    accountView->displayScene.addItem(button_account2);

    DButton *button_display2 = new DButton;
    button_display2->setPos(-130,-330 + 2*45);
    button_display2->setHoverEnableFlag(true);
    button_display2->boundImageToPress(pressIcon[1]);
    button_display2->boundImageToRelease(releaseIcon[1]);
    button_display2->boundImageToHover(hoverIcon[1]);
    button_display2->setBounds(-20,-20,40,40);
    button_display2->connect(button_display2,SIGNAL(fireAction()),accountView,SLOT(display()));
    accountView->displayScene.addItem(button_display2);

    DButton *button_default2 = new DButton;
    button_default2->setPos(-130,-330 + 3*45);
    button_default2->setHoverEnableFlag(true);
    button_default2->boundImageToPress(pressIcon[2]);
    button_default2->boundImageToRelease(releaseIcon[2]);
    button_default2->boundImageToHover(hoverIcon[2]);
    button_default2->setBounds(-20,-20,40,40);
    button_default2->connect(button_default2,SIGNAL(fireAction()),accountView,SLOT(default1()));
    accountView->displayScene.addItem(button_default2);

    DButton *button_personalization2 = new DButton;
    button_personalization2->setPos(-130,-330 + 4*45);
    button_personalization2->setHoverEnableFlag(true);
    button_personalization2->boundImageToPress(pressIcon[3]);
    button_personalization2->boundImageToRelease(releaseIcon[3]);
    button_personalization2->boundImageToHover(hoverIcon[3]);
    button_personalization2->setBounds(-20,-20,40,40);
    button_personalization2->connect(button_personalization2,SIGNAL(fireAction()),accountView,SLOT(personalization()));
    accountView->displayScene.addItem(button_personalization2);

    DButton *button_network2 = new DButton;
    button_network2->setPos(-130,-330 + 5*45);
    button_network2->setHoverEnableFlag(true);
    button_network2->boundImageToPress(pressIcon[4]);
    button_network2->boundImageToRelease(releaseIcon[4]);
    button_network2->boundImageToHover(hoverIcon[4]);
    button_network2->setBounds(-20,-20,40,40);
    button_network2->connect(button_network2,SIGNAL(fireAction()),accountView,SLOT(network()));
    accountView->displayScene.addItem(button_network2);

    DButton *button_sound2 = new DButton;
    button_sound2->setPos(-130,-330 + 6*45);
    button_sound2->setHoverEnableFlag(true);
    button_sound2->boundImageToPress(pressIcon[5]);
    button_sound2->boundImageToRelease(releaseIcon[5]);
    button_sound2->boundImageToHover(hoverIcon[5]);
    button_sound2->setBounds(-20,-20,40,40);
    button_sound2->connect(button_sound2,SIGNAL(fireAction()),accountView,SLOT(sound()));
    accountView->displayScene.addItem(button_sound2);

    DButton *button_date2 = new DButton;
    button_date2->setPos(-130,-330 + 7*45);
    button_date2->setHoverEnableFlag(true);
    button_date2->boundImageToPress(pressIcon[6]);
    button_date2->boundImageToRelease(releaseIcon[6]);
    button_date2->boundImageToHover(hoverIcon[6]);
    button_date2->setBounds(-20,-20,40,40);
    button_date2->connect(button_date2,SIGNAL(fireAction()),accountView,SLOT(date()));
    accountView->displayScene.addItem(button_date2);

    DButton *button_power2 = new DButton;
    button_power2->setPos(-130,-330 + 8*45);
    button_power2->setHoverEnableFlag(true);
    button_power2->boundImageToPress(pressIcon[7]);
    button_power2->boundImageToRelease(releaseIcon[7]);
    button_power2->boundImageToHover(hoverIcon[7]);
    button_power2->setBounds(-20,-20,40,40);
    button_power2->connect(button_power2,SIGNAL(fireAction()),accountView,SLOT(power()));
    accountView->displayScene.addItem(button_power2);

    DButton *button_mouse2 = new DButton;
    button_mouse2->setPos(-130,-330 + 9*45);
    button_mouse2->setHoverEnableFlag(true);
    button_mouse2->boundImageToPress(pressIcon[8]);
    button_mouse2->boundImageToRelease(releaseIcon[8]);
    button_mouse2->boundImageToHover(hoverIcon[8]);
    button_mouse2->setBounds(-20,-20,40,40);
    button_mouse2->connect(button_mouse2,SIGNAL(fireAction()),accountView,SLOT(mouse()));
    accountView->displayScene.addItem(button_mouse2);

    DButton *button_keyboard2 = new DButton;
    button_keyboard2->setPos(-130,-330 + 10*45);
    button_keyboard2->setHoverEnableFlag(true);
    button_keyboard2->boundImageToPress(pressIcon[9]);
    button_keyboard2->boundImageToRelease(releaseIcon[9]);
    button_keyboard2->boundImageToHover(hoverIcon[9]);
    button_keyboard2->setBounds(-20,-20,40,40);
    button_keyboard2->connect(button_keyboard2,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
    accountView->displayScene.addItem(button_keyboard2);

    DButton *button_shortcuts2 = new DButton;
    button_shortcuts2->setPos(-130,-330 + 11*45);
    button_shortcuts2->setHoverEnableFlag(true);
    button_shortcuts2->boundImageToPress(pressIcon[10]);
    button_shortcuts2->boundImageToRelease(releaseIcon[10]);
    button_shortcuts2->boundImageToHover(hoverIcon[10]);
    button_shortcuts2->setBounds(-20,-20,40,40);
    button_shortcuts2->connect(button_shortcuts2,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
    accountView->displayScene.addItem(button_shortcuts2);

    DButton *button_menu2 = new DButton;
    button_menu2->setPos(-130,-330 + 12*45);
    button_menu2->setHoverEnableFlag(true);
    button_menu2->boundImageToPress(pressIcon[11]);
    button_menu2->boundImageToRelease(releaseIcon[11]);
    button_menu2->boundImageToHover(hoverIcon[11]);
    button_menu2->setBounds(-20,-20,40,40);
    button_menu2->connect(button_menu2,SIGNAL(fireAction()),accountView,SLOT(menu()));
    accountView->displayScene.addItem(button_menu2);

    DButton *button_system2 = new DButton;
    button_system2->setPos(-130,-330 + 13*45);
    button_system2->setHoverEnableFlag(true);
    button_system2->boundImageToPress(pressIcon[12]);
    button_system2->boundImageToRelease(releaseIcon[12]);
    button_system2->boundImageToHover(hoverIcon[12]);
    button_system2->setBounds(-20,-20,40,40);
    button_system2->connect(button_system2,SIGNAL(fireAction()),accountView,SLOT(system()));
    accountView->displayScene.addItem(button_system2);

    DButton *button_pow2 = new DButton;
    button_pow2->setPos(-130,-330 + 14*45);
    button_pow2->setHoverEnableFlag(true);
    button_pow2->boundImageToPress(pressIcon[14]);
    button_pow2->boundImageToRelease(releaseIcon[14]);
    button_pow2->boundImageToHover(hoverIcon[14]);
    button_pow2->setBounds(-20,-20,40,40);
    button_pow2->connect(button_pow2,SIGNAL(fireAction()),accountView,SLOT(pow()));
    accountView->displayScene.addItem(button_pow2);

    //侧边栏默认程序界面
   DButton *button_home3 = new DButton;
   button_home3->setPos(-130,-330 + 0*45);
   button_home3->setHoverEnableFlag(true);
   button_home3->boundImageToPress(pressIcon[13]);
   button_home3->boundImageToRelease(releaseIcon[13]);
   button_home3->boundImageToHover(hoverIcon[13]);
   button_home3->setBounds(-20,-20,40,40);
   button_home3->connect(button_home3,SIGNAL(fireAction()),accountView,SLOT(home()));
   accountView->defaultScene.addItem(button_home3);


   DButton *button_account3 = new DButton;
   button_account3->setPos(-130,-330 + 1*45);
   button_account3->setHoverEnableFlag(true);
   button_account3->boundImageToPress(pressIcon[0]);
   button_account3->boundImageToRelease(releaseIcon[0]);
   button_account3->boundImageToHover(hoverIcon[0]);
   button_account3->setBounds(-20,-20,40,40);
   button_account3->connect(button_account3,SIGNAL(fireAction()),accountView,SLOT(account()));
   accountView->defaultScene.addItem(button_account3);

   DButton *button_display3 = new DButton;
   button_display3->setPos(-130,-330 + 2*45);
   button_display3->setHoverEnableFlag(true);
   button_display3->boundImageToPress(pressIcon[1]);
   button_display3->boundImageToRelease(releaseIcon[1]);
   button_display3->boundImageToHover(hoverIcon[1]);
   button_display3->setBounds(-20,-20,40,40);
   button_display3->connect(button_display3,SIGNAL(fireAction()),accountView,SLOT(display()));
   accountView->defaultScene.addItem(button_display3);

   DButton *button_default3 = new DButton;
   button_default3->setPos(-130,-330 + 3*45);
   button_default3->setHoverEnableFlag(true);
   button_default3->boundImageToPress(pressIcon[2]);
   button_default3->boundImageToRelease(releaseIcon[2]);
   button_default3->boundImageToHover(hoverIcon[2]);
   button_default3->setBounds(-20,-20,40,40);
   button_default3->connect(button_default3,SIGNAL(fireAction()),accountView,SLOT(default1()));
   accountView->defaultScene.addItem(button_default3);

   DButton *button_personalization3 = new DButton;
   button_personalization3->setPos(-130,-330 + 4*45);
   button_personalization3->setHoverEnableFlag(true);
   button_personalization3->boundImageToPress(pressIcon[3]);
   button_personalization3->boundImageToRelease(releaseIcon[3]);
   button_personalization3->boundImageToHover(hoverIcon[3]);
   button_personalization3->setBounds(-20,-20,40,40);
   button_personalization3->connect(button_personalization3,SIGNAL(fireAction()),accountView,SLOT(personalization()));
   accountView->defaultScene.addItem(button_personalization3);

   DButton *button_network3 = new DButton;
   button_network3->setPos(-130,-330 + 5*45);
   button_network3->setHoverEnableFlag(true);
   button_network3->boundImageToPress(pressIcon[4]);
   button_network3->boundImageToRelease(releaseIcon[4]);
   button_network3->boundImageToHover(hoverIcon[4]);
   button_network3->setBounds(-20,-20,40,40);
   button_network3->connect(button_network3,SIGNAL(fireAction()),accountView,SLOT(network()));
   accountView->defaultScene.addItem(button_network3);

   DButton *button_sound3 = new DButton;
   button_sound3->setPos(-130,-330 + 6*45);
   button_sound3->setHoverEnableFlag(true);
   button_sound3->boundImageToPress(pressIcon[5]);
   button_sound3->boundImageToRelease(releaseIcon[5]);
   button_sound3->boundImageToHover(hoverIcon[5]);
   button_sound3->setBounds(-20,-20,40,40);
   button_sound3->connect(button_sound3,SIGNAL(fireAction()),accountView,SLOT(sound()));
   accountView->defaultScene.addItem(button_sound3);

   DButton *button_date3 = new DButton;
   button_date3->setPos(-130,-330 + 7*45);
   button_date3->setHoverEnableFlag(true);
   button_date3->boundImageToPress(pressIcon[6]);
   button_date3->boundImageToRelease(releaseIcon[6]);
   button_date3->boundImageToHover(hoverIcon[6]);
   button_date3->setBounds(-20,-20,40,40);
   button_date3->connect(button_date3,SIGNAL(fireAction()),accountView,SLOT(date()));
   accountView->defaultScene.addItem(button_date3);

   DButton *button_power3 = new DButton;
   button_power3->setPos(-130,-330 + 8*45);
   button_power3->setHoverEnableFlag(true);
   button_power3->boundImageToPress(pressIcon[7]);
   button_power3->boundImageToRelease(releaseIcon[7]);
   button_power3->boundImageToHover(hoverIcon[7]);
   button_power3->setBounds(-20,-20,40,40);
   button_power3->connect(button_power3,SIGNAL(fireAction()),accountView,SLOT(power()));
   accountView->defaultScene.addItem(button_power3);

   DButton *button_mouse3 = new DButton;
   button_mouse3->setPos(-130,-330 + 9*45);
   button_mouse3->setHoverEnableFlag(true);
   button_mouse3->boundImageToPress(pressIcon[8]);
   button_mouse3->boundImageToRelease(releaseIcon[8]);
   button_mouse3->boundImageToHover(hoverIcon[8]);
   button_mouse3->setBounds(-20,-20,40,40);
   button_mouse3->connect(button_mouse3,SIGNAL(fireAction()),accountView,SLOT(mouse()));
   accountView->defaultScene.addItem(button_mouse3);

   DButton *button_keyboard3 = new DButton;
   button_keyboard3->setPos(-130,-330 + 10*45);
   button_keyboard3->setHoverEnableFlag(true);
   button_keyboard3->boundImageToPress(pressIcon[9]);
   button_keyboard3->boundImageToRelease(releaseIcon[9]);
   button_keyboard3->boundImageToHover(hoverIcon[9]);
   button_keyboard3->setBounds(-20,-20,40,40);
   button_keyboard3->connect(button_keyboard2,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
   accountView->defaultScene.addItem(button_keyboard3);

   DButton *button_shortcuts3 = new DButton;
   button_shortcuts3->setPos(-130,-330 + 11*45);
   button_shortcuts3->setHoverEnableFlag(true);
   button_shortcuts3->boundImageToPress(pressIcon[10]);
   button_shortcuts3->boundImageToRelease(releaseIcon[10]);
   button_shortcuts3->boundImageToHover(hoverIcon[10]);
   button_shortcuts3->setBounds(-20,-20,40,40);
   button_shortcuts3->connect(button_shortcuts3,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
   accountView->defaultScene.addItem(button_shortcuts3);

   DButton *button_menu3 = new DButton;
   button_menu3->setPos(-130,-330 + 12*45);
   button_menu3->setHoverEnableFlag(true);
   button_menu3->boundImageToPress(pressIcon[11]);
   button_menu3->boundImageToRelease(releaseIcon[11]);
   button_menu3->boundImageToHover(hoverIcon[11]);
   button_menu3->setBounds(-20,-20,40,40);
   button_menu3->connect(button_menu3,SIGNAL(fireAction()),accountView,SLOT(menu()));
   accountView->defaultScene.addItem(button_menu3);

   DButton *button_system3 = new DButton;
   button_system3->setPos(-130,-330 + 13*45);
   button_system3->setHoverEnableFlag(true);
   button_system3->boundImageToPress(pressIcon[12]);
   button_system3->boundImageToRelease(releaseIcon[12]);
   button_system3->boundImageToHover(hoverIcon[12]);
   button_system3->setBounds(-20,-20,40,40);
   button_system3->connect(button_system3,SIGNAL(fireAction()),accountView,SLOT(system()));
   accountView->defaultScene.addItem(button_system3);

   DButton *button_pow3 = new DButton;
   button_pow3->setPos(-130,-330 + 14*45);
   button_pow3->setHoverEnableFlag(true);
   button_pow3->boundImageToPress(pressIcon[14]);
   button_pow3->boundImageToRelease(releaseIcon[14]);
   button_pow3->boundImageToHover(hoverIcon[14]);
   button_pow3->setBounds(-20,-20,40,40);
   button_pow3->connect(button_pow3,SIGNAL(fireAction()),accountView,SLOT(pow()));
   accountView->defaultScene.addItem(button_pow3);

   //侧边栏个性化界面
   DButton *button_home4 = new DButton;
   button_home4->setPos(-130,-330 + 0*45);
   button_home4->setHoverEnableFlag(true);
   button_home4->boundImageToPress(pressIcon[13]);
   button_home4->boundImageToRelease(releaseIcon[13]);
   button_home4->boundImageToHover(hoverIcon[13]);
   button_home4->setBounds(-20,-20,40,40);
   button_home4->connect(button_home4,SIGNAL(fireAction()),accountView,SLOT(home()));
   accountView->personalizationScene.addItem(button_home4);


   DButton *button_account4 = new DButton;
   button_account4->setPos(-130,-330 + 1*45);
   button_account4->setHoverEnableFlag(true);
   button_account4->boundImageToPress(pressIcon[0]);
   button_account4->boundImageToRelease(releaseIcon[0]);
   button_account4->boundImageToHover(hoverIcon[0]);
   button_account4->setBounds(-20,-20,40,40);
   button_account4->connect(button_account4,SIGNAL(fireAction()),accountView,SLOT(account()));
   accountView->personalizationScene.addItem(button_account4);

   DButton *button_display4 = new DButton;
   button_display4->setPos(-130,-330 + 2*45);
   button_display4->setHoverEnableFlag(true);
   button_display4->boundImageToPress(pressIcon[1]);
   button_display4->boundImageToRelease(releaseIcon[1]);
   button_display4->boundImageToHover(hoverIcon[1]);
   button_display4->setBounds(-20,-20,40,40);
   button_display4->connect(button_display4,SIGNAL(fireAction()),accountView,SLOT(display()));
   accountView->personalizationScene.addItem(button_display4);

   DButton *button_default4 = new DButton;
   button_default4->setPos(-130,-330 + 3*45);
   button_default4->setHoverEnableFlag(true);
   button_default4->boundImageToPress(pressIcon[2]);
   button_default4->boundImageToRelease(releaseIcon[2]);
   button_default4->boundImageToHover(hoverIcon[2]);
   button_default4->setBounds(-20,-20,40,40);
   button_default4->connect(button_default4,SIGNAL(fireAction()),accountView,SLOT(default1()));
   accountView->personalizationScene.addItem(button_default4);

   DButton *button_personalization4 = new DButton;
   button_personalization4->setPos(-130,-330 + 4*45);
   button_personalization4->setHoverEnableFlag(true);
   button_personalization4->boundImageToPress(pressIcon[3]);
   button_personalization4->boundImageToRelease(releaseIcon[3]);
   button_personalization4->boundImageToHover(hoverIcon[3]);
   button_personalization4->setBounds(-20,-20,40,40);
   button_personalization4->connect(button_personalization4,SIGNAL(fireAction()),accountView,SLOT(personalization()));
   accountView->personalizationScene.addItem(button_personalization4);

   DButton *button_network4 = new DButton;
   button_network4->setPos(-130,-330 + 5*45);
   button_network4->setHoverEnableFlag(true);
   button_network4->boundImageToPress(pressIcon[4]);
   button_network4->boundImageToRelease(releaseIcon[4]);
   button_network4->boundImageToHover(hoverIcon[4]);
   button_network4->setBounds(-20,-20,40,40);
   button_network4->connect(button_network4,SIGNAL(fireAction()),accountView,SLOT(network()));
   accountView->personalizationScene.addItem(button_network4);

   DButton *button_sound4 = new DButton;
   button_sound4->setPos(-130,-330 + 6*45);
   button_sound4->setHoverEnableFlag(true);
   button_sound4->boundImageToPress(pressIcon[5]);
   button_sound4->boundImageToRelease(releaseIcon[5]);
   button_sound4->boundImageToHover(hoverIcon[5]);
   button_sound4->setBounds(-20,-20,40,40);
   button_sound4->connect(button_sound4,SIGNAL(fireAction()),accountView,SLOT(sound()));
   accountView->personalizationScene.addItem(button_sound4);

   DButton *button_date4 = new DButton;
   button_date4->setPos(-130,-330 + 7*45);
   button_date4->setHoverEnableFlag(true);
   button_date4->boundImageToPress(pressIcon[6]);
   button_date4->boundImageToRelease(releaseIcon[6]);
   button_date4->boundImageToHover(hoverIcon[6]);
   button_date4->setBounds(-20,-20,40,40);
   button_date4->connect(button_date4,SIGNAL(fireAction()),accountView,SLOT(date()));
   accountView->personalizationScene.addItem(button_date4);

   DButton *button_power4 = new DButton;
   button_power4->setPos(-130,-330 + 8*45);
   button_power4->setHoverEnableFlag(true);
   button_power4->boundImageToPress(pressIcon[7]);
   button_power4->boundImageToRelease(releaseIcon[7]);
   button_power4->boundImageToHover(hoverIcon[7]);
   button_power4->setBounds(-20,-20,40,40);
   button_power4->connect(button_power4,SIGNAL(fireAction()),accountView,SLOT(power()));
   accountView->personalizationScene.addItem(button_power4);

   DButton *button_mouse4 = new DButton;
   button_mouse4->setPos(-130,-330 + 9*45);
   button_mouse4->setHoverEnableFlag(true);
   button_mouse4->boundImageToPress(pressIcon[8]);
   button_mouse4->boundImageToRelease(releaseIcon[8]);
   button_mouse4->boundImageToHover(hoverIcon[8]);
   button_mouse4->setBounds(-20,-20,40,40);
   button_mouse4->connect(button_mouse4,SIGNAL(fireAction()),accountView,SLOT(mouse()));
   accountView->personalizationScene.addItem(button_mouse4);

   DButton *button_keyboard4 = new DButton;
   button_keyboard4->setPos(-130,-330 + 10*45);
   button_keyboard4->setHoverEnableFlag(true);
   button_keyboard4->boundImageToPress(pressIcon[9]);
   button_keyboard4->boundImageToRelease(releaseIcon[9]);
   button_keyboard4->boundImageToHover(hoverIcon[9]);
   button_keyboard4->setBounds(-20,-20,40,40);
   button_keyboard4->connect(button_keyboard4,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
   accountView->personalizationScene.addItem(button_keyboard4);

   DButton *button_shortcuts4 = new DButton;
   button_shortcuts4->setPos(-130,-330 + 11*45);
   button_shortcuts4->setHoverEnableFlag(true);
   button_shortcuts4->boundImageToPress(pressIcon[10]);
   button_shortcuts4->boundImageToRelease(releaseIcon[10]);
   button_shortcuts4->boundImageToHover(hoverIcon[10]);
   button_shortcuts4->setBounds(-20,-20,40,40);
   button_shortcuts4->connect(button_shortcuts3,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
   accountView->personalizationScene.addItem(button_shortcuts4);

   DButton *button_menu4 = new DButton;
   button_menu4->setPos(-130,-330 + 12*45);
   button_menu4->setHoverEnableFlag(true);
   button_menu4->boundImageToPress(pressIcon[11]);
   button_menu4->boundImageToRelease(releaseIcon[11]);
   button_menu4->boundImageToHover(hoverIcon[11]);
   button_menu4->setBounds(-20,-20,40,40);
   button_menu4->connect(button_menu4,SIGNAL(fireAction()),accountView,SLOT(menu()));
   accountView->personalizationScene.addItem(button_menu4);

   DButton *button_system4 = new DButton;
   button_system4->setPos(-130,-330 + 13*45);
   button_system4->setHoverEnableFlag(true);
   button_system4->boundImageToPress(pressIcon[12]);
   button_system4->boundImageToRelease(releaseIcon[12]);
   button_system4->boundImageToHover(hoverIcon[12]);
   button_system4->setBounds(-20,-20,40,40);
   button_system4->connect(button_system4,SIGNAL(fireAction()),accountView,SLOT(system()));
   accountView->personalizationScene.addItem(button_system4);

   DButton *button_pow4 = new DButton;
   button_pow4->setPos(-130,-330 + 14*45);
   button_pow4->setHoverEnableFlag(true);
   button_pow4->boundImageToPress(pressIcon[14]);
   button_pow4->boundImageToRelease(releaseIcon[14]);
   button_pow4->boundImageToHover(hoverIcon[14]);
   button_pow4->setBounds(-20,-20,40,40);
   button_pow4->connect(button_pow4,SIGNAL(fireAction()),accountView,SLOT(pow()));
   accountView->personalizationScene.addItem(button_pow4);


       //侧边栏网络界面
   DButton *button_home5 = new DButton;
   button_home5->setPos(-130,-330 + 0*45);
   button_home5->setHoverEnableFlag(true);
   button_home5->boundImageToPress(pressIcon[13]);
   button_home5->boundImageToRelease(releaseIcon[13]);
   button_home5->boundImageToHover(hoverIcon[13]);
   button_home5->setBounds(-20,-20,40,40);
   button_home5->connect(button_home5,SIGNAL(fireAction()),accountView,SLOT(home()));
   accountView->networkScene.addItem(button_home5);


   DButton *button_account5 = new DButton;
   button_account5->setPos(-130,-330 + 1*45);
   button_account5->setHoverEnableFlag(true);
   button_account5->boundImageToPress(pressIcon[0]);
   button_account5->boundImageToRelease(releaseIcon[0]);
   button_account5->boundImageToHover(hoverIcon[0]);
   button_account5->setBounds(-20,-20,40,40);
   button_account5->connect(button_account5,SIGNAL(fireAction()),accountView,SLOT(account()));
   accountView->networkScene.addItem(button_account5);

   DButton *button_display5 = new DButton;
   button_display5->setPos(-130,-330 + 2*45);
   button_display5->setHoverEnableFlag(true);
   button_display5->boundImageToPress(pressIcon[1]);
   button_display5->boundImageToRelease(releaseIcon[1]);
   button_display5->boundImageToHover(hoverIcon[1]);
   button_display5->setBounds(-20,-20,40,40);
   button_display5->connect(button_display5,SIGNAL(fireAction()),accountView,SLOT(display()));
   accountView->networkScene.addItem(button_display5);

   DButton *button_default5 = new DButton;
   button_default5->setPos(-130,-330 + 3*45);
   button_default5->setHoverEnableFlag(true);
   button_default5->boundImageToPress(pressIcon[2]);
   button_default5->boundImageToRelease(releaseIcon[2]);
   button_default5->boundImageToHover(hoverIcon[2]);
   button_default5->setBounds(-20,-20,40,40);
   button_default5->connect(button_default5,SIGNAL(fireAction()),accountView,SLOT(default1()));
   accountView->networkScene.addItem(button_default5);

   DButton *button_personalization5 = new DButton;
   button_personalization5->setPos(-130,-330 + 4*45);
   button_personalization5->setHoverEnableFlag(true);
   button_personalization5->boundImageToPress(pressIcon[3]);
   button_personalization5->boundImageToRelease(releaseIcon[3]);
   button_personalization5->boundImageToHover(hoverIcon[3]);
   button_personalization5->setBounds(-20,-20,40,40);
   button_personalization5->connect(button_personalization5,SIGNAL(fireAction()),accountView,SLOT(personalization()));
   accountView->networkScene.addItem(button_personalization5);

   DButton *button_network5 = new DButton;
   button_network5->setPos(-130,-330 + 5*45);
   button_network5->setHoverEnableFlag(true);
   button_network5->boundImageToPress(pressIcon[4]);
   button_network5->boundImageToRelease(releaseIcon[4]);
   button_network5->boundImageToHover(hoverIcon[4]);
   button_network5->setBounds(-20,-20,40,40);
   button_network5->connect(button_network5,SIGNAL(fireAction()),accountView,SLOT(network()));
   accountView->networkScene.addItem(button_network5);

   DButton *button_sound5 = new DButton;
   button_sound5->setPos(-130,-330 + 6*45);
   button_sound5->setHoverEnableFlag(true);
   button_sound5->boundImageToPress(pressIcon[5]);
   button_sound5->boundImageToRelease(releaseIcon[5]);
   button_sound5->boundImageToHover(hoverIcon[5]);
   button_sound5->setBounds(-20,-20,40,40);
   button_sound5->connect(button_sound5,SIGNAL(fireAction()),accountView,SLOT(sound()));
   accountView->networkScene.addItem(button_sound5);

   DButton *button_date5 = new DButton;
   button_date5->setPos(-130,-330 + 7*45);
   button_date5->setHoverEnableFlag(true);
   button_date5->boundImageToPress(pressIcon[6]);
   button_date5->boundImageToRelease(releaseIcon[6]);
   button_date5->boundImageToHover(hoverIcon[6]);
   button_date5->setBounds(-20,-20,40,40);
   button_date5->connect(button_date5,SIGNAL(fireAction()),accountView,SLOT(date()));
   accountView->networkScene.addItem(button_date5);

   DButton *button_power5 = new DButton;
   button_power5->setPos(-130,-330 + 8*45);
   button_power5->setHoverEnableFlag(true);
   button_power5->boundImageToPress(pressIcon[7]);
   button_power5->boundImageToRelease(releaseIcon[7]);
   button_power5->boundImageToHover(hoverIcon[7]);
   button_power5->setBounds(-20,-20,40,40);
   button_power5->connect(button_power5,SIGNAL(fireAction()),accountView,SLOT(power()));
   accountView->networkScene.addItem(button_power5);

   DButton *button_mouse5 = new DButton;
   button_mouse5->setPos(-130,-330 + 9*45);
   button_mouse5->setHoverEnableFlag(true);
   button_mouse5->boundImageToPress(pressIcon[8]);
   button_mouse5->boundImageToRelease(releaseIcon[8]);
   button_mouse5->boundImageToHover(hoverIcon[8]);
   button_mouse5->setBounds(-20,-20,40,40);
   button_mouse5->connect(button_mouse5,SIGNAL(fireAction()),accountView,SLOT(mouse()));
   accountView->networkScene.addItem(button_mouse5);

   DButton *button_keyboard5 = new DButton;
   button_keyboard5->setPos(-130,-330 + 10*45);
   button_keyboard5->setHoverEnableFlag(true);
   button_keyboard5->boundImageToPress(pressIcon[9]);
   button_keyboard5->boundImageToRelease(releaseIcon[9]);
   button_keyboard5->boundImageToHover(hoverIcon[9]);
   button_keyboard5->setBounds(-20,-20,40,40);
   button_keyboard5->connect(button_keyboard5,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
   accountView->networkScene.addItem(button_keyboard5);

   DButton *button_shortcuts5 = new DButton;
   button_shortcuts5->setPos(-130,-330 + 11*45);
   button_shortcuts5->setHoverEnableFlag(true);
   button_shortcuts5->boundImageToPress(pressIcon[10]);
   button_shortcuts5->boundImageToRelease(releaseIcon[10]);
   button_shortcuts5->boundImageToHover(hoverIcon[10]);
   button_shortcuts5->setBounds(-20,-20,40,40);
   button_shortcuts5->connect(button_shortcuts5,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
   accountView->networkScene.addItem(button_shortcuts5);

   DButton *button_menu5 = new DButton;
   button_menu5->setPos(-130,-330 + 12*45);
   button_menu5->setHoverEnableFlag(true);
   button_menu5->boundImageToPress(pressIcon[11]);
   button_menu5->boundImageToRelease(releaseIcon[11]);
   button_menu5->boundImageToHover(hoverIcon[11]);
   button_menu5->setBounds(-20,-20,40,40);
   button_menu5->connect(button_menu5,SIGNAL(fireAction()),accountView,SLOT(menu()));
   accountView->networkScene.addItem(button_menu5);

   DButton *button_system5 = new DButton;
   button_system5->setPos(-130,-330 + 13*45);
   button_system5->setHoverEnableFlag(true);
   button_system5->boundImageToPress(pressIcon[12]);
   button_system5->boundImageToRelease(releaseIcon[12]);
   button_system5->boundImageToHover(hoverIcon[12]);
   button_system5->setBounds(-20,-20,40,40);
   button_system5->connect(button_system5,SIGNAL(fireAction()),accountView,SLOT(system()));
   accountView->networkScene.addItem(button_system5);

   DButton *button_pow5 = new DButton;
   button_pow5->setPos(-130,-330 + 14*45);
   button_pow5->setHoverEnableFlag(true);
   button_pow5->boundImageToPress(pressIcon[14]);
   button_pow5->boundImageToRelease(releaseIcon[14]);
   button_pow5->boundImageToHover(hoverIcon[14]);
   button_pow5->setBounds(-20,-20,40,40);
   button_pow5->connect(button_pow5,SIGNAL(fireAction()),accountView,SLOT(pow()));
   accountView->networkScene.addItem(button_pow5);
   //侧边栏声音界面
   DButton *button_home6 = new DButton;
   button_home6->setPos(-130,-330 + 0*45);
   button_home6->setHoverEnableFlag(true);
   button_home6->boundImageToPress(pressIcon[13]);
   button_home6->boundImageToRelease(releaseIcon[13]);
   button_home6->boundImageToHover(hoverIcon[13]);
   button_home6->setBounds(-20,-20,40,40);
   button_home6->connect(button_home6,SIGNAL(fireAction()),accountView,SLOT(home()));
   accountView->soundScene.addItem(button_home6);


   DButton *button_account6 = new DButton;
   button_account6->setPos(-130,-330 + 1*45);
   button_account6->setHoverEnableFlag(true);
   button_account6->boundImageToPress(pressIcon[0]);
   button_account6->boundImageToRelease(releaseIcon[0]);
   button_account6->boundImageToHover(hoverIcon[0]);
   button_account6->setBounds(-20,-20,40,40);
   button_account6->connect(button_account6,SIGNAL(fireAction()),accountView,SLOT(account()));
   accountView->soundScene.addItem(button_account6);

   DButton *button_display6 = new DButton;
   button_display6->setPos(-130,-330 + 2*45);
   button_display6->setHoverEnableFlag(true);
   button_display6->boundImageToPress(pressIcon[1]);
   button_display6->boundImageToRelease(releaseIcon[1]);
   button_display6->boundImageToHover(hoverIcon[1]);
   button_display6->setBounds(-20,-20,40,40);
   button_display6->connect(button_display6,SIGNAL(fireAction()),accountView,SLOT(display()));
   accountView->soundScene.addItem(button_display6);

   DButton *button_default6 = new DButton;
   button_default6->setPos(-130,-330 + 3*45);
   button_default6->setHoverEnableFlag(true);
   button_default6->boundImageToPress(pressIcon[2]);
   button_default6->boundImageToRelease(releaseIcon[2]);
   button_default6->boundImageToHover(hoverIcon[2]);
   button_default6->setBounds(-20,-20,40,40);
   button_default6->connect(button_default6,SIGNAL(fireAction()),accountView,SLOT(default1()));
   accountView->soundScene.addItem(button_default6);

   DButton *button_personalization6 = new DButton;
   button_personalization6->setPos(-130,-330 + 4*45);
   button_personalization6->setHoverEnableFlag(true);
   button_personalization6->boundImageToPress(pressIcon[3]);
   button_personalization6->boundImageToRelease(releaseIcon[3]);
   button_personalization6->boundImageToHover(hoverIcon[3]);
   button_personalization6->setBounds(-20,-20,40,40);
   button_personalization6->connect(button_personalization6,SIGNAL(fireAction()),accountView,SLOT(personalization()));
   accountView->soundScene.addItem(button_personalization6);

   DButton *button_network6 = new DButton;
   button_network6->setPos(-130,-330 + 5*45);
   button_network6->setHoverEnableFlag(true);
   button_network6->boundImageToPress(pressIcon[4]);
   button_network6->boundImageToRelease(releaseIcon[4]);
   button_network6->boundImageToHover(hoverIcon[4]);
   button_network6->setBounds(-20,-20,40,40);
   button_network6->connect(button_network6,SIGNAL(fireAction()),accountView,SLOT(network()));
   accountView->soundScene.addItem(button_network6);

   DButton *button_sound6 = new DButton;
   button_sound6->setPos(-130,-330 + 6*45);
   button_sound6->setHoverEnableFlag(true);
   button_sound6->boundImageToPress(pressIcon[5]);
   button_sound6->boundImageToRelease(releaseIcon[5]);
   button_sound6->boundImageToHover(hoverIcon[5]);
   button_sound6->setBounds(-20,-20,40,40);
   button_sound6->connect(button_sound6,SIGNAL(fireAction()),accountView,SLOT(sound()));
   accountView->soundScene.addItem(button_sound6);

   DButton *button_date6 = new DButton;
   button_date6->setPos(-130,-330 + 7*45);
   button_date6->setHoverEnableFlag(true);
   button_date6->boundImageToPress(pressIcon[6]);
   button_date6->boundImageToRelease(releaseIcon[6]);
   button_date6->boundImageToHover(hoverIcon[6]);
   button_date6->setBounds(-20,-20,40,40);
   button_date6->connect(button_date6,SIGNAL(fireAction()),accountView,SLOT(date()));
   accountView->soundScene.addItem(button_date6);

   DButton *button_power6 = new DButton;
   button_power6->setPos(-130,-330 + 8*45);
   button_power6->setHoverEnableFlag(true);
   button_power6->boundImageToPress(pressIcon[7]);
   button_power6->boundImageToRelease(releaseIcon[7]);
   button_power6->boundImageToHover(hoverIcon[7]);
   button_power6->setBounds(-20,-20,40,40);
   button_power6->connect(button_power6,SIGNAL(fireAction()),accountView,SLOT(power()));
   accountView->soundScene.addItem(button_power6);

   DButton *button_mouse6 = new DButton;
   button_mouse6->setPos(-130,-330 + 9*45);
   button_mouse6->setHoverEnableFlag(true);
   button_mouse6->boundImageToPress(pressIcon[8]);
   button_mouse6->boundImageToRelease(releaseIcon[8]);
   button_mouse6->boundImageToHover(hoverIcon[8]);
   button_mouse6->setBounds(-20,-20,40,40);
   button_mouse6->connect(button_mouse6,SIGNAL(fireAction()),accountView,SLOT(mouse()));
   accountView->soundScene.addItem(button_mouse6);

   DButton *button_keyboard6 = new DButton;
   button_keyboard6->setPos(-130,-330 + 10*45);
   button_keyboard6->setHoverEnableFlag(true);
   button_keyboard6->boundImageToPress(pressIcon[9]);
   button_keyboard6->boundImageToRelease(releaseIcon[9]);
   button_keyboard6->boundImageToHover(hoverIcon[9]);
   button_keyboard6->setBounds(-20,-20,40,40);
   button_keyboard6->connect(button_keyboard6,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
   accountView->soundScene.addItem(button_keyboard6);

   DButton *button_shortcuts6 = new DButton;
   button_shortcuts6->setPos(-130,-330 + 11*45);
   button_shortcuts6->setHoverEnableFlag(true);
   button_shortcuts6->boundImageToPress(pressIcon[10]);
   button_shortcuts6->boundImageToRelease(releaseIcon[10]);
   button_shortcuts6->boundImageToHover(hoverIcon[10]);
   button_shortcuts6->setBounds(-20,-20,40,40);
   button_shortcuts6->connect(button_shortcuts6,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
   accountView->soundScene.addItem(button_shortcuts6);

   DButton *button_menu6 = new DButton;
   button_menu6->setPos(-130,-330 + 12*45);
   button_menu6->setHoverEnableFlag(true);
   button_menu6->boundImageToPress(pressIcon[11]);
   button_menu6->boundImageToRelease(releaseIcon[11]);
   button_menu6->boundImageToHover(hoverIcon[11]);
   button_menu6->setBounds(-20,-20,40,40);
   button_menu6->connect(button_menu6,SIGNAL(fireAction()),accountView,SLOT(menu()));
   accountView->soundScene.addItem(button_menu6);

   DButton *button_system6 = new DButton;
   button_system6->setPos(-130,-330 + 13*45);
   button_system6->setHoverEnableFlag(true);
   button_system6->boundImageToPress(pressIcon[12]);
   button_system6->boundImageToRelease(releaseIcon[12]);
   button_system6->boundImageToHover(hoverIcon[12]);
   button_system6->setBounds(-20,-20,40,40);
   button_system6->connect(button_system6,SIGNAL(fireAction()),accountView,SLOT(system()));
   accountView->soundScene.addItem(button_system6);

   DButton *button_pow6 = new DButton;
   button_pow6->setPos(-130,-330 + 14*45);
   button_pow6->setHoverEnableFlag(true);
   button_pow6->boundImageToPress(pressIcon[14]);
   button_pow6->boundImageToRelease(releaseIcon[14]);
   button_pow6->boundImageToHover(hoverIcon[14]);
   button_pow6->setBounds(-20,-20,40,40);
   button_pow6->connect(button_pow6,SIGNAL(fireAction()),accountView,SLOT(pow()));
   accountView->soundScene.addItem(button_pow6);

        //侧边栏日期和时间界面
       DButton *button_home7 = new DButton;
       button_home7->setPos(-130,-330 + 0*45);
       button_home7->setHoverEnableFlag(true);
       button_home7->boundImageToPress(pressIcon[13]);
       button_home7->boundImageToRelease(releaseIcon[13]);
       button_home7->boundImageToHover(hoverIcon[13]);
       button_home7->setBounds(-20,-20,40,40);
       button_home7->connect(button_home7,SIGNAL(fireAction()),accountView,SLOT(home()));
       accountView->dateScene.addItem(button_home7);


       DButton *button_account7 = new DButton;
       button_account7->setPos(-130,-330 + 1*45);
       button_account7->setHoverEnableFlag(true);
       button_account7->boundImageToPress(pressIcon[0]);
       button_account7->boundImageToRelease(releaseIcon[0]);
       button_account7->boundImageToHover(hoverIcon[0]);
       button_account7->setBounds(-20,-20,40,40);
       button_account7->connect(button_account7,SIGNAL(fireAction()),accountView,SLOT(account()));
       accountView->dateScene.addItem(button_account7);

       DButton *button_display7 = new DButton;
       button_display7->setPos(-130,-330 + 2*45);
       button_display7->setHoverEnableFlag(true);
       button_display7->boundImageToPress(pressIcon[1]);
       button_display7->boundImageToRelease(releaseIcon[1]);
       button_display7->boundImageToHover(hoverIcon[1]);
       button_display7->setBounds(-20,-20,40,40);
       button_display7->connect(button_display7,SIGNAL(fireAction()),accountView,SLOT(display()));
       accountView->dateScene.addItem(button_display7);

       DButton *button_default7 = new DButton;
       button_default7->setPos(-130,-330 + 3*45);
       button_default7->setHoverEnableFlag(true);
       button_default7->boundImageToPress(pressIcon[2]);
       button_default7->boundImageToRelease(releaseIcon[2]);
       button_default7->boundImageToHover(hoverIcon[2]);
       button_default7->setBounds(-20,-20,40,40);
       button_default7->connect(button_default7,SIGNAL(fireAction()),accountView,SLOT(default1()));
       accountView->dateScene.addItem(button_default7);

       DButton *button_personalization7 = new DButton;
       button_personalization7->setPos(-130,-330 + 4*45);
       button_personalization7->setHoverEnableFlag(true);
       button_personalization7->boundImageToPress(pressIcon[3]);
       button_personalization7->boundImageToRelease(releaseIcon[3]);
       button_personalization7->boundImageToHover(hoverIcon[3]);
       button_personalization7->setBounds(-20,-20,40,40);
       button_personalization7->connect(button_personalization7,SIGNAL(fireAction()),accountView,SLOT(personalization()));
       accountView->dateScene.addItem(button_personalization7);

       DButton *button_network7 = new DButton;
       button_network7->setPos(-130,-330 + 5*45);
       button_network7->setHoverEnableFlag(true);
       button_network7->boundImageToPress(pressIcon[4]);
       button_network7->boundImageToRelease(releaseIcon[4]);
       button_network7->boundImageToHover(hoverIcon[4]);
       button_network7->setBounds(-20,-20,40,40);
       button_network7->connect(button_network7,SIGNAL(fireAction()),accountView,SLOT(network()));
       accountView->dateScene.addItem(button_network7);

       DButton *button_sound7 = new DButton;
       button_sound7->setPos(-130,-330 + 6*45);
       button_sound7->setHoverEnableFlag(true);
       button_sound7->boundImageToPress(pressIcon[5]);
       button_sound7->boundImageToRelease(releaseIcon[5]);
       button_sound7->boundImageToHover(hoverIcon[5]);
       button_sound7->setBounds(-20,-20,40,40);
       button_sound7->connect(button_sound7,SIGNAL(fireAction()),accountView,SLOT(sound()));
       accountView->dateScene.addItem(button_sound7);

       DButton *button_date7 = new DButton;
       button_date7->setPos(-130,-330 + 7*45);
       button_date7->setHoverEnableFlag(true);
       button_date7->boundImageToPress(pressIcon[6]);
       button_date7->boundImageToRelease(releaseIcon[6]);
       button_date7->boundImageToHover(hoverIcon[6]);
       button_date7->setBounds(-20,-20,40,40);
       button_date7->connect(button_date7,SIGNAL(fireAction()),accountView,SLOT(date()));
       accountView->dateScene.addItem(button_date7);

       DButton *button_power7 = new DButton;
       button_power7->setPos(-130,-330 + 8*45);
       button_power7->setHoverEnableFlag(true);
       button_power7->boundImageToPress(pressIcon[7]);
       button_power7->boundImageToRelease(releaseIcon[7]);
       button_power7->boundImageToHover(hoverIcon[7]);
       button_power7->setBounds(-20,-20,40,40);
       button_power7->connect(button_power7,SIGNAL(fireAction()),accountView,SLOT(power()));
       accountView->dateScene.addItem(button_power7);

       DButton *button_mouse7 = new DButton;
       button_mouse7->setPos(-130,-330 + 9*45);
       button_mouse7->setHoverEnableFlag(true);
       button_mouse7->boundImageToPress(pressIcon[8]);
       button_mouse7->boundImageToRelease(releaseIcon[8]);
       button_mouse7->boundImageToHover(hoverIcon[8]);
       button_mouse7->setBounds(-20,-20,40,40);
       button_mouse7->connect(button_mouse7,SIGNAL(fireAction()),accountView,SLOT(mouse()));
       accountView->dateScene.addItem(button_mouse7);

       DButton *button_keyboard7 = new DButton;
       button_keyboard7->setPos(-130,-330 + 10*45);
       button_keyboard7->setHoverEnableFlag(true);
       button_keyboard7->boundImageToPress(pressIcon[9]);
       button_keyboard7->boundImageToRelease(releaseIcon[9]);
       button_keyboard7->boundImageToHover(hoverIcon[9]);
       button_keyboard7->setBounds(-20,-20,40,40);
       button_keyboard7->connect(button_keyboard7,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
       accountView->dateScene.addItem(button_keyboard7);

       DButton *button_shortcuts7 = new DButton;
       button_shortcuts7->setPos(-130,-330 + 11*45);
       button_shortcuts7->setHoverEnableFlag(true);
       button_shortcuts7->boundImageToPress(pressIcon[10]);
       button_shortcuts7->boundImageToRelease(releaseIcon[10]);
       button_shortcuts7->boundImageToHover(hoverIcon[10]);
       button_shortcuts7->setBounds(-20,-20,40,40);
       button_shortcuts7->connect(button_shortcuts7,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
       accountView->dateScene.addItem(button_shortcuts7);

       DButton *button_menu7 = new DButton;
       button_menu7->setPos(-130,-330 + 12*45);
       button_menu7->setHoverEnableFlag(true);
       button_menu7->boundImageToPress(pressIcon[11]);
       button_menu7->boundImageToRelease(releaseIcon[11]);
       button_menu7->boundImageToHover(hoverIcon[11]);
       button_menu7->setBounds(-20,-20,40,40);
       button_menu7->connect(button_menu7,SIGNAL(fireAction()),accountView,SLOT(menu()));
       accountView->dateScene.addItem(button_menu7);

       DButton *button_system7 = new DButton;
       button_system7->setPos(-130,-330 + 13*45);
       button_system7->setHoverEnableFlag(true);
       button_system7->boundImageToPress(pressIcon[12]);
       button_system7->boundImageToRelease(releaseIcon[12]);
       button_system7->boundImageToHover(hoverIcon[12]);
       button_system7->setBounds(-20,-20,40,40);
       button_system7->connect(button_system7,SIGNAL(fireAction()),accountView,SLOT(system()));
       accountView->dateScene.addItem(button_system7);

       DButton *button_pow7 = new DButton;
       button_pow7->setPos(-130,-330 + 14*45);
       button_pow7->setHoverEnableFlag(true);
       button_pow7->boundImageToPress(pressIcon[14]);
       button_pow7->boundImageToRelease(releaseIcon[14]);
       button_pow7->boundImageToHover(hoverIcon[14]);
       button_pow7->setBounds(-20,-20,40,40);
       button_pow7->connect(button_pow7,SIGNAL(fireAction()),accountView,SLOT(pow()));
       accountView->dateScene.addItem(button_pow7);


       //侧边栏电源管理界面
      DButton *button_home8 = new DButton;
      button_home8->setPos(-130,-330 + 0*45);
      button_home8->setHoverEnableFlag(true);
      button_home8->boundImageToPress(pressIcon[13]);
      button_home8->boundImageToRelease(releaseIcon[13]);
      button_home8->boundImageToHover(hoverIcon[13]);
      button_home8->setBounds(-20,-20,40,40);
      button_home8->connect(button_home8,SIGNAL(fireAction()),accountView,SLOT(home()));
      accountView->powerScene.addItem(button_home8);


      DButton *button_account8 = new DButton;
      button_account8->setPos(-130,-330 + 1*45);
      button_account8->setHoverEnableFlag(true);
      button_account8->boundImageToPress(pressIcon[0]);
      button_account8->boundImageToRelease(releaseIcon[0]);
      button_account8->boundImageToHover(hoverIcon[0]);
      button_account8->setBounds(-20,-20,40,40);
      button_account8->connect(button_account8,SIGNAL(fireAction()),accountView,SLOT(account()));
      accountView->powerScene.addItem(button_account8);

      DButton *button_display8 = new DButton;
      button_display8->setPos(-130,-330 + 2*45);
      button_display8->setHoverEnableFlag(true);
      button_display8->boundImageToPress(pressIcon[1]);
      button_display8->boundImageToRelease(releaseIcon[1]);
      button_display8->boundImageToHover(hoverIcon[1]);
      button_display8->setBounds(-20,-20,40,40);
      button_display8->connect(button_display8,SIGNAL(fireAction()),accountView,SLOT(display()));
      accountView->powerScene.addItem(button_display8);

      DButton *button_default8 = new DButton;
      button_default8->setPos(-130,-330 + 3*45);
      button_default8->setHoverEnableFlag(true);
      button_default8->boundImageToPress(pressIcon[2]);
      button_default8->boundImageToRelease(releaseIcon[2]);
      button_default8->boundImageToHover(hoverIcon[2]);
      button_default8->setBounds(-20,-20,40,40);
      button_default8->connect(button_default8,SIGNAL(fireAction()),accountView,SLOT(default1()));
      accountView->powerScene.addItem(button_default8);

      DButton *button_personalization8 = new DButton;
      button_personalization8->setPos(-130,-330 + 4*45);
      button_personalization8->setHoverEnableFlag(true);
      button_personalization8->boundImageToPress(pressIcon[3]);
      button_personalization8->boundImageToRelease(releaseIcon[3]);
      button_personalization8->boundImageToHover(hoverIcon[3]);
      button_personalization8->setBounds(-20,-20,40,40);
      button_personalization8->connect(button_personalization8,SIGNAL(fireAction()),accountView,SLOT(personalization()));
      accountView->powerScene.addItem(button_personalization8);

      DButton *button_network8 = new DButton;
      button_network8->setPos(-130,-330 + 5*45);
      button_network8->setHoverEnableFlag(true);
      button_network8->boundImageToPress(pressIcon[4]);
      button_network8->boundImageToRelease(releaseIcon[4]);
      button_network8->boundImageToHover(hoverIcon[4]);
      button_network8->setBounds(-20,-20,40,40);
      button_network8->connect(button_network8,SIGNAL(fireAction()),accountView,SLOT(network()));
      accountView->powerScene.addItem(button_network8);

      DButton *button_sound8 = new DButton;
      button_sound8->setPos(-130,-330 + 6*45);
      button_sound8->setHoverEnableFlag(true);
      button_sound8->boundImageToPress(pressIcon[5]);
      button_sound8->boundImageToRelease(releaseIcon[5]);
      button_sound8->boundImageToHover(hoverIcon[5]);
      button_sound8->setBounds(-20,-20,40,40);
      button_sound8->connect(button_sound8,SIGNAL(fireAction()),accountView,SLOT(sound()));
      accountView->powerScene.addItem(button_sound8);

      DButton *button_date8 = new DButton;
      button_date8->setPos(-130,-330 + 7*45);
      button_date8->setHoverEnableFlag(true);
      button_date8->boundImageToPress(pressIcon[6]);
      button_date8->boundImageToRelease(releaseIcon[6]);
      button_date8->boundImageToHover(hoverIcon[6]);
      button_date8->setBounds(-20,-20,40,40);
      button_date8->connect(button_date8,SIGNAL(fireAction()),accountView,SLOT(date()));
      accountView->powerScene.addItem(button_date8);

      DButton *button_power8 = new DButton;
      button_power8->setPos(-130,-330 + 8*45);
      button_power8->setHoverEnableFlag(true);
      button_power8->boundImageToPress(pressIcon[7]);
      button_power8->boundImageToRelease(releaseIcon[7]);
      button_power8->boundImageToHover(hoverIcon[7]);
      button_power8->setBounds(-20,-20,40,40);
      button_power8->connect(button_power8,SIGNAL(fireAction()),accountView,SLOT(power()));
      accountView->powerScene.addItem(button_power8);

      DButton *button_mouse8 = new DButton;
      button_mouse8->setPos(-130,-330 + 9*45);
      button_mouse8->setHoverEnableFlag(true);
      button_mouse8->boundImageToPress(pressIcon[8]);
      button_mouse8->boundImageToRelease(releaseIcon[8]);
      button_mouse8->boundImageToHover(hoverIcon[8]);
      button_mouse8->setBounds(-20,-20,40,40);
      button_mouse8->connect(button_mouse8,SIGNAL(fireAction()),accountView,SLOT(mouse()));
      accountView->powerScene.addItem(button_mouse8);

      DButton *button_keyboard8 = new DButton;
      button_keyboard8->setPos(-130,-330 + 10*45);
      button_keyboard8->setHoverEnableFlag(true);
      button_keyboard8->boundImageToPress(pressIcon[9]);
      button_keyboard8->boundImageToRelease(releaseIcon[9]);
      button_keyboard8->boundImageToHover(hoverIcon[9]);
      button_keyboard8->setBounds(-20,-20,40,40);
      button_keyboard8->connect(button_keyboard8,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
      accountView->powerScene.addItem(button_keyboard8);

      DButton *button_shortcuts8 = new DButton;
      button_shortcuts8->setPos(-130,-330 + 11*45);
      button_shortcuts8->setHoverEnableFlag(true);
      button_shortcuts8->boundImageToPress(pressIcon[10]);
      button_shortcuts8->boundImageToRelease(releaseIcon[10]);
      button_shortcuts8->boundImageToHover(hoverIcon[10]);
      button_shortcuts8->setBounds(-20,-20,40,40);
      button_shortcuts8->connect(button_shortcuts8,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
      accountView->powerScene.addItem(button_shortcuts8);

      DButton *button_menu8 = new DButton;
      button_menu8->setPos(-130,-330 + 12*45);
      button_menu8->setHoverEnableFlag(true);
      button_menu8->boundImageToPress(pressIcon[11]);
      button_menu8->boundImageToRelease(releaseIcon[11]);
      button_menu8->boundImageToHover(hoverIcon[11]);
      button_menu8->setBounds(-20,-20,40,40);
      button_menu8->connect(button_menu8,SIGNAL(fireAction()),accountView,SLOT(menu()));
      accountView->powerScene.addItem(button_menu8);

      DButton *button_system8 = new DButton;
      button_system8->setPos(-130,-330 + 13*45);
      button_system8->setHoverEnableFlag(true);
      button_system8->boundImageToPress(pressIcon[12]);
      button_system8->boundImageToRelease(releaseIcon[12]);
      button_system8->boundImageToHover(hoverIcon[12]);
      button_system8->setBounds(-20,-20,40,40);
      button_system8->connect(button_system8,SIGNAL(fireAction()),accountView,SLOT(system()));
      accountView->powerScene.addItem(button_system8);

      DButton *button_pow8 = new DButton;
      button_pow8->setPos(-130,-330 + 14*45);
      button_pow8->setHoverEnableFlag(true);
      button_pow8->boundImageToPress(pressIcon[14]);
      button_pow8->boundImageToRelease(releaseIcon[14]);
      button_pow8->boundImageToHover(hoverIcon[14]);
      button_pow8->setBounds(-20,-20,40,40);
      button_pow8->connect(button_pow8,SIGNAL(fireAction()),accountView,SLOT(pow()));
      accountView->powerScene.addItem(button_pow8);



      //侧边栏鼠标界面
      DButton *button_home9 = new DButton;
      button_home9->setPos(-130,-330 + 0*45);
      button_home9->setHoverEnableFlag(true);
      button_home9->boundImageToPress(pressIcon[13]);
      button_home9->boundImageToRelease(releaseIcon[13]);
      button_home9->boundImageToHover(hoverIcon[13]);
      button_home9->setBounds(-20,-20,40,40);
      button_home9->connect(button_home9,SIGNAL(fireAction()),accountView,SLOT(home()));
      accountView->mouseScene.addItem(button_home9);


      DButton *button_account9 = new DButton;
      button_account9->setPos(-130,-330 + 1*45);
      button_account9->setHoverEnableFlag(true);
      button_account9->boundImageToPress(pressIcon[0]);
      button_account9->boundImageToRelease(releaseIcon[0]);
      button_account9->boundImageToHover(hoverIcon[0]);
      button_account9->setBounds(-20,-20,40,40);
      button_account9->connect(button_account9,SIGNAL(fireAction()),accountView,SLOT(account()));
      accountView->mouseScene.addItem(button_account9);

      DButton *button_display9 = new DButton;
      button_display9->setPos(-130,-330 + 2*45);
      button_display9->setHoverEnableFlag(true);
      button_display9->boundImageToPress(pressIcon[1]);
      button_display9->boundImageToRelease(releaseIcon[1]);
      button_display9->boundImageToHover(hoverIcon[1]);
      button_display9->setBounds(-20,-20,40,40);
      button_display9->connect(button_display9,SIGNAL(fireAction()),accountView,SLOT(display()));
      accountView->mouseScene.addItem(button_display9);

      DButton *button_default9 = new DButton;
      button_default9->setPos(-130,-330 + 3*45);
      button_default9->setHoverEnableFlag(true);
      button_default9->boundImageToPress(pressIcon[2]);
      button_default9->boundImageToRelease(releaseIcon[2]);
      button_default9->boundImageToHover(hoverIcon[2]);
      button_default9->setBounds(-20,-20,40,40);
      button_default9->connect(button_default9,SIGNAL(fireAction()),accountView,SLOT(default1()));
      accountView->mouseScene.addItem(button_default9);

      DButton *button_personalization9 = new DButton;
      button_personalization9->setPos(-130,-330 + 4*45);
      button_personalization9->setHoverEnableFlag(true);
      button_personalization9->boundImageToPress(pressIcon[3]);
      button_personalization9->boundImageToRelease(releaseIcon[3]);
      button_personalization9->boundImageToHover(hoverIcon[3]);
      button_personalization9->setBounds(-20,-20,40,40);
      button_personalization9->connect(button_personalization9,SIGNAL(fireAction()),accountView,SLOT(personalization()));
      accountView->mouseScene.addItem(button_personalization9);

      DButton *button_network9 = new DButton;
      button_network9->setPos(-130,-330 + 5*45);
      button_network9->setHoverEnableFlag(true);
      button_network9->boundImageToPress(pressIcon[4]);
      button_network9->boundImageToRelease(releaseIcon[4]);
      button_network9->boundImageToHover(hoverIcon[4]);
      button_network9->setBounds(-20,-20,40,40);
      button_network9->connect(button_network9,SIGNAL(fireAction()),accountView,SLOT(network()));
      accountView->mouseScene.addItem(button_network9);

      DButton *button_sound9 = new DButton;
      button_sound9->setPos(-130,-330 + 6*45);
      button_sound9->setHoverEnableFlag(true);
      button_sound9->boundImageToPress(pressIcon[5]);
      button_sound9->boundImageToRelease(releaseIcon[5]);
      button_sound9->boundImageToHover(hoverIcon[5]);
      button_sound9->setBounds(-20,-20,40,40);
      button_sound9->connect(button_sound9,SIGNAL(fireAction()),accountView,SLOT(sound()));
      accountView->mouseScene.addItem(button_sound9);

      DButton *button_date9 = new DButton;
      button_date9->setPos(-130,-330 + 7*45);
      button_date9->setHoverEnableFlag(true);
      button_date9->boundImageToPress(pressIcon[6]);
      button_date9->boundImageToRelease(releaseIcon[6]);
      button_date9->boundImageToHover(hoverIcon[6]);
      button_date9->setBounds(-20,-20,40,40);
      button_date9->connect(button_date9,SIGNAL(fireAction()),accountView,SLOT(date()));
      accountView->mouseScene.addItem(button_date9);

      DButton *button_power9 = new DButton;
      button_power9->setPos(-130,-330 + 8*45);
      button_power9->setHoverEnableFlag(true);
      button_power9->boundImageToPress(pressIcon[7]);
      button_power9->boundImageToRelease(releaseIcon[7]);
      button_power9->boundImageToHover(hoverIcon[7]);
      button_power9->setBounds(-20,-20,40,40);
      button_power9->connect(button_power9,SIGNAL(fireAction()),accountView,SLOT(power()));
      accountView->mouseScene.addItem(button_power9);

      DButton *button_mouse9 = new DButton;
      button_mouse9->setPos(-130,-330 + 9*45);
      button_mouse9->setHoverEnableFlag(true);
      button_mouse9->boundImageToPress(pressIcon[8]);
      button_mouse9->boundImageToRelease(releaseIcon[8]);
      button_mouse9->boundImageToHover(hoverIcon[8]);
      button_mouse9->setBounds(-20,-20,40,40);
      button_mouse9->connect(button_mouse9,SIGNAL(fireAction()),accountView,SLOT(mouse()));
      accountView->mouseScene.addItem(button_mouse9);

      DButton *button_keyboard9 = new DButton;
      button_keyboard9->setPos(-130,-330 + 10*45);
      button_keyboard9->setHoverEnableFlag(true);
      button_keyboard9->boundImageToPress(pressIcon[9]);
      button_keyboard9->boundImageToRelease(releaseIcon[9]);
      button_keyboard9->boundImageToHover(hoverIcon[9]);
      button_keyboard9->setBounds(-20,-20,40,40);
      button_keyboard9->connect(button_keyboard9,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
      accountView->mouseScene.addItem(button_keyboard9);

      DButton *button_shortcuts9 = new DButton;
      button_shortcuts9->setPos(-130,-330 + 11*45);
      button_shortcuts9->setHoverEnableFlag(true);
      button_shortcuts9->boundImageToPress(pressIcon[10]);
      button_shortcuts9->boundImageToRelease(releaseIcon[10]);
      button_shortcuts9->boundImageToHover(hoverIcon[10]);
      button_shortcuts9->setBounds(-20,-20,40,40);
      button_shortcuts9->connect(button_shortcuts9,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
      accountView->mouseScene.addItem(button_shortcuts9);

      DButton *button_menu9 = new DButton;
      button_menu9->setPos(-130,-330 + 12*45);
      button_menu9->setHoverEnableFlag(true);
      button_menu9->boundImageToPress(pressIcon[11]);
      button_menu9->boundImageToRelease(releaseIcon[11]);
      button_menu9->boundImageToHover(hoverIcon[11]);
      button_menu9->setBounds(-20,-20,40,40);
      button_menu9->connect(button_menu9,SIGNAL(fireAction()),accountView,SLOT(menu()));
      accountView->mouseScene.addItem(button_menu9);

      DButton *button_system9 = new DButton;
      button_system9->setPos(-130,-330 + 13*45);
      button_system9->setHoverEnableFlag(true);
      button_system9->boundImageToPress(pressIcon[12]);
      button_system9->boundImageToRelease(releaseIcon[12]);
      button_system9->boundImageToHover(hoverIcon[12]);
      button_system9->setBounds(-20,-20,40,40);
      button_system9->connect(button_system9,SIGNAL(fireAction()),accountView,SLOT(system()));
      accountView->mouseScene.addItem(button_system9);

      DButton *button_pow9 = new DButton;
      button_pow9->setPos(-130,-330 + 14*45);
      button_pow9->setHoverEnableFlag(true);
      button_pow9->boundImageToPress(pressIcon[14]);
      button_pow9->boundImageToRelease(releaseIcon[14]);
      button_pow9->boundImageToHover(hoverIcon[14]);
      button_pow9->setBounds(-20,-20,40,40);
      button_pow9->connect(button_pow9,SIGNAL(fireAction()),accountView,SLOT(pow()));
      accountView->mouseScene.addItem(button_pow9);

      //侧边栏键盘和语言界面
     DButton *button_home10 = new DButton;
     button_home10->setPos(-130,-330 + 0*45);
     button_home10->setHoverEnableFlag(true);
     button_home10->boundImageToPress(pressIcon[13]);
     button_home10->boundImageToRelease(releaseIcon[13]);
     button_home10->boundImageToHover(hoverIcon[13]);
     button_home10->setBounds(-20,-20,40,40);
     button_home10->connect(button_home10,SIGNAL(fireAction()),accountView,SLOT(home()));
     accountView->keyboardScene.addItem(button_home10);


     DButton *button_account10 = new DButton;
     button_account10->setPos(-130,-330 + 1*45);
     button_account10->setHoverEnableFlag(true);
     button_account10->boundImageToPress(pressIcon[0]);
     button_account10->boundImageToRelease(releaseIcon[0]);
     button_account10->boundImageToHover(hoverIcon[0]);
     button_account10->setBounds(-20,-20,40,40);
     button_account10->connect(button_account8,SIGNAL(fireAction()),accountView,SLOT(account()));
     accountView->keyboardScene.addItem(button_account10);

     DButton *button_display10 = new DButton;
     button_display10->setPos(-130,-330 + 2*45);
     button_display10->setHoverEnableFlag(true);
     button_display10->boundImageToPress(pressIcon[1]);
     button_display10->boundImageToRelease(releaseIcon[1]);
     button_display10->boundImageToHover(hoverIcon[1]);
     button_display10->setBounds(-20,-20,40,40);
     button_display10->connect(button_display10,SIGNAL(fireAction()),accountView,SLOT(display()));
     accountView->keyboardScene.addItem(button_display10);

     DButton *button_default10 = new DButton;
     button_default10->setPos(-130,-330 + 3*45);
     button_default10->setHoverEnableFlag(true);
     button_default10->boundImageToPress(pressIcon[2]);
     button_default10->boundImageToRelease(releaseIcon[2]);
     button_default10->boundImageToHover(hoverIcon[2]);
     button_default10->setBounds(-20,-20,40,40);
     button_default10->connect(button_default10,SIGNAL(fireAction()),accountView,SLOT(default1()));
     accountView->keyboardScene.addItem(button_default10);

     DButton *button_personalization10 = new DButton;
     button_personalization10->setPos(-130,-330 + 4*45);
     button_personalization10->setHoverEnableFlag(true);
     button_personalization10->boundImageToPress(pressIcon[3]);
     button_personalization10->boundImageToRelease(releaseIcon[3]);
     button_personalization10->boundImageToHover(hoverIcon[3]);
     button_personalization10->setBounds(-20,-20,40,40);
     button_personalization10->connect(button_personalization10,SIGNAL(fireAction()),accountView,SLOT(personalization()));
     accountView->keyboardScene.addItem(button_personalization10);

     DButton *button_network10 = new DButton;
     button_network10->setPos(-130,-330 + 5*45);
     button_network10->setHoverEnableFlag(true);
     button_network10->boundImageToPress(pressIcon[4]);
     button_network10->boundImageToRelease(releaseIcon[4]);
     button_network10->boundImageToHover(hoverIcon[4]);
     button_network10->setBounds(-20,-20,40,40);
     button_network10->connect(button_network10,SIGNAL(fireAction()),accountView,SLOT(network()));
     accountView->keyboardScene.addItem(button_network10);

     DButton *button_sound10 = new DButton;
     button_sound10->setPos(-130,-330 + 6*45);
     button_sound10->setHoverEnableFlag(true);
     button_sound10->boundImageToPress(pressIcon[5]);
     button_sound10->boundImageToRelease(releaseIcon[5]);
     button_sound10->boundImageToHover(hoverIcon[5]);
     button_sound10->setBounds(-20,-20,40,40);
     button_sound10->connect(button_sound8,SIGNAL(fireAction()),accountView,SLOT(sound()));
     accountView->keyboardScene.addItem(button_sound10);

     DButton *button_date10 = new DButton;
     button_date10->setPos(-130,-330 + 7*45);
     button_date10->setHoverEnableFlag(true);
     button_date10->boundImageToPress(pressIcon[6]);
     button_date10->boundImageToRelease(releaseIcon[6]);
     button_date10->boundImageToHover(hoverIcon[6]);
     button_date10->setBounds(-20,-20,40,40);
     button_date10->connect(button_date10,SIGNAL(fireAction()),accountView,SLOT(date()));
     accountView->keyboardScene.addItem(button_date10);

     DButton *button_power10 = new DButton;
     button_power10->setPos(-130,-330 + 8*45);
     button_power10->setHoverEnableFlag(true);
     button_power10->boundImageToPress(pressIcon[7]);
     button_power10->boundImageToRelease(releaseIcon[7]);
     button_power10->boundImageToHover(hoverIcon[7]);
     button_power10->setBounds(-20,-20,40,40);
     button_power10->connect(button_power10,SIGNAL(fireAction()),accountView,SLOT(power()));
     accountView->keyboardScene.addItem(button_power10);

     DButton *button_mouse10 = new DButton;
     button_mouse10->setPos(-130,-330 + 9*45);
     button_mouse10->setHoverEnableFlag(true);
     button_mouse10->boundImageToPress(pressIcon[8]);
     button_mouse10->boundImageToRelease(releaseIcon[8]);
     button_mouse10->boundImageToHover(hoverIcon[8]);
     button_mouse10->setBounds(-20,-20,40,40);
     button_mouse10->connect(button_mouse10,SIGNAL(fireAction()),accountView,SLOT(mouse()));
     accountView->keyboardScene.addItem(button_mouse10);

     DButton *button_keyboard10 = new DButton;
     button_keyboard10->setPos(-130,-330 + 10*45);
     button_keyboard10->setHoverEnableFlag(true);
     button_keyboard10->boundImageToPress(pressIcon[9]);
     button_keyboard10->boundImageToRelease(releaseIcon[9]);
     button_keyboard10->boundImageToHover(hoverIcon[9]);
     button_keyboard10->setBounds(-20,-20,40,40);
     button_keyboard10->connect(button_keyboard10,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
     accountView->keyboardScene.addItem(button_keyboard10);

     DButton *button_shortcuts10 = new DButton;
     button_shortcuts10->setPos(-130,-330 + 11*45);
     button_shortcuts10->setHoverEnableFlag(true);
     button_shortcuts10->boundImageToPress(pressIcon[10]);
     button_shortcuts10->boundImageToRelease(releaseIcon[10]);
     button_shortcuts10->boundImageToHover(hoverIcon[10]);
     button_shortcuts10->setBounds(-20,-20,40,40);
     button_shortcuts10->connect(button_shortcuts10,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
     accountView->keyboardScene.addItem(button_shortcuts10);

     DButton *button_menu10 = new DButton;
     button_menu10->setPos(-130,-330 + 12*45);
     button_menu10->setHoverEnableFlag(true);
     button_menu10->boundImageToPress(pressIcon[11]);
     button_menu10->boundImageToRelease(releaseIcon[11]);
     button_menu10->boundImageToHover(hoverIcon[11]);
     button_menu10->setBounds(-20,-20,40,40);
     button_menu10->connect(button_menu10,SIGNAL(fireAction()),accountView,SLOT(menu()));
     accountView->keyboardScene.addItem(button_menu10);

     DButton *button_system10 = new DButton;
     button_system10->setPos(-130,-330 + 13*45);
     button_system10->setHoverEnableFlag(true);
     button_system10->boundImageToPress(pressIcon[12]);
     button_system10->boundImageToRelease(releaseIcon[12]);
     button_system10->boundImageToHover(hoverIcon[12]);
     button_system10->setBounds(-20,-20,40,40);
     button_system10->connect(button_system10,SIGNAL(fireAction()),accountView,SLOT(system()));
     accountView->keyboardScene.addItem(button_system10);

     DButton *button_pow10 = new DButton;
     button_pow10->setPos(-130,-330 + 14*45);
     button_pow10->setHoverEnableFlag(true);
     button_pow10->boundImageToPress(pressIcon[14]);
     button_pow10->boundImageToRelease(releaseIcon[14]);
     button_pow10->boundImageToHover(hoverIcon[14]);
     button_pow10->setBounds(-20,-20,40,40);
     button_pow10->connect(button_pow10,SIGNAL(fireAction()),accountView,SLOT(pow()));
     accountView->keyboardScene.addItem(button_pow10);

     //侧边栏快捷键界面
     DButton *button_home11 = new DButton;
     button_home11->setPos(-130,-330 + 0*45);
     button_home11->setHoverEnableFlag(true);
     button_home11->boundImageToPress(pressIcon[13]);
     button_home11->boundImageToRelease(releaseIcon[13]);
     button_home11->boundImageToHover(hoverIcon[13]);
     button_home11->setBounds(-20,-20,40,40);
     button_home11->connect(button_home11,SIGNAL(fireAction()),accountView,SLOT(home()));
     accountView->shortcutsScene.addItem(button_home11);


     DButton *button_account11 = new DButton;
     button_account11->setPos(-130,-330 + 1*45);
     button_account11->setHoverEnableFlag(true);
     button_account11->boundImageToPress(pressIcon[0]);
     button_account11->boundImageToRelease(releaseIcon[0]);
     button_account11->boundImageToHover(hoverIcon[0]);
     button_account11->setBounds(-20,-20,40,40);
     button_account11->connect(button_account11,SIGNAL(fireAction()),accountView,SLOT(account()));
     accountView->shortcutsScene.addItem(button_account11);

     DButton *button_display11 = new DButton;
     button_display11->setPos(-130,-330 + 2*45);
     button_display11->setHoverEnableFlag(true);
     button_display11->boundImageToPress(pressIcon[1]);
     button_display11->boundImageToRelease(releaseIcon[1]);
     button_display11->boundImageToHover(hoverIcon[1]);
     button_display11->setBounds(-20,-20,40,40);
     button_display11->connect(button_display11,SIGNAL(fireAction()),accountView,SLOT(display()));
     accountView->shortcutsScene.addItem(button_display11);

     DButton *button_default11 = new DButton;
     button_default11->setPos(-130,-330 + 3*45);
     button_default11->setHoverEnableFlag(true);
     button_default11->boundImageToPress(pressIcon[2]);
     button_default11->boundImageToRelease(releaseIcon[2]);
     button_default11->boundImageToHover(hoverIcon[2]);
     button_default11->setBounds(-20,-20,40,40);
     button_default11->connect(button_default11,SIGNAL(fireAction()),accountView,SLOT(default1()));
     accountView->shortcutsScene.addItem(button_default11);

     DButton *button_personalization11 = new DButton;
     button_personalization11->setPos(-130,-330 + 4*45);
     button_personalization11->setHoverEnableFlag(true);
     button_personalization11->boundImageToPress(pressIcon[3]);
     button_personalization11->boundImageToRelease(releaseIcon[3]);
     button_personalization11->boundImageToHover(hoverIcon[3]);
     button_personalization11->setBounds(-20,-20,40,40);
     button_personalization11->connect(button_personalization11,SIGNAL(fireAction()),accountView,SLOT(personalization()));
     accountView->shortcutsScene.addItem(button_personalization11);

     DButton *button_network11 = new DButton;
     button_network11->setPos(-130,-330 + 5*45);
     button_network11->setHoverEnableFlag(true);
     button_network11->boundImageToPress(pressIcon[4]);
     button_network11->boundImageToRelease(releaseIcon[4]);
     button_network11->boundImageToHover(hoverIcon[4]);
     button_network11->setBounds(-20,-20,40,40);
     button_network11->connect(button_network11,SIGNAL(fireAction()),accountView,SLOT(network()));
     accountView->shortcutsScene.addItem(button_network11);

     DButton *button_sound11 = new DButton;
     button_sound11->setPos(-130,-330 + 6*45);
     button_sound11->setHoverEnableFlag(true);
     button_sound11->boundImageToPress(pressIcon[5]);
     button_sound11->boundImageToRelease(releaseIcon[5]);
     button_sound11->boundImageToHover(hoverIcon[5]);
     button_sound11->setBounds(-20,-20,40,40);
     button_sound11->connect(button_sound11,SIGNAL(fireAction()),accountView,SLOT(sound()));
     accountView->shortcutsScene.addItem(button_sound11);

     DButton *button_date11= new DButton;
     button_date11->setPos(-130,-330 + 7*45);
     button_date11->setHoverEnableFlag(true);
     button_date11->boundImageToPress(pressIcon[6]);
     button_date11->boundImageToRelease(releaseIcon[6]);
     button_date11->boundImageToHover(hoverIcon[6]);
     button_date11->setBounds(-20,-20,40,40);
     button_date11->connect(button_date11,SIGNAL(fireAction()),accountView,SLOT(date()));
     accountView->shortcutsScene.addItem(button_date11);

     DButton *button_power11 = new DButton;
     button_power11->setPos(-130,-330 + 8*45);
     button_power11->setHoverEnableFlag(true);
     button_power11->boundImageToPress(pressIcon[7]);
     button_power11->boundImageToRelease(releaseIcon[7]);
     button_power11->boundImageToHover(hoverIcon[7]);
     button_power11->setBounds(-20,-20,40,40);
     button_power11->connect(button_power11,SIGNAL(fireAction()),accountView,SLOT(power()));
     accountView->shortcutsScene.addItem(button_power11);

     DButton *button_mouse11 = new DButton;
     button_mouse11->setPos(-130,-330 + 9*45);
     button_mouse11->setHoverEnableFlag(true);
     button_mouse11->boundImageToPress(pressIcon[8]);
     button_mouse11->boundImageToRelease(releaseIcon[8]);
     button_mouse11->boundImageToHover(hoverIcon[8]);
     button_mouse11->setBounds(-20,-20,40,40);
     button_mouse11->connect(button_mouse11,SIGNAL(fireAction()),accountView,SLOT(mouse()));
     accountView->shortcutsScene.addItem(button_mouse11);

     DButton *button_keyboard11 = new DButton;
     button_keyboard11->setPos(-130,-330 + 10*45);
     button_keyboard11->setHoverEnableFlag(true);
     button_keyboard11->boundImageToPress(pressIcon[9]);
     button_keyboard11->boundImageToRelease(releaseIcon[9]);
     button_keyboard11->boundImageToHover(hoverIcon[9]);
     button_keyboard11->setBounds(-20,-20,40,40);
     button_keyboard11->connect(button_keyboard11,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
     accountView->shortcutsScene.addItem(button_keyboard11);

     DButton *button_shortcuts11 = new DButton;
     button_shortcuts11->setPos(-130,-330 + 11*45);
     button_shortcuts11->setHoverEnableFlag(true);
     button_shortcuts11->boundImageToPress(pressIcon[10]);
     button_shortcuts11->boundImageToRelease(releaseIcon[10]);
     button_shortcuts11->boundImageToHover(hoverIcon[10]);
     button_shortcuts11->setBounds(-20,-20,40,40);
     button_shortcuts11->connect(button_shortcuts11,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
     accountView->shortcutsScene.addItem(button_shortcuts11);

     DButton *button_menu11 = new DButton;
     button_menu11->setPos(-130,-330 + 12*45);
     button_menu11->setHoverEnableFlag(true);
     button_menu11->boundImageToPress(pressIcon[11]);
     button_menu11->boundImageToRelease(releaseIcon[11]);
     button_menu11->boundImageToHover(hoverIcon[11]);
     button_menu11->setBounds(-20,-20,40,40);
     button_menu11->connect(button_menu11,SIGNAL(fireAction()),accountView,SLOT(menu()));
     accountView->shortcutsScene.addItem(button_menu11);

     DButton *button_system11 = new DButton;
     button_system11->setPos(-130,-330 + 13*45);
     button_system11->setHoverEnableFlag(true);
     button_system11->boundImageToPress(pressIcon[12]);
     button_system11->boundImageToRelease(releaseIcon[12]);
     button_system11->boundImageToHover(hoverIcon[12]);
     button_system11->setBounds(-20,-20,40,40);
     button_system11->connect(button_system11,SIGNAL(fireAction()),accountView,SLOT(system()));
     accountView->shortcutsScene.addItem(button_system11);

     DButton *button_pow11 = new DButton;
     button_pow11->setPos(-130,-330 + 14*45);
     button_pow11->setHoverEnableFlag(true);
     button_pow11->boundImageToPress(pressIcon[14]);
     button_pow11->boundImageToRelease(releaseIcon[14]);
     button_pow11->boundImageToHover(hoverIcon[14]);
     button_pow11->setBounds(-20,-20,40,40);
     button_pow11->connect(button_pow11,SIGNAL(fireAction()),accountView,SLOT(pow()));
     accountView->shortcutsScene.addItem(button_pow11);


     //侧边栏启动界面
         DButton *button_home12 = new DButton;
         button_home12->setPos(-130,-330 + 0*45);
         button_home12->setHoverEnableFlag(true);
         button_home12->boundImageToPress(pressIcon[13]);
         button_home12->boundImageToRelease(releaseIcon[13]);
         button_home12->boundImageToHover(hoverIcon[13]);
         button_home12->setBounds(-20,-20,40,40);
         button_home12->connect(button_home12,SIGNAL(fireAction()),accountView,SLOT(home()));
         accountView->menuScene.addItem(button_home12);


         DButton *button_account12 = new DButton;
         button_account12->setPos(-130,-330 + 1*45);
         button_account12->setHoverEnableFlag(true);
         button_account12->boundImageToPress(pressIcon[0]);
         button_account12->boundImageToRelease(releaseIcon[0]);
         button_account12->boundImageToHover(hoverIcon[0]);
         button_account12->setBounds(-20,-20,40,40);
         button_account12->connect(button_account12,SIGNAL(fireAction()),accountView,SLOT(account()));
         accountView->menuScene.addItem(button_account12);

         DButton *button_display12 = new DButton;
         button_display12->setPos(-130,-330 + 2*45);
         button_display12->setHoverEnableFlag(true);
         button_display12->boundImageToPress(pressIcon[1]);
         button_display12->boundImageToRelease(releaseIcon[1]);
         button_display12->boundImageToHover(hoverIcon[1]);
         button_display12->setBounds(-20,-20,40,40);
         button_display12->connect(button_display12,SIGNAL(fireAction()),accountView,SLOT(display()));
         accountView->menuScene.addItem(button_display12);

         DButton *button_default12 = new DButton;
         button_default12->setPos(-130,-330 + 3*45);
         button_default12->setHoverEnableFlag(true);
         button_default12->boundImageToPress(pressIcon[2]);
         button_default12->boundImageToRelease(releaseIcon[2]);
         button_default12->boundImageToHover(hoverIcon[2]);
         button_default12->setBounds(-20,-20,40,40);
         button_default12->connect(button_default12,SIGNAL(fireAction()),accountView,SLOT(default1()));
         accountView->menuScene.addItem(button_default12);

         DButton *button_personalization12 = new DButton;
         button_personalization12->setPos(-130,-330 + 4*45);
         button_personalization12->setHoverEnableFlag(true);
         button_personalization12->boundImageToPress(pressIcon[3]);
         button_personalization12->boundImageToRelease(releaseIcon[3]);
         button_personalization12->boundImageToHover(hoverIcon[3]);
         button_personalization12->setBounds(-20,-20,40,40);
         button_personalization12->connect(button_personalization12,SIGNAL(fireAction()),accountView,SLOT(personalization()));
         accountView->menuScene.addItem(button_personalization12);

         DButton *button_network12 = new DButton;
         button_network12->setPos(-130,-330 + 5*45);
         button_network12->setHoverEnableFlag(true);
         button_network12->boundImageToPress(pressIcon[4]);
         button_network12->boundImageToRelease(releaseIcon[4]);
         button_network12->boundImageToHover(hoverIcon[4]);
         button_network12->setBounds(-20,-20,40,40);
         button_network12->connect(button_network12,SIGNAL(fireAction()),accountView,SLOT(network()));
         accountView->menuScene.addItem(button_network12);

         DButton *button_sound12 = new DButton;
         button_sound12->setPos(-130,-330 + 6*45);
         button_sound12->setHoverEnableFlag(true);
         button_sound12->boundImageToPress(pressIcon[5]);
         button_sound12->boundImageToRelease(releaseIcon[5]);
         button_sound12->boundImageToHover(hoverIcon[5]);
         button_sound12->setBounds(-20,-20,40,40);
         button_sound12->connect(button_sound12,SIGNAL(fireAction()),accountView,SLOT(sound()));
         accountView->menuScene.addItem(button_sound12);

         DButton *button_date12= new DButton;
         button_date12->setPos(-130,-330 + 7*45);
         button_date12->setHoverEnableFlag(true);
         button_date12->boundImageToPress(pressIcon[6]);
         button_date12->boundImageToRelease(releaseIcon[6]);
         button_date12->boundImageToHover(hoverIcon[6]);
         button_date12->setBounds(-20,-20,40,40);
         button_date12->connect(button_date12,SIGNAL(fireAction()),accountView,SLOT(date()));
         accountView->menuScene.addItem(button_date12);

         DButton *button_power12 = new DButton;
         button_power12->setPos(-130,-330 + 8*45);
         button_power12->setHoverEnableFlag(true);
         button_power12->boundImageToPress(pressIcon[7]);
         button_power12->boundImageToRelease(releaseIcon[7]);
         button_power12->boundImageToHover(hoverIcon[7]);
         button_power12->setBounds(-20,-20,40,40);
         button_power12->connect(button_power12,SIGNAL(fireAction()),accountView,SLOT(power()));
         accountView->menuScene.addItem(button_power12);

         DButton *button_mouse12 = new DButton;
         button_mouse12->setPos(-130,-330 + 9*45);
         button_mouse12->setHoverEnableFlag(true);
         button_mouse12->boundImageToPress(pressIcon[8]);
         button_mouse12->boundImageToRelease(releaseIcon[8]);
         button_mouse12->boundImageToHover(hoverIcon[8]);
         button_mouse12->setBounds(-20,-20,40,40);
         button_mouse12->connect(button_mouse12,SIGNAL(fireAction()),accountView,SLOT(mouse()));
         accountView->menuScene.addItem(button_mouse12);

         DButton *button_keyboard12 = new DButton;
         button_keyboard12->setPos(-130,-330 + 10*45);
         button_keyboard12->setHoverEnableFlag(true);
         button_keyboard12->boundImageToPress(pressIcon[9]);
         button_keyboard12->boundImageToRelease(releaseIcon[9]);
         button_keyboard12->boundImageToHover(hoverIcon[9]);
         button_keyboard12->setBounds(-20,-20,40,40);
         button_keyboard12->connect(button_keyboard12,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
         accountView->menuScene.addItem(button_keyboard12);

         DButton *button_shortcuts12 = new DButton;
         button_shortcuts12->setPos(-130,-330 + 11*45);
         button_shortcuts12->setHoverEnableFlag(true);
         button_shortcuts12->boundImageToPress(pressIcon[10]);
         button_shortcuts12->boundImageToRelease(releaseIcon[10]);
         button_shortcuts12->boundImageToHover(hoverIcon[10]);
         button_shortcuts12->setBounds(-20,-20,40,40);
         button_shortcuts12->connect(button_shortcuts12,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
         accountView->menuScene.addItem(button_shortcuts12);

         DButton *button_menu12 = new DButton;
         button_menu12->setPos(-130,-330 + 12*45);
         button_menu12->setHoverEnableFlag(true);
         button_menu12->boundImageToPress(pressIcon[11]);
         button_menu12->boundImageToRelease(releaseIcon[11]);
         button_menu12->boundImageToHover(hoverIcon[11]);
         button_menu12->setBounds(-20,-20,40,40);
         button_menu12->connect(button_menu12,SIGNAL(fireAction()),accountView,SLOT(menu()));
         accountView->menuScene.addItem(button_menu12);

         DButton *button_system12 = new DButton;
         button_system12->setPos(-130,-330 + 13*45);
         button_system12->setHoverEnableFlag(true);
         button_system12->boundImageToPress(pressIcon[12]);
         button_system12->boundImageToRelease(releaseIcon[12]);
         button_system12->boundImageToHover(hoverIcon[12]);
         button_system12->setBounds(-20,-20,40,40);
         button_system12->connect(button_system12,SIGNAL(fireAction()),accountView,SLOT(system()));
         accountView->menuScene.addItem(button_system12);

         DButton *button_pow12 = new DButton;
         button_pow12->setPos(-130,-330 + 14*45);
         button_pow12->setHoverEnableFlag(true);
         button_pow12->boundImageToPress(pressIcon[14]);
         button_pow12->boundImageToRelease(releaseIcon[14]);
         button_pow12->boundImageToHover(hoverIcon[14]);
         button_pow12->setBounds(-20,-20,40,40);
         button_pow12->connect(button_pow12,SIGNAL(fireAction()),accountView,SLOT(pow()));
         accountView->menuScene.addItem(button_pow12);


         //侧边栏系统信息界面
        DButton *button_home13 = new DButton;
        button_home13->setPos(-130,-330 + 0*45);
        button_home13->setHoverEnableFlag(true);
        button_home13->boundImageToPress(pressIcon[13]);
        button_home13->boundImageToRelease(releaseIcon[13]);
        button_home13->boundImageToHover(hoverIcon[13]);
        button_home13->setBounds(-20,-20,40,40);
        button_home13->connect(button_home13,SIGNAL(fireAction()),accountView,SLOT(home()));
        accountView->systemScene.addItem(button_home13);


        DButton *button_account13 = new DButton;
        button_account13->setPos(-130,-330 + 1*45);
        button_account13->setHoverEnableFlag(true);
        button_account13->boundImageToPress(pressIcon[0]);
        button_account13->boundImageToRelease(releaseIcon[0]);
        button_account13->boundImageToHover(hoverIcon[0]);
        button_account13->setBounds(-20,-20,40,40);
        button_account13->connect(button_account13,SIGNAL(fireAction()),accountView,SLOT(account()));
        accountView->systemScene.addItem(button_account13);

        DButton *button_display13 = new DButton;
        button_display13->setPos(-130,-330 + 2*45);
        button_display13->setHoverEnableFlag(true);
        button_display13->boundImageToPress(pressIcon[1]);
        button_display13->boundImageToRelease(releaseIcon[1]);
        button_display13->boundImageToHover(hoverIcon[1]);
        button_display13->setBounds(-20,-20,40,40);
        button_display13->connect(button_display13,SIGNAL(fireAction()),accountView,SLOT(display()));
        accountView->systemScene.addItem(button_display13);

        DButton *button_default13 = new DButton;
        button_default13->setPos(-130,-330 + 3*45);
        button_default13->setHoverEnableFlag(true);
        button_default13->boundImageToPress(pressIcon[2]);
        button_default13->boundImageToRelease(releaseIcon[2]);
        button_default13->boundImageToHover(hoverIcon[2]);
        button_default13->setBounds(-20,-20,40,40);
        button_default13->connect(button_default13,SIGNAL(fireAction()),accountView,SLOT(default1()));
        accountView->systemScene.addItem(button_default13);

        DButton *button_personalization13 = new DButton;
        button_personalization13->setPos(-130,-330 + 4*45);
        button_personalization13->setHoverEnableFlag(true);
        button_personalization13->boundImageToPress(pressIcon[3]);
        button_personalization13->boundImageToRelease(releaseIcon[3]);
        button_personalization13->boundImageToHover(hoverIcon[3]);
        button_personalization13->setBounds(-20,-20,40,40);
        button_personalization13->connect(button_personalization13,SIGNAL(fireAction()),accountView,SLOT(personalization()));
        accountView->systemScene.addItem(button_personalization13);

        DButton *button_network13 = new DButton;
        button_network13->setPos(-130,-330 + 5*45);
        button_network13->setHoverEnableFlag(true);
        button_network13->boundImageToPress(pressIcon[4]);
        button_network13->boundImageToRelease(releaseIcon[4]);
        button_network13->boundImageToHover(hoverIcon[4]);
        button_network13->setBounds(-20,-20,40,40);
        button_network13->connect(button_network13,SIGNAL(fireAction()),accountView,SLOT(network()));
        accountView->systemScene.addItem(button_network13);

        DButton *button_sound13 = new DButton;
        button_sound13->setPos(-130,-330 + 6*45);
        button_sound13->setHoverEnableFlag(true);
        button_sound13->boundImageToPress(pressIcon[5]);
        button_sound13->boundImageToRelease(releaseIcon[5]);
        button_sound13->boundImageToHover(hoverIcon[5]);
        button_sound13->setBounds(-20,-20,40,40);
        button_sound13->connect(button_sound13,SIGNAL(fireAction()),accountView,SLOT(sound()));
        accountView->systemScene.addItem(button_sound13);

        DButton *button_date13= new DButton;
        button_date13->setPos(-130,-330 + 7*45);
        button_date13->setHoverEnableFlag(true);
        button_date13->boundImageToPress(pressIcon[6]);
        button_date13->boundImageToRelease(releaseIcon[6]);
        button_date13->boundImageToHover(hoverIcon[6]);
        button_date13->setBounds(-20,-20,40,40);
        button_date13->connect(button_date13,SIGNAL(fireAction()),accountView,SLOT(date()));
        accountView->systemScene.addItem(button_date13);

        DButton *button_power13 = new DButton;
        button_power13->setPos(-130,-330 + 8*45);
        button_power13->setHoverEnableFlag(true);
        button_power13->boundImageToPress(pressIcon[7]);
        button_power13->boundImageToRelease(releaseIcon[7]);
        button_power13->boundImageToHover(hoverIcon[7]);
        button_power13->setBounds(-20,-20,40,40);
        button_power13->connect(button_power13,SIGNAL(fireAction()),accountView,SLOT(power()));
        accountView->systemScene.addItem(button_power13);

        DButton *button_mouse13 = new DButton;
        button_mouse13->setPos(-130,-330 + 9*45);
        button_mouse13->setHoverEnableFlag(true);
        button_mouse13->boundImageToPress(pressIcon[8]);
        button_mouse13->boundImageToRelease(releaseIcon[8]);
        button_mouse13->boundImageToHover(hoverIcon[8]);
        button_mouse13->setBounds(-20,-20,40,40);
        button_mouse13->connect(button_mouse13,SIGNAL(fireAction()),accountView,SLOT(mouse()));
        accountView->systemScene.addItem(button_mouse13);

        DButton *button_keyboard13 = new DButton;
        button_keyboard13->setPos(-130,-330 + 10*45);
        button_keyboard13->setHoverEnableFlag(true);
        button_keyboard13->boundImageToPress(pressIcon[9]);
        button_keyboard13->boundImageToRelease(releaseIcon[9]);
        button_keyboard13->boundImageToHover(hoverIcon[9]);
        button_keyboard13->setBounds(-20,-20,40,40);
        button_keyboard13->connect(button_keyboard13,SIGNAL(fireAction()),accountView,SLOT(keyboard()));
        accountView->systemScene.addItem(button_keyboard13);

        DButton *button_shortcuts13 = new DButton;
        button_shortcuts13->setPos(-130,-330 + 11*45);
        button_shortcuts13->setHoverEnableFlag(true);
        button_shortcuts13->boundImageToPress(pressIcon[10]);
        button_shortcuts13->boundImageToRelease(releaseIcon[10]);
        button_shortcuts13->boundImageToHover(hoverIcon[10]);
        button_shortcuts13->setBounds(-20,-20,40,40);
        button_shortcuts13->connect(button_shortcuts13,SIGNAL(fireAction()),accountView,SLOT(shortcuts()));
        accountView->systemScene.addItem(button_shortcuts13);

        DButton *button_menu13 = new DButton;
        button_menu13->setPos(-130,-330 + 12*45);
        button_menu13->setHoverEnableFlag(true);
        button_menu13->boundImageToPress(pressIcon[11]);
        button_menu13->boundImageToRelease(releaseIcon[11]);
        button_menu13->boundImageToHover(hoverIcon[11]);
        button_menu13->setBounds(-20,-20,40,40);
        button_menu13->connect(button_menu13,SIGNAL(fireAction()),accountView,SLOT(menu()));
        accountView->systemScene.addItem(button_menu13);

        DButton *button_system13 = new DButton;
        button_system13->setPos(-130,-330 + 13*45);
        button_system13->setHoverEnableFlag(true);
        button_system13->boundImageToPress(pressIcon[12]);
        button_system13->boundImageToRelease(releaseIcon[12]);
        button_system13->boundImageToHover(hoverIcon[12]);
        button_system13->setBounds(-20,-20,40,40);
        button_system13->connect(button_system13,SIGNAL(fireAction()),accountView,SLOT(system()));
        accountView->systemScene.addItem(button_system13);

        DButton *button_pow13 = new DButton;
        button_pow13->setPos(-130,-330 + 14*45);
        button_pow13->setHoverEnableFlag(true);
        button_pow13->boundImageToPress(pressIcon[14]);
        button_pow13->boundImageToRelease(releaseIcon[14]);
        button_pow13->boundImageToHover(hoverIcon[14]);
        button_pow13->setBounds(-20,-20,40,40);
        button_pow13->connect(button_pow13,SIGNAL(fireAction()),accountView,SLOT(pow()));
        accountView->systemScene.addItem(button_pow13);



    accountView->view.setScene(&accountView->scene);
    accountView->view.show();

    return app.exec();
}

