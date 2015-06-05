#include "dnetworkscence.h"
#include "dbutton.h"

DNetworkscene::DNetworkscene()
{
    networkscene.setSceneRect(-150,-300,300,600);

    networkscene.addLine(-100,-400,-100,400);

    //侧边栏网络界面
DButton *button_home5 = new DButton;
button_home5->setPos(-130,-330 + 0*45);
button_home5->setHoverEnableFlag(true);
button_home5->boundImageToPress(pressIcon[13]);
button_home5->boundImageToRelease(releaseIcon[13]);
button_home5->boundImageToHover(hoverIcon[13]);
button_home5->setBounds(-20,-20,40,40);
//button_home5->connect(button_home5,SIGNAL(fireAction()),this,SLOT(home()));
this->networkscene.addItem(button_home5);


DButton *button_account5 = new DButton;
button_account5->setPos(-130,-330 + 1*45);
button_account5->setHoverEnableFlag(true);
button_account5->boundImageToPress(pressIcon[0]);
button_account5->boundImageToRelease(releaseIcon[0]);
button_account5->boundImageToHover(hoverIcon[0]);
button_account5->setBounds(-20,-20,40,40);
//button_account5->connect(button_account5,SIGNAL(fireAction()),this,SLOT(account()));
this->networkscene.addItem(button_account5);

DButton *button_display5 = new DButton;
button_display5->setPos(-130,-330 + 2*45);
button_display5->setHoverEnableFlag(true);
button_display5->boundImageToPress(pressIcon[1]);
button_display5->boundImageToRelease(releaseIcon[1]);
button_display5->boundImageToHover(hoverIcon[1]);
button_display5->setBounds(-20,-20,40,40);
//button_display5->connect(button_display5,SIGNAL(fireAction()),this,SLOT(display()));
this->networkscene.addItem(button_display5);

DButton *button_default5 = new DButton;
button_default5->setPos(-130,-330 + 3*45);
button_default5->setHoverEnableFlag(true);
button_default5->boundImageToPress(pressIcon[2]);
button_default5->boundImageToRelease(releaseIcon[2]);
button_default5->boundImageToHover(hoverIcon[2]);
button_default5->setBounds(-20,-20,40,40);
//button_default5->connect(button_default5,SIGNAL(fireAction()),this,SLOT(default1()));
this->networkscene.addItem(button_default5);

DButton *button_personalization5 = new DButton;
button_personalization5->setPos(-130,-330 + 4*45);
button_personalization5->setHoverEnableFlag(true);
button_personalization5->boundImageToPress(pressIcon[3]);
button_personalization5->boundImageToRelease(releaseIcon[3]);
button_personalization5->boundImageToHover(hoverIcon[3]);
button_personalization5->setBounds(-20,-20,40,40);
//button_personalization5->connect(button_personalization5,SIGNAL(fireAction()),this,SLOT(personalization()));
this->networkscene.addItem(button_personalization5);

DButton *button_network5 = new DButton;
button_network5->setPos(-130,-330 + 5*45);
button_network5->setHoverEnableFlag(true);
button_network5->boundImageToPress(pressIcon[4]);
button_network5->boundImageToRelease(releaseIcon[4]);
button_network5->boundImageToHover(hoverIcon[4]);
button_network5->setBounds(-20,-20,40,40);
//button_network5->connect(button_network5,SIGNAL(fireAction()),this,SLOT(network()));
this->networkscene.addItem(button_network5);

DButton *button_sound5 = new DButton;
button_sound5->setPos(-130,-330 + 6*45);
button_sound5->setHoverEnableFlag(true);
button_sound5->boundImageToPress(pressIcon[5]);
button_sound5->boundImageToRelease(releaseIcon[5]);
button_sound5->boundImageToHover(hoverIcon[5]);
button_sound5->setBounds(-20,-20,40,40);
//button_sound5->connect(button_sound5,SIGNAL(fireAction()),this,SLOT(sound()));
this->networkscene.addItem(button_sound5);

DButton *button_date5 = new DButton;
button_date5->setPos(-130,-330 + 7*45);
button_date5->setHoverEnableFlag(true);
button_date5->boundImageToPress(pressIcon[6]);
button_date5->boundImageToRelease(releaseIcon[6]);
button_date5->boundImageToHover(hoverIcon[6]);
button_date5->setBounds(-20,-20,40,40);
//button_date5->connect(button_date5,SIGNAL(fireAction()),this,SLOT(date()));
this->networkscene.addItem(button_date5);

DButton *button_power5 = new DButton;
button_power5->setPos(-130,-330 + 8*45);
button_power5->setHoverEnableFlag(true);
button_power5->boundImageToPress(pressIcon[7]);
button_power5->boundImageToRelease(releaseIcon[7]);
button_power5->boundImageToHover(hoverIcon[7]);
button_power5->setBounds(-20,-20,40,40);
//button_power5->connect(button_power5,SIGNAL(fireAction()),this,SLOT(power()));
this->networkscene.addItem(button_power5);

DButton *button_mouse5 = new DButton;
button_mouse5->setPos(-130,-330 + 9*45);
button_mouse5->setHoverEnableFlag(true);
button_mouse5->boundImageToPress(pressIcon[8]);
button_mouse5->boundImageToRelease(releaseIcon[8]);
button_mouse5->boundImageToHover(hoverIcon[8]);
button_mouse5->setBounds(-20,-20,40,40);
//button_mouse5->connect(button_mouse5,SIGNAL(fireAction()),this,SLOT(mouse()));
this->networkscene.addItem(button_mouse5);

DButton *button_keyboard5 = new DButton;
button_keyboard5->setPos(-130,-330 + 10*45);
button_keyboard5->setHoverEnableFlag(true);
button_keyboard5->boundImageToPress(pressIcon[9]);
button_keyboard5->boundImageToRelease(releaseIcon[9]);
button_keyboard5->boundImageToHover(hoverIcon[9]);
button_keyboard5->setBounds(-20,-20,40,40);
//button_keyboard5->connect(button_keyboard5,SIGNAL(fireAction()),this,SLOT(keyboard()));
this->networkscene.addItem(button_keyboard5);

DButton *button_shortcuts5 = new DButton;
button_shortcuts5->setPos(-130,-330 + 11*45);
button_shortcuts5->setHoverEnableFlag(true);
button_shortcuts5->boundImageToPress(pressIcon[10]);
button_shortcuts5->boundImageToRelease(releaseIcon[10]);
button_shortcuts5->boundImageToHover(hoverIcon[10]);
button_shortcuts5->setBounds(-20,-20,40,40);
//button_shortcuts5->connect(button_shortcuts5,SIGNAL(fireAction()),this,SLOT(shortcuts()));
this->networkscene.addItem(button_shortcuts5);

DButton *button_menu5 = new DButton;
button_menu5->setPos(-130,-330 + 12*45);
button_menu5->setHoverEnableFlag(true);
button_menu5->boundImageToPress(pressIcon[11]);
button_menu5->boundImageToRelease(releaseIcon[11]);
button_menu5->boundImageToHover(hoverIcon[11]);
button_menu5->setBounds(-20,-20,40,40);
//button_menu5->connect(button_menu5,SIGNAL(fireAction()),this,SLOT(menu()));
this->networkscene.addItem(button_menu5);

DButton *button_system5 = new DButton;
button_system5->setPos(-130,-330 + 13*45);
button_system5->setHoverEnableFlag(true);
button_system5->boundImageToPress(pressIcon[12]);
button_system5->boundImageToRelease(releaseIcon[12]);
button_system5->boundImageToHover(hoverIcon[12]);
button_system5->setBounds(-20,-20,40,40);
//button_system5->connect(button_system5,SIGNAL(fireAction()),this,SLOT(system()));
this->networkscene.addItem(button_system5);

DButton *button_pow5 = new DButton;
button_pow5->setPos(-130,-330 + 14*45);
button_pow5->setHoverEnableFlag(true);
button_pow5->boundImageToPress(pressIcon[14]);
button_pow5->boundImageToRelease(releaseIcon[14]);
button_pow5->boundImageToHover(hoverIcon[14]);
button_pow5->setBounds(-20,-20,40,40);
//button_pow5->connect(button_pow5,SIGNAL(fireAction()),this,SLOT(pow()));
this->networkscene.addItem(button_pow5);
}
