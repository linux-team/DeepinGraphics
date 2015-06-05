#include "ddatescene.h"
#include "dbutton.h"

DDatescene::DDatescene()
{
    datescene.setSceneRect(-150,-300,300,600);
    datescene.addLine(-100,-400,-100,400);

    //侧边栏日期和时间界面
   DButton *button_home7 = new DButton;
   button_home7->setPos(-130,-330 + 0*45);
   button_home7->setHoverEnableFlag(true);
   button_home7->boundImageToPress(pressIcon[13]);
   button_home7->boundImageToRelease(releaseIcon[13]);
   button_home7->boundImageToHover(hoverIcon[13]);
   button_home7->setBounds(-20,-20,40,40);
  // button_home7->connect(button_home7,SIGNAL(fireAction()),this,SLOT(home()));
   this->datescene.addItem(button_home7);


   DButton *button_account7 = new DButton;
   button_account7->setPos(-130,-330 + 1*45);
   button_account7->setHoverEnableFlag(true);
   button_account7->boundImageToPress(pressIcon[0]);
   button_account7->boundImageToRelease(releaseIcon[0]);
   button_account7->boundImageToHover(hoverIcon[0]);
   button_account7->setBounds(-20,-20,40,40);
   //button_account7->connect(button_account7,SIGNAL(fireAction()),this,SLOT(account()));
   this->datescene.addItem(button_account7);

   DButton *button_display7 = new DButton;
   button_display7->setPos(-130,-330 + 2*45);
   button_display7->setHoverEnableFlag(true);
   button_display7->boundImageToPress(pressIcon[1]);
   button_display7->boundImageToRelease(releaseIcon[1]);
   button_display7->boundImageToHover(hoverIcon[1]);
   button_display7->setBounds(-20,-20,40,40);
   //button_display7->connect(button_display7,SIGNAL(fireAction()),this,SLOT(display()));
   this->datescene.addItem(button_display7);

   DButton *button_default7 = new DButton;
   button_default7->setPos(-130,-330 + 3*45);
   button_default7->setHoverEnableFlag(true);
   button_default7->boundImageToPress(pressIcon[2]);
   button_default7->boundImageToRelease(releaseIcon[2]);
   button_default7->boundImageToHover(hoverIcon[2]);
   button_default7->setBounds(-20,-20,40,40);
   //button_default7->connect(button_default7,SIGNAL(fireAction()),this,SLOT(default1()));
   this->datescene.addItem(button_default7);

   DButton *button_personalization7 = new DButton;
   button_personalization7->setPos(-130,-330 + 4*45);
   button_personalization7->setHoverEnableFlag(true);
   button_personalization7->boundImageToPress(pressIcon[3]);
   button_personalization7->boundImageToRelease(releaseIcon[3]);
   button_personalization7->boundImageToHover(hoverIcon[3]);
   button_personalization7->setBounds(-20,-20,40,40);
   //button_personalization7->connect(button_personalization7,SIGNAL(fireAction()),this,SLOT(personalization()));
   this->datescene.addItem(button_personalization7);

   DButton *button_network7 = new DButton;
   button_network7->setPos(-130,-330 + 5*45);
   button_network7->setHoverEnableFlag(true);
   button_network7->boundImageToPress(pressIcon[4]);
   button_network7->boundImageToRelease(releaseIcon[4]);
   button_network7->boundImageToHover(hoverIcon[4]);
   button_network7->setBounds(-20,-20,40,40);
   //button_network7->connect(button_network7,SIGNAL(fireAction()),this,SLOT(network()));
   this->datescene.addItem(button_network7);

   DButton *button_sound7 = new DButton;
   button_sound7->setPos(-130,-330 + 6*45);
   button_sound7->setHoverEnableFlag(true);
   button_sound7->boundImageToPress(pressIcon[5]);
   button_sound7->boundImageToRelease(releaseIcon[5]);
   button_sound7->boundImageToHover(hoverIcon[5]);
   button_sound7->setBounds(-20,-20,40,40);
   //button_sound7->connect(button_sound7,SIGNAL(fireAction()),this,SLOT(sound()));
   this->datescene.addItem(button_sound7);

   DButton *button_date7 = new DButton;
   button_date7->setPos(-130,-330 + 7*45);
   button_date7->setHoverEnableFlag(true);
   button_date7->boundImageToPress(pressIcon[6]);
   button_date7->boundImageToRelease(releaseIcon[6]);
   button_date7->boundImageToHover(hoverIcon[6]);
   button_date7->setBounds(-20,-20,40,40);
   //button_date7->connect(button_date7,SIGNAL(fireAction()),this,SLOT(date()));
   this->datescene.addItem(button_date7);

   DButton *button_power7 = new DButton;
   button_power7->setPos(-130,-330 + 8*45);
   button_power7->setHoverEnableFlag(true);
   button_power7->boundImageToPress(pressIcon[7]);
   button_power7->boundImageToRelease(releaseIcon[7]);
   button_power7->boundImageToHover(hoverIcon[7]);
   button_power7->setBounds(-20,-20,40,40);
   //button_power7->connect(button_power7,SIGNAL(fireAction()),this,SLOT(power()));
   this->datescene.addItem(button_power7);

   DButton *button_mouse7 = new DButton;
   button_mouse7->setPos(-130,-330 + 9*45);
   button_mouse7->setHoverEnableFlag(true);
   button_mouse7->boundImageToPress(pressIcon[8]);
   button_mouse7->boundImageToRelease(releaseIcon[8]);
   button_mouse7->boundImageToHover(hoverIcon[8]);
   button_mouse7->setBounds(-20,-20,40,40);
   //button_mouse7->connect(button_mouse7,SIGNAL(fireAction()),this,SLOT(mouse()));
   this->datescene.addItem(button_mouse7);

   DButton *button_keyboard7 = new DButton;
   button_keyboard7->setPos(-130,-330 + 10*45);
   button_keyboard7->setHoverEnableFlag(true);
   button_keyboard7->boundImageToPress(pressIcon[9]);
   button_keyboard7->boundImageToRelease(releaseIcon[9]);
   button_keyboard7->boundImageToHover(hoverIcon[9]);
   button_keyboard7->setBounds(-20,-20,40,40);
   //button_keyboard7->connect(button_keyboard7,SIGNAL(fireAction()),this,SLOT(keyboard()));
   this->datescene.addItem(button_keyboard7);

   DButton *button_shortcuts7 = new DButton;
   button_shortcuts7->setPos(-130,-330 + 11*45);
   button_shortcuts7->setHoverEnableFlag(true);
   button_shortcuts7->boundImageToPress(pressIcon[10]);
   button_shortcuts7->boundImageToRelease(releaseIcon[10]);
   button_shortcuts7->boundImageToHover(hoverIcon[10]);
   button_shortcuts7->setBounds(-20,-20,40,40);
   //button_shortcuts7->connect(button_shortcuts7,SIGNAL(fireAction()),this,SLOT(shortcuts()));
   this->datescene.addItem(button_shortcuts7);

   DButton *button_menu7 = new DButton;
   button_menu7->setPos(-130,-330 + 12*45);
   button_menu7->setHoverEnableFlag(true);
   button_menu7->boundImageToPress(pressIcon[11]);
   button_menu7->boundImageToRelease(releaseIcon[11]);
   button_menu7->boundImageToHover(hoverIcon[11]);
   button_menu7->setBounds(-20,-20,40,40);
   //button_menu7->connect(button_menu7,SIGNAL(fireAction()),this,SLOT(menu()));
   this->datescene.addItem(button_menu7);

   DButton *button_system7 = new DButton;
   button_system7->setPos(-130,-330 + 13*45);
   button_system7->setHoverEnableFlag(true);
   button_system7->boundImageToPress(pressIcon[12]);
   button_system7->boundImageToRelease(releaseIcon[12]);
   button_system7->boundImageToHover(hoverIcon[12]);
   button_system7->setBounds(-20,-20,40,40);
   //button_system7->connect(button_system7,SIGNAL(fireAction()),this,SLOT(system()));
   this->datescene.addItem(button_system7);

   DButton *button_pow7 = new DButton;
   button_pow7->setPos(-130,-330 + 14*45);
   button_pow7->setHoverEnableFlag(true);
   button_pow7->boundImageToPress(pressIcon[14]);
   button_pow7->boundImageToRelease(releaseIcon[14]);
   button_pow7->boundImageToHover(hoverIcon[14]);
   button_pow7->setBounds(-20,-20,40,40);
   //button_pow7->connect(button_pow7,SIGNAL(fireAction()),this,SLOT(pow()));
   this->datescene.addItem(button_pow7);

}
