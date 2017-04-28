#include<memory>

#include "X.h"

int main()
{
  // Built-in data types.
  std::shared_ptr<int> p1(new int);
  std::shared_ptr<int> p2(new int, std::default_delete<int>());

  // Shared pointers
  std::shared_ptr<X> p3;
  std::shared_ptr<X> p4(nullptr);
  std::shared_ptr<X> p5(new X);
  std::shared_ptr<X> p6(p3);

  // Move shared pointers
  std::shared_ptr<X> p7(std::move(p4));
  std::shared_ptr<X> p8(std::move(p6));  
  std::shared_ptr<X> p9 = std::move(p3);
  
  std::shared_ptr<X> p10 = p9;

  return 0;
}
