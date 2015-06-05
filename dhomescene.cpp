#include "dhomescene.h"
#include "dbus.h"
#include "dimage.h"

DHomescene::DHomescene()
{


      setSceneRect(-150,-300,300,600);
    //账户
      button_account = new DButton;
      button_account->setPos(-100 + 0*84 + 20 ,-200 + 20 + 0*84);
      button_account->setHoverEnableFlag(true);
      button_account->setBackgroundEnable(true);
      button_account->boundImageToPress(pressIcon[0+0*3]);
      button_account->boundImageToRelease(releaseIcon[0+0*3]);
      button_account->boundImageToHover(hoverIcon[0+0*3]);
      button_account->setBounds(-42,-42,84,84);
      //button_account->connect(button_account,SIGNAL(fireAction()),this,SLOT(account()));
      addItem(button_account);

      QGraphicsTextItem*item_acount = new QGraphicsTextItem(itemName[0+0*3]);
      item_acount->setPos(-96 + 0*84  ,-200+30 + 0*84);
      item_acount->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_acount;
      font_acount.setPixelSize(12);
      item_acount->setFont(font_acount);
      addItem(item_acount);


      //显示
      button_display = new DButton;
      button_display->setPos(-100 + 1*84 + 20 ,-200 + 20 + 0*84);
      button_display->setHoverEnableFlag(true);
      button_display->setBackgroundEnable(true);
      button_display->boundImageToPress(pressIcon[1+0*3]);
      button_display->boundImageToRelease(releaseIcon[1+0*3]);
      button_display->boundImageToHover(hoverIcon[1+0*3]);
      button_display->setBounds(-42,-42,84,84);
      //button_display->connect(button_display,SIGNAL(fireAction()),this,SLOT(display()));
      addItem(button_display);
      QGraphicsTextItem*item_display = new QGraphicsTextItem(itemName[1+0*3]);
      item_display->setPos(-96 + 1*84,-200+30 + 0*84);
      item_display->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_display;
      font_display.setPixelSize(12);
      item_display->setFont(font_display);
      addItem(item_display);

      //默认程序
      button_default = new DButton;
      button_default->setPos(-100 + 2*84 + 20 ,-200 + 20 + 0*84);
      button_default->setHoverEnableFlag(true);
      button_default->setBackgroundEnable(true);
      button_default->boundImageToPress(pressIcon[2+0*3]);
      button_default->boundImageToRelease(releaseIcon[2+0*3]);
      button_default->boundImageToHover(hoverIcon[2+0*3]);
      button_default->setBounds(-44,-44,84,84);
      //button_default->connect(button_default,SIGNAL(fireAction()),this,SLOT(default1()));
      addItem(button_default);
      QGraphicsTextItem*item_default = new QGraphicsTextItem(itemName[2+0*3]);
      item_default->setPos(-107 + 2*84  ,-200+30 + 0*84);
      item_default->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_default;
      font_default.setPixelSize(12);
      item_default->setFont(font_default);
      addItem(item_default);
      //个性化
      button_personalization = new DButton;
      button_personalization->setPos(-100 + 0*84 + 20 ,-200 + 20 + 1*84);
      button_personalization->setHoverEnableFlag(true);
      button_personalization->setBackgroundEnable(true);
      button_personalization->boundImageToPress(pressIcon[0+1*3]);
      button_personalization->boundImageToRelease(releaseIcon[0+1*3]);
      button_personalization->boundImageToHover(hoverIcon[0+1*3]);
      button_personalization->setBounds(-42,-42,84,84);
      //button_personalization->connect(button_personalization,SIGNAL(fireAction()),this,SLOT(personalization()));
      addItem(button_personalization);
      QGraphicsTextItem*item_personalization = new QGraphicsTextItem(itemName[0+1*3]);
      item_personalization->setPos(-102 + 0*84  ,-200+30 + 1*84);
      item_personalization->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_personalization;
      font_personalization.setPixelSize(12);
      item_personalization->setFont(font_personalization);
      addItem(item_personalization);
      //网络
      button_network = new DButton;
      button_network->setPos(-100 + 1*84 + 20 ,-200 + 20 + 1*84);
      button_network->setHoverEnableFlag(true);
      button_network->setBackgroundEnable(true);
      button_network->boundImageToPress(pressIcon[1+1*3]);
      button_network->boundImageToRelease(releaseIcon[1+1*3]);
      button_network->boundImageToHover(hoverIcon[1+1*3]);
      button_network->setBounds(-42,-42,84,84);
      //button_network->connect(button_network,SIGNAL(fireAction()),this,SLOT(network()));
      addItem(button_network);
      QGraphicsTextItem*item_network = new QGraphicsTextItem(itemName[1+1*3]);
      item_network->setPos(-96 + 1*84  ,-200+30 + 1*84);
      item_network->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_network;
      font_network.setPixelSize(12);
      item_network->setFont(font_network);
      addItem(item_network);
      //声音
      button_sound = new DButton;
      button_sound->setPos(-100 + 2*84 + 20 ,-200 + 20 + 1*84);
      button_sound->setHoverEnableFlag(true);
      button_sound->setBackgroundEnable(true);
      button_sound->boundImageToPress(pressIcon[2+1*3]);
      button_sound->boundImageToRelease(releaseIcon[2+1*3]);
      button_sound->boundImageToHover(hoverIcon[2+1*3]);
      button_sound->setBounds(-42,-42,84,84);
      //button_sound->connect(button_sound,SIGNAL(fireAction()),this,SLOT(sound()));
      addItem(button_sound);
      QGraphicsTextItem*item_sound = new QGraphicsTextItem(itemName[2+1*3]);
      item_sound->setPos(-96 + 2*84  ,-200+30 + 1*84);
      item_sound->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_sound;
      font_sound.setPixelSize(12);
      item_sound->setFont(font_sound);
      addItem(item_sound);

      //日期和时间
      button_date = new DButton;
      button_date->setPos(-100 + 0*84 + 20 ,-200 + 20 + 2*84);
      button_date->setHoverEnableFlag(true);
      button_date->setBackgroundEnable(true);
      button_date->boundImageToPress(pressIcon[0+2*3]);
      button_date->boundImageToRelease(releaseIcon[0+2*3]);
      button_date->boundImageToHover(hoverIcon[0+2*3]);
      button_date->setBounds(-42,-42,84,84);
      //button_date->connect(button_date,SIGNAL(fireAction()),this,SLOT(date()));
      addItem(button_date);
      QGraphicsTextItem*item_date = new QGraphicsTextItem(itemName[0+2*3]);
      item_date->setPos(-114 + 0*84  ,-200+30 + 2*84);
      item_date->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_date;
      font_date.setPixelSize(12);
      item_date->setFont(font_date);
      addItem(item_date);
      //电源管理
      button_power = new DButton;
      button_power->setPos(-100 + 1*84 + 20 ,-200 + 20 + 2*84);
      button_power->setHoverEnableFlag(true);
      button_power->setBackgroundEnable(true);
      button_power->boundImageToPress(pressIcon[1+2*3]);
      button_power->boundImageToRelease(releaseIcon[1+2*3]);
      button_power->boundImageToHover(hoverIcon[1+2*3]);
      button_power->setBounds(-42,-42,84,84);
     // button_power->connect(button_power,SIGNAL(fireAction()),this,SLOT(power()));
      addItem(button_power);
      QGraphicsTextItem*item_power_control = new QGraphicsTextItem(itemName[1+2*3]);
      item_power_control->setPos(-107 + 1*84  ,-200+30 + 2*84);
      item_power_control->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_power_control;
      font_power_control.setPixelSize(12);
      item_power_control->setFont(font_power_control);
      addItem(item_power_control);
      //鼠标
      button_mouse = new DButton;
      button_mouse->setPos(-100 + 2*84 + 20 ,-200 + 20 + 2*84);
      button_mouse->setHoverEnableFlag(true);
      button_mouse->setBackgroundEnable(true);
      button_mouse->boundImageToPress(pressIcon[2+2*3]);
      button_mouse->boundImageToRelease(releaseIcon[2+2*3]);
      button_mouse->boundImageToHover(hoverIcon[2+2*3]);
      button_mouse->setBounds(-42,-42,84,84);
      //button_mouse->connect(button_mouse,SIGNAL(fireAction()),this,SLOT(mouse()));
      addItem(button_mouse);
      QGraphicsTextItem*item_mouse = new QGraphicsTextItem(itemName[2+2*3]);
      item_mouse->setPos(-96 + 2*84  ,-200+30 + 2*84);
      item_mouse->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_mouse;
      font_mouse.setPixelSize(12);
      item_mouse->setFont(font_mouse);
      addItem(item_mouse);
      //键盘和语言
      button_keyboard = new DButton;
      button_keyboard->setPos(-100 + 0*84 + 20 ,-200 + 20 + 3*84);
      button_keyboard->setHoverEnableFlag(true);
      button_keyboard->setBackgroundEnable(true);
      button_keyboard->boundImageToPress(pressIcon[0+3*3]);
      button_keyboard->boundImageToRelease(releaseIcon[0+3*3]);
      button_keyboard->boundImageToHover(hoverIcon[0+3*3]);
      button_keyboard->setBounds(-42,-42,84,84);
      //button_keyboard->connect(button_keyboard,SIGNAL(fireAction()),this,SLOT(keyboard()));
      addItem(button_keyboard);
      QGraphicsTextItem*item_keyboard = new QGraphicsTextItem(itemName[0+3*3]);
      item_keyboard->setPos(-114 + 0*84  ,-200+30 + 3*84);
      item_keyboard->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_keyboard;
      font_keyboard.setPixelSize(12);
      item_keyboard->setFont(font_keyboard);
      addItem(item_keyboard);

      //快捷键
      button_shortcuts = new DButton;
      button_shortcuts->setPos(-100 + 1*84 + 20 ,-200 + 20 + 3*84);
      button_shortcuts->setHoverEnableFlag(true);
      button_shortcuts->setBackgroundEnable(true);
      button_shortcuts->boundImageToPress(pressIcon[1+3*3]);
      button_shortcuts->boundImageToRelease(releaseIcon[1+3*3]);
      button_shortcuts->boundImageToHover(hoverIcon[1+3*3]);
      button_shortcuts->setBounds(-42,-42,84,84);
     // button_shortcuts->connect(button_shortcuts,SIGNAL(fireAction()),this,SLOT(shortcuts()));
      addItem(button_shortcuts);
      QGraphicsTextItem*item_shortcuts = new QGraphicsTextItem(itemName[1+3*3]);
      item_shortcuts->setPos(-102 + 1*84  ,-200+30 + 3*84);
      item_shortcuts->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_shortcuts;
      font_shortcuts.setPixelSize(12);
      item_shortcuts->setFont(font_shortcuts);
      addItem(item_shortcuts);
      //启动菜单
      button_menu = new DButton;
      button_menu->setPos(-100 + 2*84 + 20 ,-200 + 20 + 3*84);
      button_menu->setHoverEnableFlag(true);
      button_menu->setBackgroundEnable(true);
      button_menu->boundImageToPress(pressIcon[2+3*3]);
      button_menu->boundImageToRelease(releaseIcon[2+3*3]);
      button_menu->boundImageToHover(hoverIcon[2+3*3]);
      button_menu->setBounds(-42,-42,84,84);
      //button_menu->connect(button_menu,SIGNAL(fireAction()),this,SLOT(menu()));
      addItem(button_menu);

      QGraphicsTextItem*item_menu = new QGraphicsTextItem(itemName[2+3*3]);
      item_menu->setPos(-107 + 2*84  ,-200+30 + 3*84);
      item_menu->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_menu;
      font_menu.setPixelSize(12);
      item_menu->setFont(font_menu);
      addItem(item_menu);




      //系统信息
      button_system = new DButton;
      button_system->setPos(-100 + 0*84 + 20 ,-200 + 20 + 4*84);
      button_system->setHoverEnableFlag(true);
      button_system->setBackgroundEnable(true);
      button_system->boundImageToPress(pressIcon[12]);
      button_system->boundImageToRelease(releaseIcon[12]);
      button_system->boundImageToHover(hoverIcon[12]);
      button_system->setBounds(-42,-42,84,84);
      //button_system->connect(button_system,SIGNAL(fireAction()),this,SLOT(system()));
      addItem(button_system);

      QGraphicsTextItem*item_system = new QGraphicsTextItem(itemName[0+4*3]);
      item_system->setPos(-107 + 0*84  ,-200+30 + 4*84);
      item_system->setDefaultTextColor(QColor(250,250,250,200));
      QFont font_system;
      font_system.setPixelSize(12);
      item_system->setFont(font_system);
      addItem(item_system);
      //电源按钮
      DBus *powerButton = new DBus;
      powerButton->setPos(0,300);
      powerButton->setBounds(-40,-40,83,83);
      powerButton->setHoverEnableFlag(true);
      powerButton->boundImageToPress("../DeepinGraphics/resources/images/shutdown_hover.png");
      powerButton->boundImageToRelease("../DeepinGraphics/resources/images/shutdown_normal.png");
      powerButton->boundImageToHover("../DeepinGraphics/resources/images/shutdown_hover.png");

      //电源下面背景图片
      Dimage * dimage =new Dimage("../DeepinGraphics/resources/images/shutdown_bg.png");
      dimage->setPos(0,315);
      addItem(dimage);
      addItem(powerButton);
      //电源字体显示
      QGraphicsTextItem*item_power = new QGraphicsTextItem("电源");
      item_power->setPos(-15,320);
      item_power->setDefaultTextColor(QColor(255,255,0));
      QFont font_power;
      font_power.setPixelSize(12);
      item_power->setFont(font_power);
      addItem(item_power);


}
