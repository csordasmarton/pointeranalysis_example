#include "X.h"

int main()
{
  int  i1  = 0;
  int& ir1 = i1; // Reference to simple variable.

  X  x1;
  X& xr1 = x1; // Reference to simple variable.
 
  int* i2;
  int& ir2 = *i2; // Invalid reference (undefined behavior).

  return 0;
}
