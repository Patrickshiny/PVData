#include "PVDataMain.h"
#include <iostream>

int main (int argc, char *argv[])
{
  PVDataMain* pCurrentPVDataMain = new PVDataMain();
  if (pCurrentPVDataMain != NULL)
  {
      // app->
      return app->run(*pCurrentPVDataMain);
  }
}

PVDataMain::PVDataMain()
: m_button("WindowCtrlButton")
{
  set_border_width(1920);
  set_border_height(1080);

}

PVDataMain::~PVDataMain()
{
}

void PVDataMain::onTopButtonClick()
{

}
