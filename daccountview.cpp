#include "daccountview.h"

DAccountview ::DAccountview()
{
 
}

void DAccountview ::performAction()
{
    view.setScene(&accountScene);
    view.show();
}
