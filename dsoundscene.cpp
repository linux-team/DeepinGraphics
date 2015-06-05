#include "dsoundscene.h"
#include "dsoundscene.h"
#include "dbutton.h"

DSoundscene::DSoundscene()
{
    soundscene.setSceneRect(-150,-300,300,600);
    soundscene.addLine(-100,-400,-100,400);

    //侧边栏声音界面
    DButton *button_home6 = new DButton;
    button_home6->setPos(-130,-330 + 0*45);
    button_home6->setHoverEnableFlag(true);
    button_home6->boundImageToPress(pressIcon[13]);
    button_home6->boundImageToRelease(releaseIcon[13]);
    button_home6->boundImageToHover(hoverIcon[13]);
    button_home6->setBounds(-20,-20,40,40);
    //button_home6->connect(button_home6,SIGNAL(fireAction()),this,SLOT(home()));
    this->soundscene.addItem(button_home6);


    DButton *button_account6 = new DButton;
    button_account6->setPos(-130,-330 + 1*45);
    button_account6->setHoverEnableFlag(true);
    button_account6->boundImageToPress(pressIcon[0]);
    button_account6->boundImageToRelease(releaseIcon[0]);
    button_account6->boundImageToHover(hoverIcon[0]);
    button_account6->setBounds(-20,-20,40,40);
    //button_account6->connect(button_account6,SIGNAL(fireAction()),this,SLOT(account()));
    this->soundscene.addItem(button_account6);

    DButton *button_display6 = new DButton;
    button_display6->setPos(-130,-330 + 2*45);
    button_display6->setHoverEnableFlag(true);
    button_display6->boundImageToPress(pressIcon[1]);
    button_display6->boundImageToRelease(releaseIcon[1]);
    button_display6->boundImageToHover(hoverIcon[1]);
    button_display6->setBounds(-20,-20,40,40);
    //button_display6->connect(button_display6,SIGNAL(fireAction()),this,SLOT(display()));
    this->soundscene.addItem(button_display6);

    DButton *button_default6 = new DButton;
    button_default6->setPos(-130,-330 + 3*45);
    button_default6->setHoverEnableFlag(true);
    button_default6->boundImageToPress(pressIcon[2]);
    button_default6->boundImageToRelease(releaseIcon[2]);
    button_default6->boundImageToHover(hoverIcon[2]);
    button_default6->setBounds(-20,-20,40,40);
    //button_default6->connect(button_default6,SIGNAL(fireAction()),this,SLOT(default1()));
    this->soundscene.addItem(button_default6);

    DButton *button_personalization6 = new DButton;
    button_personalization6->setPos(-130,-330 + 4*45);
    button_personalization6->setHoverEnableFlag(true);
    button_personalization6->boundImageToPress(pressIcon[3]);
    button_personalization6->boundImageToRelease(releaseIcon[3]);
    button_personalization6->boundImageToHover(hoverIcon[3]);
    button_personalization6->setBounds(-20,-20,40,40);
    //button_personalization6->connect(button_personalization6,SIGNAL(fireAction()),this,SLOT(personalization()));
    this->soundscene.addItem(button_personalization6);

    DButton *button_network6 = new DButton;
    button_network6->setPos(-130,-330 + 5*45);
    button_network6->setHoverEnableFlag(true);
    button_network6->boundImageToPress(pressIcon[4]);
    button_network6->boundImageToRelease(releaseIcon[4]);
    button_network6->boundImageToHover(hoverIcon[4]);
    button_network6->setBounds(-20,-20,40,40);
    //button_network6->connect(button_network6,SIGNAL(fireAction()),this,SLOT(network()));
    this->soundscene.addItem(button_network6);

    DButton *button_sound6 = new DButton;
    button_sound6->setPos(-130,-330 + 6*45);
    button_sound6->setHoverEnableFlag(true);
    button_sound6->boundImageToPress(pressIcon[5]);
    button_sound6->boundImageToRelease(releaseIcon[5]);
    button_sound6->boundImageToHover(hoverIcon[5]);
    button_sound6->setBounds(-20,-20,40,40);
    //button_sound6->connect(button_sound6,SIGNAL(fireAction()),this,SLOT(sound()));
    this->soundscene.addItem(button_sound6);

    DButton *button_date6 = new DButton;
    button_date6->setPos(-130,-330 + 7*45);
    button_date6->setHoverEnableFlag(true);
    button_date6->boundImageToPress(pressIcon[6]);
    button_date6->boundImageToRelease(releaseIcon[6]);
    button_date6->boundImageToHover(hoverIcon[6]);
    button_date6->setBounds(-20,-20,40,40);
    //button_date6->connect(button_date6,SIGNAL(fireAction()),this,SLOT(date()));
    this->soundscene.addItem(button_date6);

    DButton *button_power6 = new DButton;
    button_power6->setPos(-130,-330 + 8*45);
    button_power6->setHoverEnableFlag(true);
    button_power6->boundImageToPress(pressIcon[7]);
    button_power6->boundImageToRelease(releaseIcon[7]);
    button_power6->boundImageToHover(hoverIcon[7]);
    button_power6->setBounds(-20,-20,40,40);
    //button_power6->connect(button_power6,SIGNAL(fireAction()),this,SLOT(power()));
    this->soundscene.addItem(button_power6);

    DButton *button_mouse6 = new DButton;
    button_mouse6->setPos(-130,-330 + 9*45);
    button_mouse6->setHoverEnableFlag(true);
    button_mouse6->boundImageToPress(pressIcon[8]);
    button_mouse6->boundImageToRelease(releaseIcon[8]);
    button_mouse6->boundImageToHover(hoverIcon[8]);
    button_mouse6->setBounds(-20,-20,40,40);
    //button_mouse6->connect(button_mouse6,SIGNAL(fireAction()),this,SLOT(mouse()));
    this->soundscene.addItem(button_mouse6);

    DButton *button_keyboard6 = new DButton;
    button_keyboard6->setPos(-130,-330 + 10*45);
    button_keyboard6->setHoverEnableFlag(true);
    button_keyboard6->boundImageToPress(pressIcon[9]);
    button_keyboard6->boundImageToRelease(releaseIcon[9]);
    button_keyboard6->boundImageToHover(hoverIcon[9]);
    button_keyboard6->setBounds(-20,-20,40,40);
    //button_keyboard6->connect(button_keyboard6,SIGNAL(fireAction()),this,SLOT(keyboard()));
    this->soundscene.addItem(button_keyboard6);

    DButton *button_shortcuts6 = new DButton;
    button_shortcuts6->setPos(-130,-330 + 11*45);
    button_shortcuts6->setHoverEnableFlag(true);
    button_shortcuts6->boundImageToPress(pressIcon[10]);
    button_shortcuts6->boundImageToRelease(releaseIcon[10]);
    button_shortcuts6->boundImageToHover(hoverIcon[10]);
    button_shortcuts6->setBounds(-20,-20,40,40);
    //button_shortcuts6->connect(button_shortcuts6,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    this->soundscene.addItem(button_shortcuts6);

    DButton *button_menu6 = new DButton;
    button_menu6->setPos(-130,-330 + 12*45);
    button_menu6->setHoverEnableFlag(true);
    button_menu6->boundImageToPress(pressIcon[11]);
    button_menu6->boundImageToRelease(releaseIcon[11]);
    button_menu6->boundImageToHover(hoverIcon[11]);
    button_menu6->setBounds(-20,-20,40,40);
    //button_menu6->connect(button_menu6,SIGNAL(fireAction()),this,SLOT(menu()));
    this->soundscene.addItem(button_menu6);

    DButton *button_system6 = new DButton;
    button_system6->setPos(-130,-330 + 13*45);
    button_system6->setHoverEnableFlag(true);
    button_system6->boundImageToPress(pressIcon[12]);
    button_system6->boundImageToRelease(releaseIcon[12]);
    button_system6->boundImageToHover(hoverIcon[12]);
    button_system6->setBounds(-20,-20,40,40);
    //button_system6->connect(button_system6,SIGNAL(fireAction()),this,SLOT(system()));
    this->soundscene.addItem(button_system6);

    DButton *button_pow6 = new DButton;
    button_pow6->setPos(-130,-330 + 14*45);
    button_pow6->setHoverEnableFlag(true);
    button_pow6->boundImageToPress(pressIcon[14]);
    button_pow6->boundImageToRelease(releaseIcon[14]);
    button_pow6->boundImageToHover(hoverIcon[14]);
    button_pow6->setBounds(-20,-20,40,40);
    //button_pow6->connect(button_pow6,SIGNAL(fireAction()),this,SLOT(pow()));
    this->soundscene.addItem(button_pow6);

}
