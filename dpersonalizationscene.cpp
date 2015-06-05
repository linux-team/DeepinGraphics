#include "dpersonalizationscene.h"
#include "dbutton.h"

DPersonalizationscene::DPersonalizationscene()
{

    setSceneRect(-150,-300,300,600);
    addLine(-100,-400,-100,400);

    //侧边栏个性化界面
    button_home4 = new DButton;
    button_home4->setPos(-130,-330 + 0*45);
    button_home4->setHoverEnableFlag(true);
    button_home4->boundImageToPress(pressIcon[13]);
    button_home4->boundImageToRelease(releaseIcon[13]);
    button_home4->boundImageToHover(hoverIcon[13]);
    button_home4->setBounds(-20,-20,40,40);
    //button_home4->connect(button_home4,SIGNAL(fireAction()),this,SLOT(home()));
    addItem(button_home4);


    button_account4 = new DButton;
    button_account4->setPos(-130,-330 + 1*45);
    button_account4->setHoverEnableFlag(true);
    button_account4->boundImageToPress(pressIcon[0]);
    button_account4->boundImageToRelease(releaseIcon[0]);
    button_account4->boundImageToHover(hoverIcon[0]);
    button_account4->setBounds(-20,-20,40,40);
    //button_account4->connect(button_account4,SIGNAL(fireAction()),this,SLOT(account()));
    addItem(button_account4);

    button_display4 = new DButton;
    button_display4->setPos(-130,-330 + 2*45);
    button_display4->setHoverEnableFlag(true);
    button_display4->boundImageToPress(pressIcon[1]);
    button_display4->boundImageToRelease(releaseIcon[1]);
    button_display4->boundImageToHover(hoverIcon[1]);
    button_display4->setBounds(-20,-20,40,40);
    //button_display4->connect(button_display4,SIGNAL(fireAction()),this,SLOT(display()));
    addItem(button_display4);

    button_default4 = new DButton;
    button_default4->setPos(-130,-330 + 3*45);
    button_default4->setHoverEnableFlag(true);
    button_default4->boundImageToPress(pressIcon[2]);
    button_default4->boundImageToRelease(releaseIcon[2]);
    button_default4->boundImageToHover(hoverIcon[2]);
    button_default4->setBounds(-20,-20,40,40);
    //button_default4->connect(button_default4,SIGNAL(fireAction()),this,SLOT(default1()));
    addItem(button_default4);

    button_personalization4 = new DButton;
    button_personalization4->setPos(-130,-330 + 4*45);
    button_personalization4->setHoverEnableFlag(true);
    button_personalization4->boundImageToPress(pressIcon[3]);
    button_personalization4->boundImageToRelease(releaseIcon[3]);
    button_personalization4->boundImageToHover(hoverIcon[3]);
    button_personalization4->setBounds(-20,-20,40,40);
    //button_personalization4->connect(button_personalization4,SIGNAL(fireAction()),this,SLOT(personalization()));
    addItem(button_personalization4);

    button_network4 = new DButton;
    button_network4->setPos(-130,-330 + 5*45);
    button_network4->setHoverEnableFlag(true);
    button_network4->boundImageToPress(pressIcon[4]);
    button_network4->boundImageToRelease(releaseIcon[4]);
    button_network4->boundImageToHover(hoverIcon[4]);
    button_network4->setBounds(-20,-20,40,40);
    //button_network4->connect(button_network4,SIGNAL(fireAction()),this,SLOT(network()));
    addItem(button_network4);

    button_sound4 = new DButton;
    button_sound4->setPos(-130,-330 + 6*45);
    button_sound4->setHoverEnableFlag(true);
    button_sound4->boundImageToPress(pressIcon[5]);
    button_sound4->boundImageToRelease(releaseIcon[5]);
    button_sound4->boundImageToHover(hoverIcon[5]);
    button_sound4->setBounds(-20,-20,40,40);
    //button_sound4->connect(button_sound4,SIGNAL(fireAction()),this,SLOT(sound()));
    addItem(button_sound4);

    button_date4 = new DButton;
    button_date4->setPos(-130,-330 + 7*45);
    button_date4->setHoverEnableFlag(true);
    button_date4->boundImageToPress(pressIcon[6]);
    button_date4->boundImageToRelease(releaseIcon[6]);
    button_date4->boundImageToHover(hoverIcon[6]);
    button_date4->setBounds(-20,-20,40,40);
    //button_date4->connect(button_date4,SIGNAL(fireAction()),this,SLOT(date()));
    addItem(button_date4);

    button_power4 = new DButton;
    button_power4->setPos(-130,-330 + 8*45);
    button_power4->setHoverEnableFlag(true);
    button_power4->boundImageToPress(pressIcon[7]);
    button_power4->boundImageToRelease(releaseIcon[7]);
    button_power4->boundImageToHover(hoverIcon[7]);
    button_power4->setBounds(-20,-20,40,40);
    //button_power4->connect(button_power4,SIGNAL(fireAction()),this,SLOT(power()));
    addItem(button_power4);

    button_mouse4 = new DButton;
    button_mouse4->setPos(-130,-330 + 9*45);
    button_mouse4->setHoverEnableFlag(true);
    button_mouse4->boundImageToPress(pressIcon[8]);
    button_mouse4->boundImageToRelease(releaseIcon[8]);
    button_mouse4->boundImageToHover(hoverIcon[8]);
    button_mouse4->setBounds(-20,-20,40,40);
    //button_mouse4->connect(button_mouse4,SIGNAL(fireAction()),this,SLOT(mouse()));
    addItem(button_mouse4);

    button_keyboard4 = new DButton;
    button_keyboard4->setPos(-130,-330 + 10*45);
    button_keyboard4->setHoverEnableFlag(true);
    button_keyboard4->boundImageToPress(pressIcon[9]);
    button_keyboard4->boundImageToRelease(releaseIcon[9]);
    button_keyboard4->boundImageToHover(hoverIcon[9]);
    button_keyboard4->setBounds(-20,-20,40,40);
    //button_keyboard4->connect(button_keyboard4,SIGNAL(fireAction()),this,SLOT(keyboard()));
    addItem(button_keyboard4);

    button_shortcuts4 = new DButton;
    button_shortcuts4->setPos(-130,-330 + 11*45);
    button_shortcuts4->setHoverEnableFlag(true);
    button_shortcuts4->boundImageToPress(pressIcon[10]);
    button_shortcuts4->boundImageToRelease(releaseIcon[10]);
    button_shortcuts4->boundImageToHover(hoverIcon[10]);
    button_shortcuts4->setBounds(-20,-20,40,40);
    //button_shortcuts4->connect(button_shortcuts3,SIGNAL(fireAction()),this,SLOT(shortcuts()));
    addItem(button_shortcuts4);

    button_menu4 = new DButton;
    button_menu4->setPos(-130,-330 + 12*45);
    button_menu4->setHoverEnableFlag(true);
    button_menu4->boundImageToPress(pressIcon[11]);
    button_menu4->boundImageToRelease(releaseIcon[11]);
    button_menu4->boundImageToHover(hoverIcon[11]);
    button_menu4->setBounds(-20,-20,40,40);
    //button_menu4->connect(button_menu4,SIGNAL(fireAction()),this,SLOT(menu()));
    addItem(button_menu4);

    button_system4 = new DButton;
    button_system4->setPos(-130,-330 + 13*45);
    button_system4->setHoverEnableFlag(true);
    button_system4->boundImageToPress(pressIcon[12]);
    button_system4->boundImageToRelease(releaseIcon[12]);
    button_system4->boundImageToHover(hoverIcon[12]);
    button_system4->setBounds(-20,-20,40,40);
    //button_system4->connect(button_system4,SIGNAL(fireAction()),this,SLOT(system()));
    addItem(button_system4);

    button_pow4 = new DButton;
    button_pow4->setPos(-130,-330 + 14*45);
    button_pow4->setHoverEnableFlag(true);
    button_pow4->boundImageToPress(pressIcon[14]);
    button_pow4->boundImageToRelease(releaseIcon[14]);
    button_pow4->boundImageToHover(hoverIcon[14]);
    button_pow4->setBounds(-20,-20,40,40);
    //button_pow4->connect(button_pow4,SIGNAL(fireAction()),this,SLOT(pow()));
    addItem(button_pow4);
}
