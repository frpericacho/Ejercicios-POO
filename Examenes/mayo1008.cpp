#include <iostream>
#include <string>
using namespace std;

class X {
 public:
  X(string s = "por omisión") { cout << "Constructor de X: " << s << endl; }
};

class A {
  X x;

 public:
  A() : x("A") { cout << "Constructor de A" << endl; }
  void f() { cout << "Método f() de A" << endl; }
    ~A(){cout << "destruye A" << endl;}
};

class B : virtual public A {
  X x;

 public:
  B() { cout << "Constructor de B" << endl; }
  void f() { cout << "Método f() de B" << endl; }
  ~B(){cout << "destruye B" << endl;}
};

class C : virtual public A {
  X x;

 public:
  C() { cout << "Constructor de C" << endl; }
  void f() { cout << "Método f() de C" << endl; }
  ~C(){cout << "destruye C" << endl;}
};

class D : public B, public C {
  X x;

 public:
  D() : x("D") { cout << "Constructor de D" << endl; }
  ~D(){cout << "destruye D" << endl;}
};

int main() {
  A *pa;
  B *pb;
  D d, *pd;
  pd = &d;
  pa = &d;
  pa->f();
  pb = &d;
  pb->f();
  pd->B::f();
  d.C::f();
}