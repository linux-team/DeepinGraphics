#include "daccountscene.h"
#include "dbutton.h"


DAccountscene::DAccountscene()
{


    setSceneRect(-150,-300,300,600);
    addLine(-100,-400,-100,400);

    //侧边栏账户界面
    button_home1 = new DButton;
    button_home1->setPos(-130,-330 + 0*45);
    button_home1->setHoverEnableFlag(true);
    button_home1->boundImageToPress(pressIcon[13]);
    button_home1->boundImageToRelease(releaseIcon[13]);
    button_home1->boundImageToHover(hoverIcon[13]);
    button_home1->setBounds(-20,-20,40,40);
    //button_home1->connect(button_home1,SIGNAL(fireAction()),this,SLOT(home()));
    addItem(button_home1);


    DButton *button_account1 = new DButton;
    button_account1->setPos(-130,-330 + 1*45);
    button_account1->setHoverEnableFlag(true);
    button_account1->boundImageToPress(pressIcon[0]);
    button_account1->boundImageToRelease(releaseIcon[0]);
    button_account1->boundImageToHover(hoverIcon[0]);
    button_account1->setBounds(-20,-20,40,40);
   // button_account1->connect(button_account1,SIGNAL(fireAction()),this,SLOT(account()));
    addItem(button_account1);

    button_display1 = new DButton;
    button_display1->setPos(-130,-330 + 2*45);
    button_display1->setHoverEnableFlag(true);
    button_display1->boundImageToPress(pressIcon[1]);
    button_display1->boundImageToRelease(releaseIcon[1]);
    button_display1->boundImageToHover(hoverIcon[1]);
    button_display1->setBounds(-20,-20,40,40);
   // button_display1->connect(button_display1,SIGNAL(fireAction()),this,SLOT(display()));
    addItem(button_display1);

    button_default1 = new DButton;
    button_default1->setPos(-130,-330 + 3*45);
    button_default1->setHoverEnableFlag(true);
    button_default1->boundImageToPress(pressIcon[2]);
    button_default1->boundImageToRelease(releaseIcon[2]);
    button_default1->boundImageToHover(hoverIcon[2]);
    button_default1->setBounds(-20,-20,40,40);
   // button_default1->connect(button_default1,SIGNAL(fireAction()),this,SLOT(default1()));
    addItem(button_default1);

    button_personalization1 = new DButton;
    button_personalization1->setPos(-130,-330 + 4*45);
    button_personalization1->setHoverEnableFlag(true);
    button_personalization1->boundImageToPress(pressIcon[3]);
    button_personalization1->boundImageToRelease(releaseIcon[3]);
    button_personalization1->boundImageToHover(hoverIcon[3]);
    button_personalization1->setBounds(-20,-20,40,40);
    //button_personalization1->connect(button_personalization1,SIGNAL(fireAction()),this,SLOT(personalization()));
    addItem(button_personalization1);

    button_network1 = new DButton;
    button_network1->setPos(-130,-330 + 5*45);
    button_network1->setHoverEnableFlag(true);
    button_network1->boundImageToPress(pressIcon[4]);
    button_network1->boundImageToRelease(releaseIcon[4]);
    button_network1->boundImageToHover(hoverIcon[4]);
    button_network1->setBounds(-20,-20,40,40);
    //button_network1->connect(button_network1,SIGNAL(fireAction()),this,SLOT(network()));
    addItem(button_network1);

    button_sound1 = new DButton;
    button_sound1->setPos(-130,-330 + 6*45);
    button_sound1->setHoverEnableFlag(true);
    button_sound1->boundImageToPress(pressIcon[5]);
    button_sound1->boundImageToRelease(releaseIcon[5]);
    button_sound1->boundImageToHover(hoverIcon[5]);
    button_sound1->setBounds(-20,-20,40,40);
    //button_sound1->connect(button_sound1,SIGNAL(fireAction()),this,SLOT(sound()));
    addItem(button_sound1);

    button_date1 = new DButton;
    button_date1->setPos(-130,-330 + 7*45);
    button_date1->setHoverEnableFlag(true);
    button_date1->boundImageToPress(pressIcon[6]);
    button_date1->boundImageToRelease(releaseIcon[6]);
    button_date1->boundImageToHover(hoverIcon[6]);
    button_date1->setBounds(-20,-20,40,40);
    //button_date1->connect(button_date1,SIGNAL(fireAction()),this,SLOT(date()));
    addItem(button_date1);

    button_power1 = new DButton;
    button_power1->setPos(-130,-330 + 8*45);
    button_power1->setHoverEnableFlag(true);
    button_power1->boundImageToPress(pressIcon[7]);
    button_power1->boundImageToRelease(releaseIcon[7]);
    button_power1->boundImageToHover(hoverIcon[7]);
    button_power1->setBounds(-20,-20,40,40);
    //button_power1->connect(button_power1,SIGNAL(fireAction()),this,SLOT(power()));
    addItem(button_power1);

    button_mouse1 = new DButton;
    button_mouse1->setPos(-130,-330 + 9*45);
    button_mouse1->setHoverEnableFlag(true);
    button_mouse1->boundImageToPress(pressIcon[8]);
    button_mouse1->boundImageToRelease(releaseIcon[8]);
    button_mouse1->boundImageToHover(hoverIcon[8]);
    button_mouse1->setBounds(-20,-20,40,40);
   // button_mouse1->connect(button_mouse1,SIGNAL(fireAction()),this,SLOT(mouse()));
    addItem(button_mouse1);

    button_keyboard1 = new DButton;
    button_keyboard1->setPos(-130,-330 + 10*45);
    button_keyboard1->setHoverEnableFlag(true);
    button_keyboard1->boundImageToPress(pressIcon[9]);
    button_keyboard1->boundImageToRelease(releaseIcon[9]);
    button_keyboard1->boundImageToHover(hoverIcon[9]);
    button_keyboard1->setBounds(-20,-20,40,40);
    //button_keyboard1->connect(button_keyboard1,SIGNAL(fireAction()),this,SLOT(keyboard()));
    addItem(button_keyboard1);

    button_shortcuts1 = new DButton;
    button_shortcuts1->setPos(-130,-330 + 11*45);
    button_shortcuts1->setHoverEnableFlag(true);
    button_shortcuts1->boundImageToPress(pressIcon[10]);
    button_shortcuts1->boundImageToRelease(releaseIcon[10]);
    button_shortcuts1->boundImageToHover(hoverIcon[10]);
    button_shortcuts1->setBounds(-20,-20,40,40);
   // button_shortcuts1->connect(button_shortcuts1,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    addItem(button_shortcuts1);

    button_menu1 = new DButton;
    button_menu1->setPos(-130,-330 + 12*45);
    button_menu1->setHoverEnableFlag(true);
    button_menu1->boundImageToPress(pressIcon[11]);
    button_menu1->boundImageToRelease(releaseIcon[11]);
    button_menu1->boundImageToHover(hoverIcon[11]);
    button_menu1->setBounds(-20,-20,40,40);
   // button_menu1->connect(button_menu1,SIGNAL(fireAction()),this,SLOT(menu()));
    addItem(button_menu1);

    button_system1 = new DButton;
    button_system1->setPos(-130,-330 + 13*45);
    button_system1->setHoverEnableFlag(true);
    button_system1->boundImageToPress(pressIcon[12]);
    button_system1->boundImageToRelease(releaseIcon[12]);
    button_system1->boundImageToHover(hoverIcon[12]);
    button_system1->setBounds(-20,-20,40,40);
   // button_system1->connect(button_system1,SIGNAL(fireAction()),this,SLOT(system()));
    addItem(button_system1);

    button_pow1 = new DButton;
    button_pow1->setPos(-130,-330 + 14*45);
    button_pow1->setHoverEnableFlag(true);
    button_pow1->boundImageToPress(pressIcon[14]);
    button_pow1->boundImageToRelease(releaseIcon[14]);
    button_pow1->boundImageToHover(hoverIcon[14]);
    button_pow1->setBounds(-20,-20,40,40);
   // button_pow->connect(button_pow,SIGNAL(fireAction()),this,SLOT(pow()));
    addItem(button_pow1);


}


