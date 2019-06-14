#include <iostream>

class A{
public:
    virtual void f(){
        std::cout << "hola soy A" << std::endl;
    }
    int a = 4;
};

class B: public A{
public:
    void fb(){
        std::cout << "hola soy B" << std::endl;
    }
    int b = 7;
};
/*
class C: virtual public A{
public:
    void fc(){
        std::cout << "hola soy C" << std::endl;
    }
protected:
    int c = 3;
};

class D: public B,C{
public:
    void f(){
        std::cout << "hola soy D" << std::endl;
    }
private:
    int d = 4;
};
*/
int main(){

    A a, *pa = &a;
    B b;

    b.b = 1 + a.a;
    pa = &b;

    std::cout << b.b << std::endl;
    std::cout << a.a << std::endl;

    return 0;
}