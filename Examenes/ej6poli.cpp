#include <iostream>
using namespace std;

class B {
 public:
  void f() { cout << "f() de B" << endl; }
  virtual void g() { cout << "g() de B" << endl; }
  virtual void h() = 0;
  virtual ~B(){}

 protected:
  int b;
};

class D1 : virtual public B {
 public:
  void f() { cout << "f() de D1" << endl; }
  virtual void g() { cout << "g() de D1" << endl; }
  void h() { cout << "h() de D1" << endl; }

 protected:
  int d1;
};

class D2 : virtual public B {
 public:
  void f(int i) { cout << "f(" << i << ") de D2" << endl; }
  virtual void h() { cout << "h() de D2" << endl; }

 private:
  int d2;
};

class D3 : public D1 {
 public:
  void g() { cout << "g() de D3" << endl; }
  void h() { cout << "h() de D3" << endl; }

 private:
  int d3;
};

class D4 : public D1, public D2 {
 public:
  void h() { cout << "h() de D4" << endl; }
  void f(double i) { cout << "f(" << i << ") de D4" << endl; }

 private:
  int d4;
};

void f(B& b) {
  cout << "f() externa" << endl;
  b.f();
  b.g();
  b.h();
}

int main() {
  B* pb;
  D1 d1;
  D2 d2;
  D3 d3;
  D4 d4;
  f(d1);
  f(d2);
  f(d3);
  f(d4);
  d4.D1::f();
  d4.f(5);
  d4.f(3.7);
  d4.g();
  d4.h();
  pb = new D4;
  pb->f();
  dynamic_cast<D4*>(pb)->D2::f(3);
  pb->g();
  pb->h();
  delete pb;
}

/*
a) Corrija los errores, si los hay en la definición de las clases B, D1, D2, D3
y D4 para cada clase, enumera sus miembros declarados o definidos
explícitamente.*/

/*
b) Diga si el programa provoca algún error de compilación o de ejecución y por
qué sí lo tiene, modifique el código adecuadamente para solucionarlo.*/
