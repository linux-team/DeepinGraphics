#include "dshortcutsscene.h"
#include "dbutton.h"

DShortcutsscene::DShortcutsscene()
{
    shortcutsscene.setSceneRect(-150,-300,300,600);
    shortcutsscene.addLine(-100,-400,-100,400);

    //侧边栏快捷键界面
    DButton *button_home11 = new DButton;
    button_home11->setPos(-130,-330 + 0*45);
    button_home11->setHoverEnableFlag(true);
    button_home11->boundImageToPress(pressIcon[13]);
    button_home11->boundImageToRelease(releaseIcon[13]);
    button_home11->boundImageToHover(hoverIcon[13]);
    button_home11->setBounds(-20,-20,40,40);
    //button_home11->connect(button_home11,SIGNAL(fireAction()),this,SLOT(home()));
    this->shortcutsscene.addItem(button_home11);


    DButton *button_account11 = new DButton;
    button_account11->setPos(-130,-330 + 1*45);
    button_account11->setHoverEnableFlag(true);
    button_account11->boundImageToPress(pressIcon[0]);
    button_account11->boundImageToRelease(releaseIcon[0]);
    button_account11->boundImageToHover(hoverIcon[0]);
    button_account11->setBounds(-20,-20,40,40);
    //button_account11->connect(button_account11,SIGNAL(fireAction()),this,SLOT(account()));
    this->shortcutsscene.addItem(button_account11);

    DButton *button_display11 = new DButton;
    button_display11->setPos(-130,-330 + 2*45);
    button_display11->setHoverEnableFlag(true);
    button_display11->boundImageToPress(pressIcon[1]);
    button_display11->boundImageToRelease(releaseIcon[1]);
    button_display11->boundImageToHover(hoverIcon[1]);
    button_display11->setBounds(-20,-20,40,40);
    //button_display11->connect(button_display11,SIGNAL(fireAction()),this,SLOT(display()));
    this->shortcutsscene.addItem(button_display11);

    DButton *button_default11 = new DButton;
    button_default11->setPos(-130,-330 + 3*45);
    button_default11->setHoverEnableFlag(true);
    button_default11->boundImageToPress(pressIcon[2]);
    button_default11->boundImageToRelease(releaseIcon[2]);
    button_default11->boundImageToHover(hoverIcon[2]);
    button_default11->setBounds(-20,-20,40,40);
    //button_default11->connect(button_default11,SIGNAL(fireAction()),this,SLOT(default1()));
    this->shortcutsscene.addItem(button_default11);

    DButton *button_personalization11 = new DButton;
    button_personalization11->setPos(-130,-330 + 4*45);
    button_personalization11->setHoverEnableFlag(true);
    button_personalization11->boundImageToPress(pressIcon[3]);
    button_personalization11->boundImageToRelease(releaseIcon[3]);
    button_personalization11->boundImageToHover(hoverIcon[3]);
    button_personalization11->setBounds(-20,-20,40,40);
    //button_personalization11->connect(button_personalization11,SIGNAL(fireAction()),this,SLOT(personalization()));
    this->shortcutsscene.addItem(button_personalization11);

    DButton *button_network11 = new DButton;
    button_network11->setPos(-130,-330 + 5*45);
    button_network11->setHoverEnableFlag(true);
    button_network11->boundImageToPress(pressIcon[4]);
    button_network11->boundImageToRelease(releaseIcon[4]);
    button_network11->boundImageToHover(hoverIcon[4]);
    button_network11->setBounds(-20,-20,40,40);
    //button_network11->connect(button_network11,SIGNAL(fireAction()),this,SLOT(network()));
    this->shortcutsscene.addItem(button_network11);

    DButton *button_sound11 = new DButton;
    button_sound11->setPos(-130,-330 + 6*45);
    button_sound11->setHoverEnableFlag(true);
    button_sound11->boundImageToPress(pressIcon[5]);
    button_sound11->boundImageToRelease(releaseIcon[5]);
    button_sound11->boundImageToHover(hoverIcon[5]);
    button_sound11->setBounds(-20,-20,40,40);
    //button_sound11->connect(button_sound11,SIGNAL(fireAction()),this,SLOT(sound()));
    this->shortcutsscene.addItem(button_sound11);

    DButton *button_date11= new DButton;
    button_date11->setPos(-130,-330 + 7*45);
    button_date11->setHoverEnableFlag(true);
    button_date11->boundImageToPress(pressIcon[6]);
    button_date11->boundImageToRelease(releaseIcon[6]);
    button_date11->boundImageToHover(hoverIcon[6]);
    button_date11->setBounds(-20,-20,40,40);
    //button_date11->connect(button_date11,SIGNAL(fireAction()),this,SLOT(date()));
    this->shortcutsscene.addItem(button_date11);

    DButton *button_power11 = new DButton;
    button_power11->setPos(-130,-330 + 8*45);
    button_power11->setHoverEnableFlag(true);
    button_power11->boundImageToPress(pressIcon[7]);
    button_power11->boundImageToRelease(releaseIcon[7]);
    button_power11->boundImageToHover(hoverIcon[7]);
    button_power11->setBounds(-20,-20,40,40);
    //button_power11->connect(button_power11,SIGNAL(fireAction()),this,SLOT(power()));
    this->shortcutsscene.addItem(button_power11);

    DButton *button_mouse11 = new DButton;
    button_mouse11->setPos(-130,-330 + 9*45);
    button_mouse11->setHoverEnableFlag(true);
    button_mouse11->boundImageToPress(pressIcon[8]);
    button_mouse11->boundImageToRelease(releaseIcon[8]);
    button_mouse11->boundImageToHover(hoverIcon[8]);
    button_mouse11->setBounds(-20,-20,40,40);
    //button_mouse11->connect(button_mouse11,SIGNAL(fireAction()),this,SLOT(mouse()));
    this->shortcutsscene.addItem(button_mouse11);

    DButton *button_keyboard11 = new DButton;
    button_keyboard11->setPos(-130,-330 + 10*45);
    button_keyboard11->setHoverEnableFlag(true);
    button_keyboard11->boundImageToPress(pressIcon[9]);
    button_keyboard11->boundImageToRelease(releaseIcon[9]);
    button_keyboard11->boundImageToHover(hoverIcon[9]);
    button_keyboard11->setBounds(-20,-20,40,40);
    //button_keyboard11->connect(button_keyboard11,SIGNAL(fireAction()),this,SLOT(keyboard()));
    this->shortcutsscene.addItem(button_keyboard11);

    DButton *button_shortcuts11 = new DButton;
    button_shortcuts11->setPos(-130,-330 + 11*45);
    button_shortcuts11->setHoverEnableFlag(true);
    button_shortcuts11->boundImageToPress(pressIcon[10]);
    button_shortcuts11->boundImageToRelease(releaseIcon[10]);
    button_shortcuts11->boundImageToHover(hoverIcon[10]);
    button_shortcuts11->setBounds(-20,-20,40,40);
    //button_shortcuts11->connect(button_shortcuts11,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    this->shortcutsscene.addItem(button_shortcuts11);

    DButton *button_menu11 = new DButton;
    button_menu11->setPos(-130,-330 + 12*45);
    button_menu11->setHoverEnableFlag(true);
    button_menu11->boundImageToPress(pressIcon[11]);
    button_menu11->boundImageToRelease(releaseIcon[11]);
    button_menu11->boundImageToHover(hoverIcon[11]);
    button_menu11->setBounds(-20,-20,40,40);
    //button_menu11->connect(button_menu11,SIGNAL(fireAction()),this,SLOT(menu()));
    this->shortcutsscene.addItem(button_menu11);

    DButton *button_system11 = new DButton;
    button_system11->setPos(-130,-330 + 13*45);
    button_system11->setHoverEnableFlag(true);
    button_system11->boundImageToPress(pressIcon[12]);
    button_system11->boundImageToRelease(releaseIcon[12]);
    button_system11->boundImageToHover(hoverIcon[12]);
    button_system11->setBounds(-20,-20,40,40);
    //button_system11->connect(button_system11,SIGNAL(fireAction()),this,SLOT(system()));
    this->shortcutsscene.addItem(button_system11);

    DButton *button_pow11 = new DButton;
    button_pow11->setPos(-130,-330 + 14*45);
    button_pow11->setHoverEnableFlag(true);
    button_pow11->boundImageToPress(pressIcon[14]);
    button_pow11->boundImageToRelease(releaseIcon[14]);
    button_pow11->boundImageToHover(hoverIcon[14]);
    button_pow11->setBounds(-20,-20,40,40);
    //button_pow11->connect(button_pow11,SIGNAL(fireAction()),this,SLOT(pow()));
    this->shortcutsscene.addItem(button_pow11);

}
