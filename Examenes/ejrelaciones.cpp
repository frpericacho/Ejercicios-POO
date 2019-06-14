#include <iostream>
#include <set>

class A {
 public:
 private:
};

class C {
 public:
  typedef std::set<A*> class_a;
  typedef std::set<D*> class_d;

  void asocia(A& a) { a_.insert(&a); }
  void asocia(D& d) { d_.insert(&d); }

  class_a asocia_a() const { return a_; }
  class_d asocia_d() const { return d_; }

 private:
  int c1;
  class_a a_;
  class_d d_;
  B b;
};

class B {
 public:
  typedef std::set<D*> class_d;
  void asocia(D& d) { d_.insert(&d); }
  class_d asocia() const { return d_; }

 private:
  class_d d_;
};

class D {
 public:
  D() = default;
  void asocia(C& c) { this->c_ = &c; }
  C& asocia() const { return *c_; }

 private:
  C* c_;
};