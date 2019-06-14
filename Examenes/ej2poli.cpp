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

//a) Escriba las líneas que imprimiría el programa.

//b) Diga qué anomalía hay

//c) Corríjala reescribiendo el método Objeto::lanzamiento() para que lance un objeto creado
//dinámicamente, o su dirección, y el capturador de la excepción en main().
