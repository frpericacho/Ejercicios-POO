#ifndef CONFLICTO_HPP
#define CONFLICTO_HPP
#include <iostream>

class B1
{
public:
    void f() { std::cout << "hola"; }
    int b;
};

class B2
{
public:
    void f() { std::cout << "adios"; }
    int b;
};

class D1 : public B1, public B2
{
};

struct A {int a;};
struct B: virtual A {int b;};
struct C: virtual A {int c;};
struct D: B, C {int d;};

int main(){
    D1 d;
    D d1;

    d.B1::f();
    d.B2::f();
    d.B1::b = 1;
    d.B2::b = 2;

    d1.a = 0;
    d1.b = 0;
    d1.c = 0;
    d1.d = 0;
}

#endif