#include <iostream>
#include <string>

using namespace std;

class Mamifero {
 public:
  Mamifero(string s) : nombre_(s) {}
  virtual void saludo() const {
    cout << "El nombre del animal es " << nombre() << " y es un " << tipo()
         << endl;
  }
  virtual string tipo() const { return "animal"; }
  string nombre() const { return nombre_; }

 private:
  string nombre_;
};

class Gato : public Mamifero {
 public:
  Gato(string cad) : Mamifero(cad) {}
  void saludo() const {
    cout << "el nombre del animal es: " << nombre() << " y es un: " << tipo()
         << endl;
  }
  string tipo() const { return "gato"; }
};

int main() {
  Gato g("miau");
  Mamifero* mp = dynamic_cast<Mamifero*>(&g);
  mp->saludo();
  //delete mp;
}