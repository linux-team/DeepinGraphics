/****************************************************************************
**
**  Copyright (C) 2011~2015 Deepin, Inc.
**                2011~2015 Zhe Wang
**
**  Author:     Zhe Wang <wzedmund@gmail.com>
**  Maintainer: 
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

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

const char *pressIcon[50] = {
    "../myScene/resources/icons/account_press.png",
    "../myScene/resources/icons/display_press.png",
    "../myScene/resources/icons/default_applications_press.png",
    "../myScene/resources/icons/personalization_press.png",
    "../myScene/resources/icons/network_press.png",
    "../myScene/resources/icons/sound_press.png",
    "../myScene/resources/icons/date_time_press.png",
    "../myScene/resources/icons/power_press.png",
    "../myScene/resources/icons/mouse_touchpad_press.png",
    "../myScene/resources/icons/keyboard_press.png",
    "../myScene/resources/icons/shortcuts_press.png",
    "../myScene/resources/icons/grub_press.png",
    "../myScene/resources/icons/system_info_press.png",
    "../myScene/resources/icons/home_press.png",
    "../myScene/resources/icons/shutdown_press.png"
};

const char *releaseIcon[50] = {
    "../myScene/resources/icons/account_normal.png",
    "../myScene/resources/icons/display_normal.png",
    "../myScene/resources/icons/default_applications_normal.png",
    "../myScene/resources/icons/personalization_normal.png",
    "../myScene/resources/icons/network_normal.png",
    "../myScene/resources/icons/sound_normal.png",
    "../myScene/resources/icons/date_time_normal.png",
    "../myScene/resources/icons/power_normal.png",
    "../myScene/resources/icons/mouse_touchpad_normal.png",
    "../myScene/resources/icons/keyboard_normal.png",
    "../myScene/resources/icons/shortcuts_normal.png",
    "../myScene/resources/icons/grub_normal.png",
    "../myScene/resources/icons/system_info_normal.png",
    "../myScene/resources/icons/home_normal.png",
    "../myScene/resources/icons/shutdown_normal.png"
};

const char *hoverIcon[50] = {
    "../myScene/resources/icons/account_hover.png",
    "../myScene/resources/icons/display_hover.png",
    "../myScene/resources/icons/default_applications_hover.png",
    "../myScene/resources/icons/personalization_hover.png",
    "../myScene/resources/icons/network_hover.png",
    "../myScene/resources/icons/sound_hover.png",
    "../myScene/resources/icons/date_time_hover.png",
    "../myScene/resources/icons/power_hover.png",
    "../myScene/resources/icons/mouse_touchpad_hover.png",
    "../myScene/resources/icons/keyboard_hover.png",
    "../myScene/resources/icons/shortcuts_hover.png",
    "../myScene/resources/icons/grub_hover.png",
    "../myScene/resources/icons/system_info_hover.png",
    "../myScene/resources/icons/home_hover.png",
    "../myScene/resources/icons/shutdown_hove.png"

};

const char * itemName[20] ={
    "账户",
    "显示",
    "默认程序",
    "个性化",
    "网络",
    "声音",
    "日期和时间",
    "电源管理",
    "鼠标",
    "键盘和语言",
    "快捷键",
    "启动菜单",
    "系统信息"
};
int main(int argc,char* argv[ ])
{
    QApplication app(argc,argv); 
    DAccountview *accountView = new DAccountview;
    accountView->scene.setSceneRect(-150,-300,300,600);
    accountView->accountScene.setSceneRect(-150,-300,300,600);
    accountView->displayScene.setSceneRect(-150,-300,300,600);
    accountView->view.resize(320, 700);
    accountView->view.setBackgroundBrush(QColor(33,33,33,255));
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
    font_acount.setPixelSize(12);//改变字体大小
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
    font_display.setPixelSize(12);//改变字体大小
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
    font_default.setPixelSize(12);//改变字体大小
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
    font_personalization.setPixelSize(12);//改变字体大小
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
    font_network.setPixelSize(12);//改变字体大小
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
    font_sound.setPixelSize(12);//改变字体大小
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
    font_date.setPixelSize(12);//改变字体大小
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
    font_power_control.setPixelSize(12);//改变字体大小
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
    font_mouse.setPixelSize(12);//改变字体大小
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
    font_keyboard.setPixelSize(12);//改变字体大小
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
    font_shortcuts.setPixelSize(12);//改变字体大小
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
    font_menu.setPixelSize(12);//改变字体大小
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
    font_system.setPixelSize(12);//改变字体大小
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
    font_power.setPixelSize(12);//改变字体大小
    item_power->setFont(font_power);
    accountView->scene.addItem(item_power);

    //侧边栏显示
#if 0
    for(int j=0;j<13;j++)
    {
        DButton *button = new DButton;
        button->setPos(-130,-300 + j*50);
        button->setHoverEnableFlag(true);
        button->boundImageToPress(pressIcon[j]);
        button->boundImageToRelease(releaseIcon[j]);
        button->boundImageToHover(hoverIcon[j]);
        button->setBounds(-20,-20,40,40);
        button->connect(button,SIGNAL(fireAction()),accountView,SLOT(menu()));
        accountView->accountScene.addItem(button);
    }
#endif
    //侧边栏home键
    DButton *button_home1 = new DButton;
    button_home1->setPos(-130,-330 + 0*40);
    button_home1->setHoverEnableFlag(true);
    button_home1->boundImageToPress(pressIcon[13]);
    button_home1->boundImageToRelease(releaseIcon[13]);
    button_home1->boundImageToHover(hoverIcon[13]);
    button_home1->setBounds(-20,-20,40,40);
    button_home1->connect(button_home1,SIGNAL(fireAction()),accountView,SLOT(home()));
    accountView->accountScene.addItem(button_home1);
    accountView->displayScene.addItem(button_home1);
   // accountView->defaultScene.addItem(button_home1);


    DButton *button_account1 = new DButton;
    button_account1->setPos(-130,-330 + 1*40);
    button_account1->setHoverEnableFlag(true);
    button_account1->boundImageToPress(pressIcon[0]);
    button_account1->boundImageToRelease(releaseIcon[0]);
    button_account1->boundImageToHover(hoverIcon[0]);
    button_account1->setBounds(-20,-20,40,40);
    button_account1->connect(button_account1,SIGNAL(fireAction()),accountView,SLOT(account()));
    accountView->accountScene.addItem(button_account1);




    //
    accountView->accountScene.addLine(-100,-400,-100,400);
    accountView->view.setScene(&accountView->scene);
    accountView->view.show();
    return app.exec();
}

