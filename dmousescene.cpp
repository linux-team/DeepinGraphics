#include "dmousescene.h"
#include "dbutton.h"

DMousescene::DMousescene()
{
    mousescene.setSceneRect(-150,-300,300,600);
    mousescene.addLine(-100,-400,-100,400);

    //侧边栏鼠标界面
    DButton *button_home9 = new DButton;
    button_home9->setPos(-130,-330 + 0*45);
    button_home9->setHoverEnableFlag(true);
    button_home9->boundImageToPress(pressIcon[13]);
    button_home9->boundImageToRelease(releaseIcon[13]);
    button_home9->boundImageToHover(hoverIcon[13]);
    button_home9->setBounds(-20,-20,40,40);
   // button_home9->connect(button_home9,SIGNAL(fireAction()),this,SLOT(home()));
    this->mousescene.addItem(button_home9);


    DButton *button_account9 = new DButton;
    button_account9->setPos(-130,-330 + 1*45);
    button_account9->setHoverEnableFlag(true);
    button_account9->boundImageToPress(pressIcon[0]);
    button_account9->boundImageToRelease(releaseIcon[0]);
    button_account9->boundImageToHover(hoverIcon[0]);
    button_account9->setBounds(-20,-20,40,40);
    //button_account9->connect(button_account9,SIGNAL(fireAction()),this,SLOT(account()));
    this->mousescene.addItem(button_account9);

    DButton *button_display9 = new DButton;
    button_display9->setPos(-130,-330 + 2*45);
    button_display9->setHoverEnableFlag(true);
    button_display9->boundImageToPress(pressIcon[1]);
    button_display9->boundImageToRelease(releaseIcon[1]);
    button_display9->boundImageToHover(hoverIcon[1]);
    button_display9->setBounds(-20,-20,40,40);
    //button_display9->connect(button_display9,SIGNAL(fireAction()),this,SLOT(display()));
    this->mousescene.addItem(button_display9);

    DButton *button_default9 = new DButton;
    button_default9->setPos(-130,-330 + 3*45);
    button_default9->setHoverEnableFlag(true);
    button_default9->boundImageToPress(pressIcon[2]);
    button_default9->boundImageToRelease(releaseIcon[2]);
    button_default9->boundImageToHover(hoverIcon[2]);
    button_default9->setBounds(-20,-20,40,40);
    //button_default9->connect(button_default9,SIGNAL(fireAction()),this,SLOT(default1()));
    this->mousescene.addItem(button_default9);

    DButton *button_personalization9 = new DButton;
    button_personalization9->setPos(-130,-330 + 4*45);
    button_personalization9->setHoverEnableFlag(true);
    button_personalization9->boundImageToPress(pressIcon[3]);
    button_personalization9->boundImageToRelease(releaseIcon[3]);
    button_personalization9->boundImageToHover(hoverIcon[3]);
    button_personalization9->setBounds(-20,-20,40,40);
    //button_personalization9->connect(button_personalization9,SIGNAL(fireAction()),this,SLOT(personalization()));
    this->mousescene.addItem(button_personalization9);

    DButton *button_network9 = new DButton;
    button_network9->setPos(-130,-330 + 5*45);
    button_network9->setHoverEnableFlag(true);
    button_network9->boundImageToPress(pressIcon[4]);
    button_network9->boundImageToRelease(releaseIcon[4]);
    button_network9->boundImageToHover(hoverIcon[4]);
    button_network9->setBounds(-20,-20,40,40);
    //button_network9->connect(button_network9,SIGNAL(fireAction()),this,SLOT(network()));
    this->mousescene.addItem(button_network9);

    DButton *button_sound9 = new DButton;
    button_sound9->setPos(-130,-330 + 6*45);
    button_sound9->setHoverEnableFlag(true);
    button_sound9->boundImageToPress(pressIcon[5]);
    button_sound9->boundImageToRelease(releaseIcon[5]);
    button_sound9->boundImageToHover(hoverIcon[5]);
    button_sound9->setBounds(-20,-20,40,40);
    //button_sound9->connect(button_sound9,SIGNAL(fireAction()),this,SLOT(sound()));
    this->mousescene.addItem(button_sound9);

    DButton *button_date9 = new DButton;
    button_date9->setPos(-130,-330 + 7*45);
    button_date9->setHoverEnableFlag(true);
    button_date9->boundImageToPress(pressIcon[6]);
    button_date9->boundImageToRelease(releaseIcon[6]);
    button_date9->boundImageToHover(hoverIcon[6]);
    button_date9->setBounds(-20,-20,40,40);
    //button_date9->connect(button_date9,SIGNAL(fireAction()),this,SLOT(date()));
    this->mousescene.addItem(button_date9);

    DButton *button_power9 = new DButton;
    button_power9->setPos(-130,-330 + 8*45);
    button_power9->setHoverEnableFlag(true);
    button_power9->boundImageToPress(pressIcon[7]);
    button_power9->boundImageToRelease(releaseIcon[7]);
    button_power9->boundImageToHover(hoverIcon[7]);
    button_power9->setBounds(-20,-20,40,40);
    //button_power9->connect(button_power9,SIGNAL(fireAction()),this,SLOT(power()));
    this->mousescene.addItem(button_power9);

    DButton *button_mouse9 = new DButton;
    button_mouse9->setPos(-130,-330 + 9*45);
    button_mouse9->setHoverEnableFlag(true);
    button_mouse9->boundImageToPress(pressIcon[8]);
    button_mouse9->boundImageToRelease(releaseIcon[8]);
    button_mouse9->boundImageToHover(hoverIcon[8]);
    button_mouse9->setBounds(-20,-20,40,40);
    //button_mouse9->connect(button_mouse9,SIGNAL(fireAction()),this,SLOT(mouse()));
    this->mousescene.addItem(button_mouse9);

    DButton *button_keyboard9 = new DButton;
    button_keyboard9->setPos(-130,-330 + 10*45);
    button_keyboard9->setHoverEnableFlag(true);
    button_keyboard9->boundImageToPress(pressIcon[9]);
    button_keyboard9->boundImageToRelease(releaseIcon[9]);
    button_keyboard9->boundImageToHover(hoverIcon[9]);
    button_keyboard9->setBounds(-20,-20,40,40);
    //button_keyboard9->connect(button_keyboard9,SIGNAL(fireAction()),this,SLOT(keyboard()));
    this->mousescene.addItem(button_keyboard9);

    DButton *button_shortcuts9 = new DButton;
    button_shortcuts9->setPos(-130,-330 + 11*45);
    button_shortcuts9->setHoverEnableFlag(true);
    button_shortcuts9->boundImageToPress(pressIcon[10]);
    button_shortcuts9->boundImageToRelease(releaseIcon[10]);
    button_shortcuts9->boundImageToHover(hoverIcon[10]);
    button_shortcuts9->setBounds(-20,-20,40,40);
    //button_shortcuts9->connect(button_shortcuts9,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    this->mousescene.addItem(button_shortcuts9);

    DButton *button_menu9 = new DButton;
    button_menu9->setPos(-130,-330 + 12*45);
    button_menu9->setHoverEnableFlag(true);
    button_menu9->boundImageToPress(pressIcon[11]);
    button_menu9->boundImageToRelease(releaseIcon[11]);
    button_menu9->boundImageToHover(hoverIcon[11]);
    button_menu9->setBounds(-20,-20,40,40);
    //button_menu9->connect(button_menu9,SIGNAL(fireAction()),this,SLOT(menu()));
    this->mousescene.addItem(button_menu9);

    DButton *button_system9 = new DButton;
    button_system9->setPos(-130,-330 + 13*45);
    button_system9->setHoverEnableFlag(true);
    button_system9->boundImageToPress(pressIcon[12]);
    button_system9->boundImageToRelease(releaseIcon[12]);
    button_system9->boundImageToHover(hoverIcon[12]);
    button_system9->setBounds(-20,-20,40,40);
    //button_system9->connect(button_system9,SIGNAL(fireAction()),this,SLOT(system()));
    this->mousescene.addItem(button_system9);

    DButton *button_pow9 = new DButton;
    button_pow9->setPos(-130,-330 + 14*45);
    button_pow9->setHoverEnableFlag(true);
    button_pow9->boundImageToPress(pressIcon[14]);
    button_pow9->boundImageToRelease(releaseIcon[14]);
    button_pow9->boundImageToHover(hoverIcon[14]);
    button_pow9->setBounds(-20,-20,40,40);
    //button_pow9->connect(button_pow9,SIGNAL(fireAction()),this,SLOT(pow()));
    this->mousescene.addItem(button_pow9);

}
