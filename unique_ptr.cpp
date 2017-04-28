#include<memory>

#include "X.h"

int main()
{
  // Built-in data types.
  std::unique_ptr<int> p1(new int);
  std::unique_ptr<int> p2(new int, std::default_delete<int>());

  // Create unique pointers
  std::unique_ptr<X> p3;
  std::unique_ptr<X> p4(nullptr);
  std::unique_ptr<X> p5(new X);

  // std::unique_ptr<X> p6 = std::make_unique<X>(); // This doesn't work for now

  // Move unique pointers
  std::unique_ptr<X> p7(std::move(p3));
  std::unique_ptr<X> p8 = std::move(p5);

  return 0;
}
