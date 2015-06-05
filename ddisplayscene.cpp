#include "ddisplayscene.h"
#include "dbutton.h"
#include "dreset.h"

DDisplayscene::DDisplayscene()
{
    setSceneRect(-150,-300,300,600);
    addLine(-100,-400,-100,400);
    //侧边栏显示界面
    button_home2 = new DButton;
    button_home2->setPos(-130,-330 + 0*45);
    button_home2->setHoverEnableFlag(true);
    button_home2->boundImageToPress(pressIcon[13]);
    button_home2->boundImageToRelease(releaseIcon[13]);
    button_home2->boundImageToHover(hoverIcon[13]);
    button_home2->setBounds(-20,-20,40,40);
    //button_home2->connect(button_home2,SIGNAL(fireAction()),this,SLOT(home()));
    addItem(button_home2);


    button_account2 = new DButton;
    button_account2->setPos(-130,-330 + 1*45);
    button_account2->setHoverEnableFlag(true);
    button_account2->boundImageToPress(pressIcon[0]);
    button_account2->boundImageToRelease(releaseIcon[0]);
    button_account2->boundImageToHover(hoverIcon[0]);
    button_account2->setBounds(-20,-20,40,40);
    //button_account2->connect(button_account2,SIGNAL(fireAction()),this,SLOT(account()));
    addItem(button_account2);

    button_display2 = new DButton;
    button_display2->setPos(-130,-330 + 2*45);
    button_display2->setHoverEnableFlag(true);
    button_display2->boundImageToPress(pressIcon[1]);
    button_display2->boundImageToRelease(releaseIcon[1]);
    button_display2->boundImageToHover(hoverIcon[1]);
    button_display2->setBounds(-20,-20,40,40);
    //button_display2->connect(button_display2,SIGNAL(fireAction()),this,SLOT(display()));
    addItem(button_display2);

    button_default2 = new DButton;
    button_default2->setPos(-130,-330 + 3*45);
    button_default2->setHoverEnableFlag(true);
    button_default2->boundImageToPress(pressIcon[2]);
    button_default2->boundImageToRelease(releaseIcon[2]);
    button_default2->boundImageToHover(hoverIcon[2]);
    button_default2->setBounds(-20,-20,40,40);
    //button_default2->connect(button_default2,SIGNAL(fireAction()),this,SLOT(default1()));
    addItem(button_default2);

    button_personalization2 = new DButton;
    button_personalization2->setPos(-130,-330 + 4*45);
    button_personalization2->setHoverEnableFlag(true);
    button_personalization2->boundImageToPress(pressIcon[3]);
    button_personalization2->boundImageToRelease(releaseIcon[3]);
    button_personalization2->boundImageToHover(hoverIcon[3]);
    button_personalization2->setBounds(-20,-20,40,40);
    //button_personalization2->connect(button_personalization2,SIGNAL(fireAction()),this,SLOT(personalization()));
    addItem(button_personalization2);

    button_network2 = new DButton;
    button_network2->setPos(-130,-330 + 5*45);
    button_network2->setHoverEnableFlag(true);
    button_network2->boundImageToPress(pressIcon[4]);
    button_network2->boundImageToRelease(releaseIcon[4]);
    button_network2->boundImageToHover(hoverIcon[4]);
    button_network2->setBounds(-20,-20,40,40);
    //button_network2->connect(button_network2,SIGNAL(fireAction()),this,SLOT(network()));
    addItem(button_network2);

    button_sound2 = new DButton;
    button_sound2->setPos(-130,-330 + 6*45);
    button_sound2->setHoverEnableFlag(true);
    button_sound2->boundImageToPress(pressIcon[5]);
    button_sound2->boundImageToRelease(releaseIcon[5]);
    button_sound2->boundImageToHover(hoverIcon[5]);
    button_sound2->setBounds(-20,-20,40,40);
    //button_sound2->connect(button_sound2,SIGNAL(fireAction()),this,SLOT(sound()));
    addItem(button_sound2);

    button_date2 = new DButton;
    button_date2->setPos(-130,-330 + 7*45);
    button_date2->setHoverEnableFlag(true);
    button_date2->boundImageToPress(pressIcon[6]);
    button_date2->boundImageToRelease(releaseIcon[6]);
    button_date2->boundImageToHover(hoverIcon[6]);
    button_date2->setBounds(-20,-20,40,40);
    //button_date2->connect(button_date2,SIGNAL(fireAction()),this,SLOT(date()));
    addItem(button_date2);

    button_power2 = new DButton;
    button_power2->setPos(-130,-330 + 8*45);
    button_power2->setHoverEnableFlag(true);
    button_power2->boundImageToPress(pressIcon[7]);
    button_power2->boundImageToRelease(releaseIcon[7]);
    button_power2->boundImageToHover(hoverIcon[7]);
    button_power2->setBounds(-20,-20,40,40);
    //button_power2->connect(button_power2,SIGNAL(fireAction()),this,SLOT(power()));
    addItem(button_power2);

    button_mouse2 = new DButton;
    button_mouse2->setPos(-130,-330 + 9*45);
    button_mouse2->setHoverEnableFlag(true);
    button_mouse2->boundImageToPress(pressIcon[8]);
    button_mouse2->boundImageToRelease(releaseIcon[8]);
    button_mouse2->boundImageToHover(hoverIcon[8]);
    button_mouse2->setBounds(-20,-20,40,40);
    //button_mouse2->connect(button_mouse2,SIGNAL(fireAction()),this,SLOT(mouse()));
    addItem(button_mouse2);

    button_keyboard2 = new DButton;
    button_keyboard2->setPos(-130,-330 + 10*45);
    button_keyboard2->setHoverEnableFlag(true);
    button_keyboard2->boundImageToPress(pressIcon[9]);
    button_keyboard2->boundImageToRelease(releaseIcon[9]);
    button_keyboard2->boundImageToHover(hoverIcon[9]);
    button_keyboard2->setBounds(-20,-20,40,40);
    //button_keyboard2->connect(button_keyboard2,SIGNAL(fireAction()),this,SLOT(keyboard()));
    addItem(button_keyboard2);

    button_shortcuts2 = new DButton;
    button_shortcuts2->setPos(-130,-330 + 11*45);
    button_shortcuts2->setHoverEnableFlag(true);
    button_shortcuts2->boundImageToPress(pressIcon[10]);
    button_shortcuts2->boundImageToRelease(releaseIcon[10]);
    button_shortcuts2->boundImageToHover(hoverIcon[10]);
    button_shortcuts2->setBounds(-20,-20,40,40);
    //button_shortcuts2->connect(button_shortcuts2,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    addItem(button_shortcuts2);

    button_menu2 = new DButton;
    button_menu2->setPos(-130,-330 + 12*45);
    button_menu2->setHoverEnableFlag(true);
    button_menu2->boundImageToPress(pressIcon[11]);
    button_menu2->boundImageToRelease(releaseIcon[11]);
    button_menu2->boundImageToHover(hoverIcon[11]);
    button_menu2->setBounds(-20,-20,40,40);
    //button_menu2->connect(button_menu2,SIGNAL(fireAction()),this,SLOT(menu()));
    addItem(button_menu2);

    button_system2 = new DButton;
    button_system2->setPos(-130,-330 + 13*45);
    button_system2->setHoverEnableFlag(true);
    button_system2->boundImageToPress(pressIcon[12]);
    button_system2->boundImageToRelease(releaseIcon[12]);
    button_system2->boundImageToHover(hoverIcon[12]);
    button_system2->setBounds(-20,-20,40,40);
    //button_system2->connect(button_system2,SIGNAL(fireAction()),this,SLOT(system()));
    addItem(button_system2);

    button_pow2 = new DButton;
    button_pow2->setPos(-130,-330 + 14*45);
    button_pow2->setHoverEnableFlag(true);
    button_pow2->boundImageToPress(pressIcon[14]);
    button_pow2->boundImageToRelease(releaseIcon[14]);
    button_pow2->boundImageToHover(hoverIcon[14]);
    button_pow2->setBounds(-20,-20,40,40);
    //button_pow2->connect(button_pow2,SIGNAL(fireAction()),this,SLOT(pow()));
    addItem(button_pow2);

    addLine(-100,-290,200,-290);

    QGraphicsTextItem* display = new QGraphicsTextItem("显示");
    display->setPos(-90,-335);
    display->setDefaultTextColor(QColor(255,255,255));
    QFont font_dis;
    font_dis.setPixelSize(14);
    display->setFont(font_dis);
    addItem(display);

    DRset * displayreset = new DRset;
    displayreset->setPos(100,-320);
    displayreset->setHoverEnableFlag(true);
   // displayreset->boundImageToPress(pressIcon[15]);
    displayreset->boundImageToRelease(pressIcon[15]);
    displayreset->boundImageToHover(pressIcon[15]);
    displayreset->setBounds(-30,-10,55,55);
   // displayreset->connect(displayreset,SIGNAL(fireAction()),this,SLOT(displayreset()));
    addItem(displayreset);

}
