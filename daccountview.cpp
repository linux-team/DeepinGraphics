#include "daccountview.h"

DAccountview ::DAccountview()
{
 
}

void DAccountview ::account()
{
    view.setScene(&accountScene);
    view.show();
}
void DAccountview::display()
{

    view.setScene(&displayScene);
    view.show();

}
void DAccountview::default1()
{

    view.setScene(&defaultScene);
    view.show();

}
void DAccountview::personalization()
{
    view.setScene(&personalizationScene);
    view.show();

}
void DAccountview::network()
{
    view.setScene(&networkScene);
    view.show();

}
void DAccountview::sound()
{
    view.setScene(&soundScene);
    view.show();

}
void DAccountview::date()
{
    view.setScene(&dateScene);
    view.show();

}
void DAccountview::power()
{
    view.setScene(&powerScene);
    view.show();

}
void DAccountview::mouse()
{
    view.setScene(&mouseScene);
    view.show();

}
void DAccountview::keyboard()
{
    view.setScene(&keyboardScene);
    view.show();

}
void DAccountview::shortcuts()
{
    view.setScene(&shortcutsScene);
    view.show();

}
void DAccountview::menu()
{
    view.setScene(&menuScene);
    view.show();

}
void DAccountview::system()
{
    view.setScene(&systemScene);
    view.show();

}
void DAccountview::home()
{
    view.setScene(&scene);
    view.show();

}

