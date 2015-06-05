#include "dpowerscene.h"
#include "dbutton.h"
DPowerscene::DPowerscene()
{
    powerscene.setSceneRect(-150,-300,300,600);
    powerscene.addLine(-100,-400,-100,400);

    //侧边栏电源管理界面
   DButton *button_home8 = new DButton;
   button_home8->setPos(-130,-330 + 0*45);
   button_home8->setHoverEnableFlag(true);
   button_home8->boundImageToPress(pressIcon[13]);
   button_home8->boundImageToRelease(releaseIcon[13]);
   button_home8->boundImageToHover(hoverIcon[13]);
   button_home8->setBounds(-20,-20,40,40);
   //button_home8->connect(button_home8,SIGNAL(fireAction()),this,SLOT(home()));
   this->powerscene.addItem(button_home8);


   DButton *button_account8 = new DButton;
   button_account8->setPos(-130,-330 + 1*45);
   button_account8->setHoverEnableFlag(true);
   button_account8->boundImageToPress(pressIcon[0]);
   button_account8->boundImageToRelease(releaseIcon[0]);
   button_account8->boundImageToHover(hoverIcon[0]);
   button_account8->setBounds(-20,-20,40,40);
   //button_account8->connect(button_account8,SIGNAL(fireAction()),this,SLOT(account()));
   this->powerscene.addItem(button_account8);

   DButton *button_display8 = new DButton;
   button_display8->setPos(-130,-330 + 2*45);
   button_display8->setHoverEnableFlag(true);
   button_display8->boundImageToPress(pressIcon[1]);
   button_display8->boundImageToRelease(releaseIcon[1]);
   button_display8->boundImageToHover(hoverIcon[1]);
   button_display8->setBounds(-20,-20,40,40);
   //button_display8->connect(button_display8,SIGNAL(fireAction()),this,SLOT(display()));
   this->powerscene.addItem(button_display8);

   DButton *button_default8 = new DButton;
   button_default8->setPos(-130,-330 + 3*45);
   button_default8->setHoverEnableFlag(true);
   button_default8->boundImageToPress(pressIcon[2]);
   button_default8->boundImageToRelease(releaseIcon[2]);
   button_default8->boundImageToHover(hoverIcon[2]);
   button_default8->setBounds(-20,-20,40,40);
   //button_default8->connect(button_default8,SIGNAL(fireAction()),this,SLOT(default1()));
   this->powerscene.addItem(button_default8);

   DButton *button_personalization8 = new DButton;
   button_personalization8->setPos(-130,-330 + 4*45);
   button_personalization8->setHoverEnableFlag(true);
   button_personalization8->boundImageToPress(pressIcon[3]);
   button_personalization8->boundImageToRelease(releaseIcon[3]);
   button_personalization8->boundImageToHover(hoverIcon[3]);
   button_personalization8->setBounds(-20,-20,40,40);
   //button_personalization8->connect(button_personalization8,SIGNAL(fireAction()),this,SLOT(personalization()));
   this->powerscene.addItem(button_personalization8);

   DButton *button_network8 = new DButton;
   button_network8->setPos(-130,-330 + 5*45);
   button_network8->setHoverEnableFlag(true);
   button_network8->boundImageToPress(pressIcon[4]);
   button_network8->boundImageToRelease(releaseIcon[4]);
   button_network8->boundImageToHover(hoverIcon[4]);
   button_network8->setBounds(-20,-20,40,40);
   //button_network8->connect(button_network8,SIGNAL(fireAction()),this,SLOT(network()));
   this->powerscene.addItem(button_network8);

   DButton *button_sound8 = new DButton;
   button_sound8->setPos(-130,-330 + 6*45);
   button_sound8->setHoverEnableFlag(true);
   button_sound8->boundImageToPress(pressIcon[5]);
   button_sound8->boundImageToRelease(releaseIcon[5]);
   button_sound8->boundImageToHover(hoverIcon[5]);
   button_sound8->setBounds(-20,-20,40,40);
   //button_sound8->connect(button_sound8,SIGNAL(fireAction()),this,SLOT(sound()));
   this->powerscene.addItem(button_sound8);

   DButton *button_date8 = new DButton;
   button_date8->setPos(-130,-330 + 7*45);
   button_date8->setHoverEnableFlag(true);
   button_date8->boundImageToPress(pressIcon[6]);
   button_date8->boundImageToRelease(releaseIcon[6]);
   button_date8->boundImageToHover(hoverIcon[6]);
   button_date8->setBounds(-20,-20,40,40);
   //button_date8->connect(button_date8,SIGNAL(fireAction()),this,SLOT(date()));
   this->powerscene.addItem(button_date8);

   DButton *button_power8 = new DButton;
   button_power8->setPos(-130,-330 + 8*45);
   button_power8->setHoverEnableFlag(true);
   button_power8->boundImageToPress(pressIcon[7]);
   button_power8->boundImageToRelease(releaseIcon[7]);
   button_power8->boundImageToHover(hoverIcon[7]);
   button_power8->setBounds(-20,-20,40,40);
   //button_power8->connect(button_power8,SIGNAL(fireAction()),this,SLOT(power()));
   this->powerscene.addItem(button_power8);

   DButton *button_mouse8 = new DButton;
   button_mouse8->setPos(-130,-330 + 9*45);
   button_mouse8->setHoverEnableFlag(true);
   button_mouse8->boundImageToPress(pressIcon[8]);
   button_mouse8->boundImageToRelease(releaseIcon[8]);
   button_mouse8->boundImageToHover(hoverIcon[8]);
   button_mouse8->setBounds(-20,-20,40,40);
   //button_mouse8->connect(button_mouse8,SIGNAL(fireAction()),this,SLOT(mouse()));
   this->powerscene.addItem(button_mouse8);

   DButton *button_keyboard8 = new DButton;
   button_keyboard8->setPos(-130,-330 + 10*45);
   button_keyboard8->setHoverEnableFlag(true);
   button_keyboard8->boundImageToPress(pressIcon[9]);
   button_keyboard8->boundImageToRelease(releaseIcon[9]);
   button_keyboard8->boundImageToHover(hoverIcon[9]);
   button_keyboard8->setBounds(-20,-20,40,40);
   //button_keyboard8->connect(button_keyboard8,SIGNAL(fireAction()),this,SLOT(keyboard()));
   this->powerscene.addItem(button_keyboard8);

   DButton *button_shortcuts8 = new DButton;
   button_shortcuts8->setPos(-130,-330 + 11*45);
   button_shortcuts8->setHoverEnableFlag(true);
   button_shortcuts8->boundImageToPress(pressIcon[10]);
   button_shortcuts8->boundImageToRelease(releaseIcon[10]);
   button_shortcuts8->boundImageToHover(hoverIcon[10]);
   button_shortcuts8->setBounds(-20,-20,40,40);
   //button_shortcuts8->connect(button_shortcuts8,SIGNAL(fireAction()),this,SLOT(shortcuts()));
   this->powerscene.addItem(button_shortcuts8);

   DButton *button_menu8 = new DButton;
   button_menu8->setPos(-130,-330 + 12*45);
   button_menu8->setHoverEnableFlag(true);
   button_menu8->boundImageToPress(pressIcon[11]);
   button_menu8->boundImageToRelease(releaseIcon[11]);
   button_menu8->boundImageToHover(hoverIcon[11]);
   button_menu8->setBounds(-20,-20,40,40);
   //button_menu8->connect(button_menu8,SIGNAL(fireAction()),this,SLOT(menu()));
   this->powerscene.addItem(button_menu8);

   DButton *button_system8 = new DButton;
   button_system8->setPos(-130,-330 + 13*45);
   button_system8->setHoverEnableFlag(true);
   button_system8->boundImageToPress(pressIcon[12]);
   button_system8->boundImageToRelease(releaseIcon[12]);
   button_system8->boundImageToHover(hoverIcon[12]);
   button_system8->setBounds(-20,-20,40,40);
   //button_system8->connect(button_system8,SIGNAL(fireAction()),this,SLOT(system()));
   this->powerscene.addItem(button_system8);

   DButton *button_pow8 = new DButton;
   button_pow8->setPos(-130,-330 + 14*45);
   button_pow8->setHoverEnableFlag(true);
   button_pow8->boundImageToPress(pressIcon[14]);
   button_pow8->boundImageToRelease(releaseIcon[14]);
   button_pow8->boundImageToHover(hoverIcon[14]);
   button_pow8->setBounds(-20,-20,40,40);
   //button_pow8->connect(button_pow8,SIGNAL(fireAction()),this,SLOT(pow()));
   this->powerscene.addItem(button_pow8);
}
