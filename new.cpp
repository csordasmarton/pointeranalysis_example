#include "X.h"

int main()
{
  int* i1 = new int(1);
  int* i2 = new int(2);
  int* i3 = new int(2);
  
  delete i1;
  delete i2;
  delete i3;

  X* x1 = new X();
  X* x2 = new X();

  delete x1;
  delete x2;

  return 0;
}
