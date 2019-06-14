// 5. Observe atentamente el siguiente programa:
#include <iostream>

struct B {
  virtual void f() { std::cout << "f() de B" << std::endl; }
};

struct D : B {
  void f() { std::cout << "f() de D" << std::endl; }
};

void f(B b) {
  std::cout << "f() externa"<< std::endl;
  b.f();
}

int main() {
  B b;
  D d;
  f(b);
  f(d);
}

/*
a) Diga si tiene error de compilación o ejecución. Modifique el código para
solucionarlo y después escribe lo que imprime. Si no, sólo lo que imprime.
*/

// no da error

// f() externa
// f() de B
// f() externa
// f() de B

// Esto se debe a que void f(B b) recibe un objeto por valor. Realiza una
// conversión de un objeto tipo D a uno del tipo B

/*
b) Repite el anterior pero suponiendo que hemos declarado el método B :: f ( )
como virtual.
*/

// Ocuerre lo mismo que en apartado a)

/*
c) Repite el anterior pero teniendo en cuenta que el parámetro función externa f
( ) se recibe por referencia.
*/

// no hay error
// f() externa
// f() de B
// f() externa
// f() de D

// Ahora el metodo a llamar se selecciona en tiempo de ejecucion

/*
d) Repita el 2º apartado suponiendo que la definición de f( ) (externa) se ha
cambiado a :

void f(B *b){
    std::count << “ f ( ) externa” << std::endl;
    b->f();
}
*/

//daria un error de compilacion ya que habria que establecer las llamadas a las funciones:
//f(&b);
//f(&d);

//ahora saldria:
// f() externa
// f() de B
// f() externa
// f() de D