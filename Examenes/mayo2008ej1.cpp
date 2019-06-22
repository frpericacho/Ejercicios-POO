#include <iostream>
#include <set>

class A {
 public:
 private:
};

class B : public A {  // COMO PONER LA AGREGACION
 public:
  typedef std::set<D *> class_b;
  void rel3(D &);

 private:
};

class E : public A {
 public:
  typedef std::set<D *> class_d;
  void rel5(D &);

 private:
};

class D {
 public:
  typedef std::set<E *> class_e;
  void rel5(E &);
  void rel3(B &);

 private:
  B *b;
};

class C {
 public:
 private:
  D d;
};

class F : public C, E {
 public:
 private:
};