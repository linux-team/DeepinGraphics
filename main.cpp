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
    "../myScene/resources/icons/system_info_press.png"
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
    "../myScene/resources/icons/system_info_normal.png"
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
    "../myScene/resources/icons/system_info_hover.png"
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

//    QGraphicsScene scene;
//    scene.setSceneRect(-150,-300,300,600);
    
//    QGraphicsScene accountScene;
//    accountScene.setSceneRect(-150,-300,300,600);
    
//    QGraphicsView view;
//    view.setForegroundBrush(QColor(255, 255, 255, 100));
//    view.resize(320, 700);
//    view.setBackgroundBrush(QColor(Qt::darkGray));
    
    DAccountview *accountView = new DAccountview;
    accountView->scene.setSceneRect(-150,-300,300,600);
    accountView->accountScene.setSceneRect(-150,-300,300,600);
  //  accountView->view.setForegroundBrush(QColor(255, 255, 255, 100));
    accountView->view.resize(320, 700);
    accountView->view.setBackgroundBrush(QColor(33,33,33,255));
    

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            DButton *button = new DButton;
            button->setPos(-100 + j*83 + 20 ,-200 + 20 + i*83);
            button->setHoverEnableFlag(true);
            button->setBackgroundEnable(true);
            button->boundImageToPress(pressIcon[j+i*3]);
            button->boundImageToRelease(releaseIcon[j+i*3]);
            button->boundImageToHover(hoverIcon[j+i*3]);
            button->setBounds(-40,-40,83,83);
            button->connect(button,SIGNAL(fireAction()),accountView,SLOT(performAction()));
            accountView->scene.addItem(button);
            //字体显示
            QGraphicsTextItem*item = new QGraphicsTextItem(itemName[j+i*3]);
            item->setPos(-100 + j*83+0  ,-200+30 + i*83);
            item->setDefaultTextColor(QColor(250,250,250,200));
            QFont font;
            //font.setBold(true);//加粗
            font.setPixelSize(12);//改变字体大小
            item->setFont(font);
            accountView->scene.addItem(item);
        }
    }
    //最后一个系统信息
    DButton *button = new DButton;
    button->setPos(-100 + 0*83 + 20 ,-200 + 20 + 4*83);
    button->setHoverEnableFlag(true);
    button->setBackgroundEnable(true);
    button->boundImageToPress(pressIcon[12]);
    button->boundImageToRelease(releaseIcon[12]);
    button->boundImageToHover(hoverIcon[12]);
    button->setBounds(-40,-40,83,83);
    button->connect(button,SIGNAL(fireAction()),accountView,SLOT(performAction()));
    accountView->scene.addItem(button);

    QGraphicsTextItem*item = new QGraphicsTextItem(itemName[0+4*3]);
    item->setPos(-100 + 0*83  ,-200+30 + 4*83);
    item->setDefaultTextColor(QColor(250,250,250,200));
    QFont font;
    //font.setBold(true);//加粗
    font.setPixelSize(12);//改变字体大小
    item->setFont(font);
    accountView->scene.addItem(item);
 //   DSwitchbutton *sb = new DSwitchbutton;
 //   sb->setPos(-80,150);
 //   accountView->scene.addItem(sb);
    
    dbus *powerButton = new dbus;
    powerButton->setPos(0,300);
    powerButton->setBounds(-40,-40,83,83);
    powerButton->setHoverEnableFlag(true);
    powerButton->boundImageToPress("../myScene/resources/images/shutdown_hover.png");
    powerButton->boundImageToRelease("../myScene/resources/images/shutdown_normal.png");
    powerButton->boundImageToHover("../myScene/resources/images/shutdown_hover.png");

    
    Dimage * dimage =new Dimage("../myScene/resources/images/shutdown_bg.png");
    dimage->setPos(0,315);
    accountView->scene.addItem(dimage);
    accountView->scene.addItem(powerButton);
    //电源
    QGraphicsTextItem*item1 = new QGraphicsTextItem("电源");
    item1->setPos(-15,320);
    item1->setDefaultTextColor(QColor(255,255,0));
    //item1->setDefaultTextColor(Qt::yellow);
    QFont font1;
    //font.setBold(true);//加粗
    font1.setPixelSize(12);//改变字体大小
    item1->setFont(font1);
    accountView->scene.addItem(item1);

    
    for(int j=0;j<13;j++)
    {
        DButton *button = new DButton;
        button->setPos(-130,-300 + j*50);
        button->setHoverEnableFlag(true);
        button->boundImageToPress(pressIcon[j]);
        button->boundImageToRelease(releaseIcon[j]);
        button->boundImageToHover(hoverIcon[j]);
        button->setBounds(-20,-20,40,40);
        accountView->accountScene.addItem(button);
    }
    
    accountView->view.setScene(&accountView->scene);
    accountView->view.resize(310, 700);
    accountView->view.show();
    return app.exec();
}

