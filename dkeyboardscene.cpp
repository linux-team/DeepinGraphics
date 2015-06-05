#include "dkeyboardscene.h"
#include "dbutton.h"

DKeyboardscene::DKeyboardscene()
{
    keyboardscene.setSceneRect(-150,-300,300,600);
    keyboardscene.addLine(-100,-400,-100,400);

    //侧边栏键盘和语言界面
   DButton *button_home10 = new DButton;
   button_home10->setPos(-130,-330 + 0*45);
   button_home10->setHoverEnableFlag(true);
   button_home10->boundImageToPress(pressIcon[13]);
   button_home10->boundImageToRelease(releaseIcon[13]);
   button_home10->boundImageToHover(hoverIcon[13]);
   button_home10->setBounds(-20,-20,40,40);
   //button_home10->connect(button_home10,SIGNAL(fireAction()),this,SLOT(home()));
   this->keyboardscene.addItem(button_home10);


   DButton *button_account10 = new DButton;
   button_account10->setPos(-130,-330 + 1*45);
   button_account10->setHoverEnableFlag(true);
   button_account10->boundImageToPress(pressIcon[0]);
   button_account10->boundImageToRelease(releaseIcon[0]);
   button_account10->boundImageToHover(hoverIcon[0]);
   button_account10->setBounds(-20,-20,40,40);
   //button_account10->connect(button_account10,SIGNAL(fireAction()),this,SLOT(account()));
   this->keyboardscene.addItem(button_account10);

   DButton *button_display10 = new DButton;
   button_display10->setPos(-130,-330 + 2*45);
   button_display10->setHoverEnableFlag(true);
   button_display10->boundImageToPress(pressIcon[1]);
   button_display10->boundImageToRelease(releaseIcon[1]);
   button_display10->boundImageToHover(hoverIcon[1]);
   button_display10->setBounds(-20,-20,40,40);
   //button_display10->connect(button_display10,SIGNAL(fireAction()),this,SLOT(display()));
   this->keyboardscene.addItem(button_display10);

   DButton *button_default10 = new DButton;
   button_default10->setPos(-130,-330 + 3*45);
   button_default10->setHoverEnableFlag(true);
   button_default10->boundImageToPress(pressIcon[2]);
   button_default10->boundImageToRelease(releaseIcon[2]);
   button_default10->boundImageToHover(hoverIcon[2]);
   button_default10->setBounds(-20,-20,40,40);
   //button_default10->connect(button_default10,SIGNAL(fireAction()),this,SLOT(default1()));
   this->keyboardscene.addItem(button_default10);

   DButton *button_personalization10 = new DButton;
   button_personalization10->setPos(-130,-330 + 4*45);
   button_personalization10->setHoverEnableFlag(true);
   button_personalization10->boundImageToPress(pressIcon[3]);
   button_personalization10->boundImageToRelease(releaseIcon[3]);
   button_personalization10->boundImageToHover(hoverIcon[3]);
   button_personalization10->setBounds(-20,-20,40,40);
   //button_personalization10->connect(button_personalization10,SIGNAL(fireAction()),this,SLOT(personalization()));
   this->keyboardscene.addItem(button_personalization10);

   DButton *button_network10 = new DButton;
   button_network10->setPos(-130,-330 + 5*45);
   button_network10->setHoverEnableFlag(true);
   button_network10->boundImageToPress(pressIcon[4]);
   button_network10->boundImageToRelease(releaseIcon[4]);
   button_network10->boundImageToHover(hoverIcon[4]);
   button_network10->setBounds(-20,-20,40,40);
   //button_network10->connect(button_network10,SIGNAL(fireAction()),this,SLOT(network()));
   this->keyboardscene.addItem(button_network10);

   DButton *button_sound10 = new DButton;
   button_sound10->setPos(-130,-330 + 6*45);
   button_sound10->setHoverEnableFlag(true);
   button_sound10->boundImageToPress(pressIcon[5]);
   button_sound10->boundImageToRelease(releaseIcon[5]);
   button_sound10->boundImageToHover(hoverIcon[5]);
   button_sound10->setBounds(-20,-20,40,40);
   //button_sound10->connect(button_sound10,SIGNAL(fireAction()),this,SLOT(sound()));
   this->keyboardscene.addItem(button_sound10);

   DButton *button_date10 = new DButton;
   button_date10->setPos(-130,-330 + 7*45);
   button_date10->setHoverEnableFlag(true);
   button_date10->boundImageToPress(pressIcon[6]);
   button_date10->boundImageToRelease(releaseIcon[6]);
   button_date10->boundImageToHover(hoverIcon[6]);
   button_date10->setBounds(-20,-20,40,40);
   //button_date10->connect(button_date10,SIGNAL(fireAction()),this,SLOT(date()));
   this->keyboardscene.addItem(button_date10);

   DButton *button_power10 = new DButton;
   button_power10->setPos(-130,-330 + 8*45);
   button_power10->setHoverEnableFlag(true);
   button_power10->boundImageToPress(pressIcon[7]);
   button_power10->boundImageToRelease(releaseIcon[7]);
   button_power10->boundImageToHover(hoverIcon[7]);
   button_power10->setBounds(-20,-20,40,40);
   //button_power10->connect(button_power10,SIGNAL(fireAction()),this,SLOT(power()));
   this->keyboardscene.addItem(button_power10);

   DButton *button_mouse10 = new DButton;
   button_mouse10->setPos(-130,-330 + 9*45);
   button_mouse10->setHoverEnableFlag(true);
   button_mouse10->boundImageToPress(pressIcon[8]);
   button_mouse10->boundImageToRelease(releaseIcon[8]);
   button_mouse10->boundImageToHover(hoverIcon[8]);
   button_mouse10->setBounds(-20,-20,40,40);
   //button_mouse10->connect(button_mouse10,SIGNAL(fireAction()),this,SLOT(mouse()));
   this->keyboardscene.addItem(button_mouse10);

   DButton *button_keyboard10 = new DButton;
   button_keyboard10->setPos(-130,-330 + 10*45);
   button_keyboard10->setHoverEnableFlag(true);
   button_keyboard10->boundImageToPress(pressIcon[9]);
   button_keyboard10->boundImageToRelease(releaseIcon[9]);
   button_keyboard10->boundImageToHover(hoverIcon[9]);
   button_keyboard10->setBounds(-20,-20,40,40);
   //button_keyboard10->connect(button_keyboard10,SIGNAL(fireAction()),this,SLOT(keyboard()));
   this->keyboardscene.addItem(button_keyboard10);

   DButton *button_shortcuts10 = new DButton;
   button_shortcuts10->setPos(-130,-330 + 11*45);
   button_shortcuts10->setHoverEnableFlag(true);
   button_shortcuts10->boundImageToPress(pressIcon[10]);
   button_shortcuts10->boundImageToRelease(releaseIcon[10]);
   button_shortcuts10->boundImageToHover(hoverIcon[10]);
   button_shortcuts10->setBounds(-20,-20,40,40);
   //button_shortcuts10->connect(button_shortcuts10,SIGNAL(fireAction()),this,SLOT(shortcuts()));
   this->keyboardscene.addItem(button_shortcuts10);

   DButton *button_menu10 = new DButton;
   button_menu10->setPos(-130,-330 + 12*45);
   button_menu10->setHoverEnableFlag(true);
   button_menu10->boundImageToPress(pressIcon[11]);
   button_menu10->boundImageToRelease(releaseIcon[11]);
   button_menu10->boundImageToHover(hoverIcon[11]);
   button_menu10->setBounds(-20,-20,40,40);
   //button_menu10->connect(button_menu10,SIGNAL(fireAction()),this,SLOT(menu()));
   this->keyboardscene.addItem(button_menu10);

   DButton *button_system10 = new DButton;
   button_system10->setPos(-130,-330 + 13*45);
   button_system10->setHoverEnableFlag(true);
   button_system10->boundImageToPress(pressIcon[12]);
   button_system10->boundImageToRelease(releaseIcon[12]);
   button_system10->boundImageToHover(hoverIcon[12]);
   button_system10->setBounds(-20,-20,40,40);
   //button_system10->connect(button_system10,SIGNAL(fireAction()),this,SLOT(system()));
   this->keyboardscene.addItem(button_system10);

   DButton *button_pow10 = new DButton;
   button_pow10->setPos(-130,-330 + 14*45);
   button_pow10->setHoverEnableFlag(true);
   button_pow10->boundImageToPress(pressIcon[14]);
   button_pow10->boundImageToRelease(releaseIcon[14]);
   button_pow10->boundImageToHover(hoverIcon[14]);
   button_pow10->setBounds(-20,-20,40,40);
   //button_pow10->connect(button_pow10,SIGNAL(fireAction()),this,SLOT(pow()));
   this->keyboardscene.addItem(button_pow10);

}
