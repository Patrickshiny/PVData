#include "PVDataMain.h"
#include <iostream>

int main (int argc, char *argv[])
{
  PVDataMain* pCurrentPVDataMain = new PVDataMain();
  if (pCurrentPVDataMain != NULL)
  {
      return app->run(*pCurrentPVDataMain);
  }
}
