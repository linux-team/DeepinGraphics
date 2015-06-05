#include "dmenuscene.h"
#include "dbutton.h"
DMenuscene::DMenuscene()
{

    menuscene.setSceneRect(-150,-300,300,600);
    menuscene.addLine(-100,-400,-100,400);

    //侧边栏启动界面
     DButton *button_home12 = new DButton;
     button_home12->setPos(-130,-330 + 0*45);
     button_home12->setHoverEnableFlag(true);
     button_home12->boundImageToPress(pressIcon[13]);
     button_home12->boundImageToRelease(releaseIcon[13]);
     button_home12->boundImageToHover(hoverIcon[13]);
     button_home12->setBounds(-20,-20,40,40);
     //button_home12->connect(button_home12,SIGNAL(fireAction()),this,SLOT(home()));
     this->menuscene.addItem(button_home12);


     DButton *button_account12 = new DButton;
     button_account12->setPos(-130,-330 + 1*45);
     button_account12->setHoverEnableFlag(true);
     button_account12->boundImageToPress(pressIcon[0]);
     button_account12->boundImageToRelease(releaseIcon[0]);
     button_account12->boundImageToHover(hoverIcon[0]);
     button_account12->setBounds(-20,-20,40,40);
     //button_account12->connect(button_account12,SIGNAL(fireAction()),this,SLOT(account()));
     this->menuscene.addItem(button_account12);

     DButton *button_display12 = new DButton;
     button_display12->setPos(-130,-330 + 2*45);
     button_display12->setHoverEnableFlag(true);
     button_display12->boundImageToPress(pressIcon[1]);
     button_display12->boundImageToRelease(releaseIcon[1]);
     button_display12->boundImageToHover(hoverIcon[1]);
     button_display12->setBounds(-20,-20,40,40);
     //button_display12->connect(button_display12,SIGNAL(fireAction()),this,SLOT(display()));
     this->menuscene.addItem(button_display12);

     DButton *button_default12 = new DButton;
     button_default12->setPos(-130,-330 + 3*45);
     button_default12->setHoverEnableFlag(true);
     button_default12->boundImageToPress(pressIcon[2]);
     button_default12->boundImageToRelease(releaseIcon[2]);
     button_default12->boundImageToHover(hoverIcon[2]);
     button_default12->setBounds(-20,-20,40,40);
     //button_default12->connect(button_default12,SIGNAL(fireAction()),this,SLOT(default1()));
     this->menuscene.addItem(button_default12);

     DButton *button_personalization12 = new DButton;
     button_personalization12->setPos(-130,-330 + 4*45);
     button_personalization12->setHoverEnableFlag(true);
     button_personalization12->boundImageToPress(pressIcon[3]);
     button_personalization12->boundImageToRelease(releaseIcon[3]);
     button_personalization12->boundImageToHover(hoverIcon[3]);
     button_personalization12->setBounds(-20,-20,40,40);
     //button_personalization12->connect(button_personalization12,SIGNAL(fireAction()),this,SLOT(personalization()));
     this->menuscene.addItem(button_personalization12);

     DButton *button_network12 = new DButton;
     button_network12->setPos(-130,-330 + 5*45);
     button_network12->setHoverEnableFlag(true);
     button_network12->boundImageToPress(pressIcon[4]);
     button_network12->boundImageToRelease(releaseIcon[4]);
     button_network12->boundImageToHover(hoverIcon[4]);
     button_network12->setBounds(-20,-20,40,40);
     //button_network12->connect(button_network12,SIGNAL(fireAction()),this,SLOT(network()));
     this->menuscene.addItem(button_network12);

     DButton *button_sound12 = new DButton;
     button_sound12->setPos(-130,-330 + 6*45);
     button_sound12->setHoverEnableFlag(true);
     button_sound12->boundImageToPress(pressIcon[5]);
     button_sound12->boundImageToRelease(releaseIcon[5]);
     button_sound12->boundImageToHover(hoverIcon[5]);
     button_sound12->setBounds(-20,-20,40,40);
     //button_sound12->connect(button_sound12,SIGNAL(fireAction()),this,SLOT(sound()));
     this->menuscene.addItem(button_sound12);

     DButton *button_date12= new DButton;
     button_date12->setPos(-130,-330 + 7*45);
     button_date12->setHoverEnableFlag(true);
     button_date12->boundImageToPress(pressIcon[6]);
     button_date12->boundImageToRelease(releaseIcon[6]);
     button_date12->boundImageToHover(hoverIcon[6]);
     button_date12->setBounds(-20,-20,40,40);
     //button_date12->connect(button_date12,SIGNAL(fireAction()),this,SLOT(date()));
     this->menuscene.addItem(button_date12);

     DButton *button_power12 = new DButton;
     button_power12->setPos(-130,-330 + 8*45);
     button_power12->setHoverEnableFlag(true);
     button_power12->boundImageToPress(pressIcon[7]);
     button_power12->boundImageToRelease(releaseIcon[7]);
     button_power12->boundImageToHover(hoverIcon[7]);
     button_power12->setBounds(-20,-20,40,40);
     //button_power12->connect(button_power12,SIGNAL(fireAction()),this,SLOT(power()));
     this->menuscene.addItem(button_power12);

     DButton *button_mouse12 = new DButton;
     button_mouse12->setPos(-130,-330 + 9*45);
     button_mouse12->setHoverEnableFlag(true);
     button_mouse12->boundImageToPress(pressIcon[8]);
     button_mouse12->boundImageToRelease(releaseIcon[8]);
     button_mouse12->boundImageToHover(hoverIcon[8]);
     button_mouse12->setBounds(-20,-20,40,40);
     //button_mouse12->connect(button_mouse12,SIGNAL(fireAction()),this,SLOT(mouse()));
     this->menuscene.addItem(button_mouse12);

     DButton *button_keyboard12 = new DButton;
     button_keyboard12->setPos(-130,-330 + 10*45);
     button_keyboard12->setHoverEnableFlag(true);
     button_keyboard12->boundImageToPress(pressIcon[9]);
     button_keyboard12->boundImageToRelease(releaseIcon[9]);
     button_keyboard12->boundImageToHover(hoverIcon[9]);
     button_keyboard12->setBounds(-20,-20,40,40);
     //button_keyboard12->connect(button_keyboard12,SIGNAL(fireAction()),this,SLOT(keyboard()));
     this->menuscene.addItem(button_keyboard12);

     DButton *button_shortcuts12 = new DButton;
     button_shortcuts12->setPos(-130,-330 + 11*45);
     button_shortcuts12->setHoverEnableFlag(true);
     button_shortcuts12->boundImageToPress(pressIcon[10]);
     button_shortcuts12->boundImageToRelease(releaseIcon[10]);
     button_shortcuts12->boundImageToHover(hoverIcon[10]);
     button_shortcuts12->setBounds(-20,-20,40,40);
     //button_shortcuts12->connect(button_shortcuts12,SIGNAL(fireAction()),this,SLOT(shortcuts()));
     this->menuscene.addItem(button_shortcuts12);

     DButton *button_menu12 = new DButton;
     button_menu12->setPos(-130,-330 + 12*45);
     button_menu12->setHoverEnableFlag(true);
     button_menu12->boundImageToPress(pressIcon[11]);
     button_menu12->boundImageToRelease(releaseIcon[11]);
     button_menu12->boundImageToHover(hoverIcon[11]);
     button_menu12->setBounds(-20,-20,40,40);
     //button_menu12->connect(button_menu12,SIGNAL(fireAction()),this,SLOT(menu()));
     this->menuscene.addItem(button_menu12);

     DButton *button_system12 = new DButton;
     button_system12->setPos(-130,-330 + 13*45);
     button_system12->setHoverEnableFlag(true);
     button_system12->boundImageToPress(pressIcon[12]);
     button_system12->boundImageToRelease(releaseIcon[12]);
     button_system12->boundImageToHover(hoverIcon[12]);
     button_system12->setBounds(-20,-20,40,40);
     //button_system12->connect(button_system12,SIGNAL(fireAction()),this,SLOT(system()));
     this->menuscene.addItem(button_system12);

     DButton *button_pow12 = new DButton;
     button_pow12->setPos(-130,-330 + 14*45);
     button_pow12->setHoverEnableFlag(true);
     button_pow12->boundImageToPress(pressIcon[14]);
     button_pow12->boundImageToRelease(releaseIcon[14]);
     button_pow12->boundImageToHover(hoverIcon[14]);
     button_pow12->setBounds(-20,-20,40,40);
     //button_pow12->connect(button_pow12,SIGNAL(fireAction()),this,SLOT(pow()));
     this->menuscene.addItem(button_pow12);
}
