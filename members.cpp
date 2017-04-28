struct X
{
  X() : _x(new int(10)) {}

  int* getX() { return _x; }

private:
  int* _x;
};

struct M
{
  M() : _p(nullptr) {}

  M(int i) {
    _p = new int(0);
  }

  void f1()
  {
    _p = new int(1);
  }

  void f2()
  {
    _p = _x.getX();
  }

  int* _p;
  X _x;
};

int main()
{
  M m;
  m._p = new int(123);

  int *x1 = m._p;
  int *x2 = m._p;
  int *x3 = m._p;

  return 0;
}
