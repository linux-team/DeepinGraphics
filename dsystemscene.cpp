#include "dsystemscene.h"
#include "dbutton.h"

DSystemscene::DSystemscene()
{
    systemscene.setSceneRect(-150,-300,300,600);
    systemscene.addLine(-100,-400,-100,400);

    //侧边栏系统信息界面
   DButton *button_home13 = new DButton;
   button_home13->setPos(-130,-330 + 0*45);
   button_home13->setHoverEnableFlag(true);
   button_home13->boundImageToPress(pressIcon[13]);
   button_home13->boundImageToRelease(releaseIcon[13]);
   button_home13->boundImageToHover(hoverIcon[13]);
   button_home13->setBounds(-20,-20,40,40);
   //button_home13->connect(button_home13,SIGNAL(fireAction()),this,SLOT(home()));
   this->systemscene.addItem(button_home13);


   DButton *button_account13 = new DButton;
   button_account13->setPos(-130,-330 + 1*45);
   button_account13->setHoverEnableFlag(true);
   button_account13->boundImageToPress(pressIcon[0]);
   button_account13->boundImageToRelease(releaseIcon[0]);
   button_account13->boundImageToHover(hoverIcon[0]);
   button_account13->setBounds(-20,-20,40,40);
   //button_account13->connect(button_account13,SIGNAL(fireAction()),this,SLOT(account()));
   this->systemscene.addItem(button_account13);

   DButton *button_display13 = new DButton;
   button_display13->setPos(-130,-330 + 2*45);
   button_display13->setHoverEnableFlag(true);
   button_display13->boundImageToPress(pressIcon[1]);
   button_display13->boundImageToRelease(releaseIcon[1]);
   button_display13->boundImageToHover(hoverIcon[1]);
   button_display13->setBounds(-20,-20,40,40);
   //button_display13->connect(button_display13,SIGNAL(fireAction()),this,SLOT(display()));
   this->systemscene.addItem(button_display13);

   DButton *button_default13 = new DButton;
   button_default13->setPos(-130,-330 + 3*45);
   button_default13->setHoverEnableFlag(true);
   button_default13->boundImageToPress(pressIcon[2]);
   button_default13->boundImageToRelease(releaseIcon[2]);
   button_default13->boundImageToHover(hoverIcon[2]);
   button_default13->setBounds(-20,-20,40,40);
   //button_default13->connect(button_default13,SIGNAL(fireAction()),this,SLOT(default1()));
   this->systemscene.addItem(button_default13);

   DButton *button_personalization13 = new DButton;
   button_personalization13->setPos(-130,-330 + 4*45);
   button_personalization13->setHoverEnableFlag(true);
   button_personalization13->boundImageToPress(pressIcon[3]);
   button_personalization13->boundImageToRelease(releaseIcon[3]);
   button_personalization13->boundImageToHover(hoverIcon[3]);
   button_personalization13->setBounds(-20,-20,40,40);
   //button_personalization13->connect(button_personalization13,SIGNAL(fireAction()),this,SLOT(personalization()));
   this->systemscene.addItem(button_personalization13);

   DButton *button_network13 = new DButton;
   button_network13->setPos(-130,-330 + 5*45);
   button_network13->setHoverEnableFlag(true);
   button_network13->boundImageToPress(pressIcon[4]);
   button_network13->boundImageToRelease(releaseIcon[4]);
   button_network13->boundImageToHover(hoverIcon[4]);
   button_network13->setBounds(-20,-20,40,40);
   //button_network13->connect(button_network13,SIGNAL(fireAction()),this,SLOT(network()));
   this->systemscene.addItem(button_network13);

   DButton *button_sound13 = new DButton;
   button_sound13->setPos(-130,-330 + 6*45);
   button_sound13->setHoverEnableFlag(true);
   button_sound13->boundImageToPress(pressIcon[5]);
   button_sound13->boundImageToRelease(releaseIcon[5]);
   button_sound13->boundImageToHover(hoverIcon[5]);
   button_sound13->setBounds(-20,-20,40,40);
   //button_sound13->connect(button_sound13,SIGNAL(fireAction()),this,SLOT(sound()));
   this->systemscene.addItem(button_sound13);

   DButton *button_date13= new DButton;
   button_date13->setPos(-130,-330 + 7*45);
   button_date13->setHoverEnableFlag(true);
   button_date13->boundImageToPress(pressIcon[6]);
   button_date13->boundImageToRelease(releaseIcon[6]);
   button_date13->boundImageToHover(hoverIcon[6]);
   button_date13->setBounds(-20,-20,40,40);
   //button_date13->connect(button_date13,SIGNAL(fireAction()),this,SLOT(date()));
   this->systemscene.addItem(button_date13);

   DButton *button_power13 = new DButton;
   button_power13->setPos(-130,-330 + 8*45);
   button_power13->setHoverEnableFlag(true);
   button_power13->boundImageToPress(pressIcon[7]);
   button_power13->boundImageToRelease(releaseIcon[7]);
   button_power13->boundImageToHover(hoverIcon[7]);
   button_power13->setBounds(-20,-20,40,40);
   //button_power13->connect(button_power13,SIGNAL(fireAction()),this,SLOT(power()));
   this->systemscene.addItem(button_power13);

   DButton *button_mouse13 = new DButton;
   button_mouse13->setPos(-130,-330 + 9*45);
   button_mouse13->setHoverEnableFlag(true);
   button_mouse13->boundImageToPress(pressIcon[8]);
   button_mouse13->boundImageToRelease(releaseIcon[8]);
   button_mouse13->boundImageToHover(hoverIcon[8]);
   button_mouse13->setBounds(-20,-20,40,40);
   //button_mouse13->connect(button_mouse13,SIGNAL(fireAction()),this,SLOT(mouse()));
   this->systemscene.addItem(button_mouse13);

   DButton *button_keyboard13 = new DButton;
   button_keyboard13->setPos(-130,-330 + 10*45);
   button_keyboard13->setHoverEnableFlag(true);
   button_keyboard13->boundImageToPress(pressIcon[9]);
   button_keyboard13->boundImageToRelease(releaseIcon[9]);
   button_keyboard13->boundImageToHover(hoverIcon[9]);
   button_keyboard13->setBounds(-20,-20,40,40);
   //button_keyboard13->connect(button_keyboard13,SIGNAL(fireAction()),this,SLOT(keyboard()));
   this->systemscene.addItem(button_keyboard13);

   DButton *button_shortcuts13 = new DButton;
   button_shortcuts13->setPos(-130,-330 + 11*45);
   button_shortcuts13->setHoverEnableFlag(true);
   button_shortcuts13->boundImageToPress(pressIcon[10]);
   button_shortcuts13->boundImageToRelease(releaseIcon[10]);
   button_shortcuts13->boundImageToHover(hoverIcon[10]);
   button_shortcuts13->setBounds(-20,-20,40,40);
   //button_shortcuts13->connect(button_shortcuts13,SIGNAL(fireAction()),this,SLOT(shortcuts()));
   this->systemscene.addItem(button_shortcuts13);

   DButton *button_menu13 = new DButton;
   button_menu13->setPos(-130,-330 + 12*45);
   button_menu13->setHoverEnableFlag(true);
   button_menu13->boundImageToPress(pressIcon[11]);
   button_menu13->boundImageToRelease(releaseIcon[11]);
   button_menu13->boundImageToHover(hoverIcon[11]);
   button_menu13->setBounds(-20,-20,40,40);
   //button_menu13->connect(button_menu13,SIGNAL(fireAction()),this,SLOT(menu()));
   this->systemscene.addItem(button_menu13);

   DButton *button_system13 = new DButton;
   button_system13->setPos(-130,-330 + 13*45);
   button_system13->setHoverEnableFlag(true);
   button_system13->boundImageToPress(pressIcon[12]);
   button_system13->boundImageToRelease(releaseIcon[12]);
   button_system13->boundImageToHover(hoverIcon[12]);
   button_system13->setBounds(-20,-20,40,40);
   //button_system13->connect(button_system13,SIGNAL(fireAction()),this,SLOT(system()));
   this->systemscene.addItem(button_system13);

   DButton *button_pow13 = new DButton;
   button_pow13->setPos(-130,-330 + 14*45);
   button_pow13->setHoverEnableFlag(true);
   button_pow13->boundImageToPress(pressIcon[14]);
   button_pow13->boundImageToRelease(releaseIcon[14]);
   button_pow13->boundImageToHover(hoverIcon[14]);
   button_pow13->setBounds(-20,-20,40,40);
   //button_pow13->connect(button_pow13,SIGNAL(fireAction()),this,SLOT(pow()));
   this->systemscene.addItem(button_pow13);

}
