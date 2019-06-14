#include <iostream>
using namespace std;

class Objeto {
 public:
  Objeto(char const *nombre) : nombre_(nombre) {
    cout << "Constructor de Objeto para " << nombre_ << endl;
  }
  ~Objeto() { cout << "Destructor de Objeto para " << nombre_ << endl; }
  void lanzamiento() {
    Objeto o("'objeto local de lanzamiento()'");
    cout << "Metodo lanzamiento() para " << nombre_ << endl;
    throw &o;
  }
  void saludo() { cout << "Hola de parte de " << nombre_ << endl; }

 private:
  char const *nombre_;
};

int main() {
  Objeto o("'objeto de main()'");
  try {
    o.lanzamiento();
  } catch (Objeto *o) {
    cout << "Excepción capturada" << endl;
    o->saludo();
  }
}

// a) Escriba las líneas que imprimiría el programa.

// Constructor de Objeto para 'objeto de main()'
// Constructor de Objeto para 'objeto local de lanzamiento()'
// Metodo lanzamiento() para 'objeto de main()'
// Destructor de Objeto para 'objeto local de lanzamiento()'
// Excepción capturada
// Hola de parte de
// Destructor de Objeto para 'objeto de main()'

// b) Diga qué anomalía hay

// No se puede lanzar una excepcion con una direccion de memoria de un ambito
// inferior

// c) Corríjala reescribiendo el método Objeto::lanzamiento() para que lance un
// objeto creado dinámicamente, o su dirección, y el capturador de la excepción
// en main().

/*
void lanzamiento() {
    Objeto o("'objeto local de lanzamiento()'");
    cout << "Metodo lanzamiento() para " << nombre_ << endl;
    throw o;

int main() {
  Objeto o("'objeto de main()'");
  try {
    o.lanzamiento();
  } catch (Objeto o) {
    cout << "Excepción capturada" << endl;
    o.saludo();
  }
}
 */