#include "X.h"

void f1(const X param_) {}

void f2(const X* param_) {}

void f3(const X& param_) {}

int* f4()
{
  if (true)
  {
    int* i = new int(1);
    return i;
  }
  
  return new int(2);
}
 
int main(int argc, char** argv)
{
  // Pass by value
  X x1;
  f1(x1);
   
  int* i1 = f4();
  int* i2 = f4();


  // Pass by pointer
  X* x2 = new X();
  f2(x2);

  delete x2;

  // Pass by reference
  X x3;
  f3(x3);

  return 0;
}
