#include "X.h"

int main()
{
  X* a, b, c;
  X** p = &a;
  X* q = &b;
  *p = q;
  X* r = &c;
  X** s = p;
  X* t = *p;
  *s = r;

  return 0;
}
