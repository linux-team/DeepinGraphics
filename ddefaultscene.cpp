#include "ddefaultscene.h"
#include "dbutton.h"

DDefaultscene::DDefaultscene()
{
    setSceneRect(-150,-300,300,600);
    addLine(-100,-400,-100,400);

    //侧边栏默认程序界面
   button_home3 = new DButton;
   button_home3->setPos(-130,-330 + 0*45);
   button_home3->setHoverEnableFlag(true);
   button_home3->boundImageToPress(pressIcon[13]);
   button_home3->boundImageToRelease(releaseIcon[13]);
   button_home3->boundImageToHover(hoverIcon[13]);
   button_home3->setBounds(-20,-20,40,40);
   //button_home3->connect(button_home3,SIGNAL(fireAction()),this,SLOT(home()));
   addItem(button_home3);


   button_account3 = new DButton;
   button_account3->setPos(-130,-330 + 1*45);
   button_account3->setHoverEnableFlag(true);
   button_account3->boundImageToPress(pressIcon[0]);
   button_account3->boundImageToRelease(releaseIcon[0]);
   button_account3->boundImageToHover(hoverIcon[0]);
   button_account3->setBounds(-20,-20,40,40);
   //button_account3->connect(button_account3,SIGNAL(fireAction()),this,SLOT(account()));
   addItem(button_account3);

   button_display3 = new DButton;
   button_display3->setPos(-130,-330 + 2*45);
   button_display3->setHoverEnableFlag(true);
   button_display3->boundImageToPress(pressIcon[1]);
   button_display3->boundImageToRelease(releaseIcon[1]);
   button_display3->boundImageToHover(hoverIcon[1]);
   button_display3->setBounds(-20,-20,40,40);
   //button_display3->connect(button_display3,SIGNAL(fireAction()),this,SLOT(display()));
   addItem(button_display3);

   button_default3 = new DButton;
   button_default3->setPos(-130,-330 + 3*45);
   button_default3->setHoverEnableFlag(true);
   button_default3->boundImageToPress(pressIcon[2]);
   button_default3->boundImageToRelease(releaseIcon[2]);
   button_default3->boundImageToHover(hoverIcon[2]);
   button_default3->setBounds(-20,-20,40,40);
   //button_default3->connect(button_default3,SIGNAL(fireAction()),this,SLOT(default1()));
   addItem(button_default3);

   button_personalization3 = new DButton;
   button_personalization3->setPos(-130,-330 + 4*45);
   button_personalization3->setHoverEnableFlag(true);
   button_personalization3->boundImageToPress(pressIcon[3]);
   button_personalization3->boundImageToRelease(releaseIcon[3]);
   button_personalization3->boundImageToHover(hoverIcon[3]);
   button_personalization3->setBounds(-20,-20,40,40);
   //button_personalization3->connect(button_personalization3,SIGNAL(fireAction()),this,SLOT(personalization()));
   addItem(button_personalization3);

   button_network3 = new DButton;
   button_network3->setPos(-130,-330 + 5*45);
   button_network3->setHoverEnableFlag(true);
   button_network3->boundImageToPress(pressIcon[4]);
   button_network3->boundImageToRelease(releaseIcon[4]);
   button_network3->boundImageToHover(hoverIcon[4]);
   button_network3->setBounds(-20,-20,40,40);
   //button_network3->connect(button_network3,SIGNAL(fireAction()),this,SLOT(network()));
   addItem(button_network3);

   button_sound3 = new DButton;
   button_sound3->setPos(-130,-330 + 6*45);
   button_sound3->setHoverEnableFlag(true);
   button_sound3->boundImageToPress(pressIcon[5]);
   button_sound3->boundImageToRelease(releaseIcon[5]);
   button_sound3->boundImageToHover(hoverIcon[5]);
   button_sound3->setBounds(-20,-20,40,40);
   //button_sound3->connect(button_sound3,SIGNAL(fireAction()),this,SLOT(sound()));
   addItem(button_sound3);

   button_date3 = new DButton;
   button_date3->setPos(-130,-330 + 7*45);
   button_date3->setHoverEnableFlag(true);
   button_date3->boundImageToPress(pressIcon[6]);
   button_date3->boundImageToRelease(releaseIcon[6]);
   button_date3->boundImageToHover(hoverIcon[6]);
   button_date3->setBounds(-20,-20,40,40);
   //button_date3->connect(button_date3,SIGNAL(fireAction()),this,SLOT(date()));
   addItem(button_date3);

   button_power3 = new DButton;
   button_power3->setPos(-130,-330 + 8*45);
   button_power3->setHoverEnableFlag(true);
   button_power3->boundImageToPress(pressIcon[7]);
   button_power3->boundImageToRelease(releaseIcon[7]);
   button_power3->boundImageToHover(hoverIcon[7]);
   button_power3->setBounds(-20,-20,40,40);
   //button_power3->connect(button_power3,SIGNAL(fireAction()),this,SLOT(power()));
   addItem(button_power3);

   button_mouse3 = new DButton;
   button_mouse3->setPos(-130,-330 + 9*45);
   button_mouse3->setHoverEnableFlag(true);
   button_mouse3->boundImageToPress(pressIcon[8]);
   button_mouse3->boundImageToRelease(releaseIcon[8]);
   button_mouse3->boundImageToHover(hoverIcon[8]);
   button_mouse3->setBounds(-20,-20,40,40);
   //button_mouse3->connect(button_mouse3,SIGNAL(fireAction()),this,SLOT(mouse()));
   addItem(button_mouse3);

   button_keyboard3 = new DButton;
   button_keyboard3->setPos(-130,-330 + 10*45);
   button_keyboard3->setHoverEnableFlag(true);
   button_keyboard3->boundImageToPress(pressIcon[9]);
   button_keyboard3->boundImageToRelease(releaseIcon[9]);
   button_keyboard3->boundImageToHover(hoverIcon[9]);
   button_keyboard3->setBounds(-20,-20,40,40);
   //button_keyboard3->connect(button_keyboard2,SIGNAL(fireAction()),this,SLOT(keyboard()));
   addItem(button_keyboard3);

   button_shortcuts3 = new DButton;
   button_shortcuts3->setPos(-130,-330 + 11*45);
   button_shortcuts3->setHoverEnableFlag(true);
   button_shortcuts3->boundImageToPress(pressIcon[10]);
   button_shortcuts3->boundImageToRelease(releaseIcon[10]);
   button_shortcuts3->boundImageToHover(hoverIcon[10]);
   button_shortcuts3->setBounds(-20,-20,40,40);
   //button_shortcuts3->connect(button_shortcuts3,SIGNAL(fireAction()),this,SLOT(shortcuts()));
   addItem(button_shortcuts3);

   button_menu3 = new DButton;
   button_menu3->setPos(-130,-330 + 12*45);
   button_menu3->setHoverEnableFlag(true);
   button_menu3->boundImageToPress(pressIcon[11]);
   button_menu3->boundImageToRelease(releaseIcon[11]);
   button_menu3->boundImageToHover(hoverIcon[11]);
   button_menu3->setBounds(-20,-20,40,40);
   //button_menu3->connect(button_menu3,SIGNAL(fireAction()),this,SLOT(menu()));
   addItem(button_menu3);

   button_system3 = new DButton;
   button_system3->setPos(-130,-330 + 13*45);
   button_system3->setHoverEnableFlag(true);
   button_system3->boundImageToPress(pressIcon[12]);
   button_system3->boundImageToRelease(releaseIcon[12]);
   button_system3->boundImageToHover(hoverIcon[12]);
   button_system3->setBounds(-20,-20,40,40);
   //button_system3->connect(button_system3,SIGNAL(fireAction()),this,SLOT(system()));
   addItem(button_system3);

   button_pow3 = new DButton;
   button_pow3->setPos(-130,-330 + 14*45);
   button_pow3->setHoverEnableFlag(true);
   button_pow3->boundImageToPress(pressIcon[14]);
   button_pow3->boundImageToRelease(releaseIcon[14]);
   button_pow3->boundImageToHover(hoverIcon[14]);
   button_pow3->setBounds(-20,-20,40,40);
   //button_pow3->connect(button_pow3,SIGNAL(fireAction()),this,SLOT(pow()));
   addItem(button_pow3);

}
