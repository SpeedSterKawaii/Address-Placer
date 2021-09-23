#include "MemzTrojan.h" //joke plz dont kill me github

namespace MyOPNonSkiddedAddies
{
  int getfield = 0;
  int setfield = 0; //make sure null
  int sandbox_thread = 0;
}

void SetAddies()
{
  MyOPNonSkiddedAddies::getfield = (0x0); //ur getfield offset :)
    MyOPNonSkiddedAddies::setfield = (0x0); //ur setfield offset :)
  MyOPNonSkiddedAddies::sandbox_thread = (0x0); //ur sandbox offset :)
}
