#include <cstddef> // NULL
#include <stdlib.h> // malloc
#include <memory> // shared_ptr, unique_ptr

struct X
{
  int* p;
};

void f1(int& param1) {}

void f2(int* param2) {}

int* f3()
{
  return new int(3);
}

int main()
{
  int a = 5;

  // $r$ referencia $a$-ra
  int& r = a; // $a\in pts(r)$
  
  // Mutatók heap-en allokált memóriaterületre
  int* x1 = new int(0); // $new$ $int(0)\in pts(x1)$
  X*   x2 = new X(); // $new$ $X()\in pts(x5)$

  // $x3$ és $x4$ null pointerek
  int* x3 = nullptr; // $nullptr\in pts(x3)$
  int* x4 = NULL; // $NULL\in pts(x4)$
  
  // Függvény paraméterek
  f1(a); // referencia szerinti paraméter: $a\in pts(param1)$
  f2(x1); // $pts(x1)\sqsubseteq pts(param2)$
  
  // $x5$ $f3$ függvény visszatérési értékére mutat
  int* x5 = f3(); // $new$ $int(3)\in pts(x5)$

  // String literál
  const char* str1 = "example"; // $"example"\in pts(str1)$
  
  // Inicializáló lista
  int* t[] = {new int(0)}; // $\{new$ $int(0)\}\in pts(t)$

  // Adattag
  x2->p = new int(5); // $new$ $int(5)\in pts(p)$

  // Függvény pointerek
  void (*fp1)(int&) = &f1; // $f1\in pts(fp1)$

  // malloc, realloc
  char* str2 = (char *) malloc(15); // $malloc(15)\in pts(str2)$
  str2 = (char *) realloc(str2, 25); // $realloc(str2, 25)\in pts(str2)$

  // okos mutatók
  std::shared_ptr<X> x6(new X); // $new\ X \in pts(x6)$
  std::shared_ptr<X> x7(x6); // $pts(x6)\sqsubseteq pts(x7)$
  std::shared_ptr<X> x8(std::move(x7)); // $pts(x7)\sqsubseteq pts(x8)$
  std::shared_ptr<X> x9 = std::move(x8); // $pts(x8)\sqsubseteq pts(x9)$

  return 0;
}
