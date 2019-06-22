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
  Gato(string s) : Mamifero(s) {}
  void saludo() const {
    cout << "El nombre del animal es: " << nombre() << " y es un Gato";
  }
};

int main() {
  Mamifero* mp = new Gato("Miai");
  mp->saludo();
  delete mp;
}