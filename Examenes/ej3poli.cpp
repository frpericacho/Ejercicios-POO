#include <iostream>
using namespace std;
/*
a) Escriba todo lo necesario para que el siguiente programa funcione
correctamente. En concreto, deberá escribir apropiadamente las clases Forma,
Circulo, Rectángulo y Cuadrado (como especialización de Rectángulo)
 */

// int main() {
//   Circulo cir(1.0);
//   Cuadrado cua(2.0);
//   Forma* formas[] = {&cir, &cua};
//   for (int i = 0; i < 2; i++)
//     cout << "Dl area de la figura " << (i + 1) << "es: " <<
//     formas[i]->area();
// }

// La salida deberia ser
// El área de la figura 1 es 3.14189
// El área de la figura 2 es 4

class Forma {
 public:
  virtual double area() const = 0;
  virtual ~Forma();

 private:
};
/*
class Circulo: public Forma{
    public:
        Circulo(double r):r_(r){}
        double area() const{
            return 3.14 * r_ * r_;
        }
    private:
        double r_;
};*/

class Rectangulo : public Forma {
 public:
  Rectangulo(double l1, double l2) : l1_(l1), l2_(l2) {}
  double area() const { return l1_ * l2_; }

 private:
  double l1_, l2_;
};

class Cuadrado : public Rectangulo {
 public:
  Cuadrado(double l) : Rectangulo(l, l) {}
  double area() const { return l_ * l_; }

 private:
  double l_;
};

/*
b) Ahora modifique la clase Circulo para que el constructor lance la excepción
Radio_Negativo cuando el radio suministrado como argumento sea negativo,
evidentemente. Radio_negativo será pues una clase dentro de Circulo, que tendrá
un atributo rd que será el radio inválido (negativo), un constructor y un método
constante observador llamado valor que nos da el valor del atributo.
 */

class Circulo : public Forma {
 public:
  Circulo(double r) : r_(r) {
    if (r < 0) throw Radio_Negativo(r);
  }

  class Radio_Negativo {
   public:
    Radio_Negativo(double rd) : rd_(rd) {}
    double valor() const { return rd_; }

   private:
    double rd_;
  };

  double area() const { return 3.14 * r_ * r_; }

 private:
  double r_;
};

/*
c) Escriba también un programa de ejemplo donde haga uso de esta excepción.
 */

int main() {
  Circulo cir(1.0);
  Cuadrado cua(2.0);
  Forma* formas[] = {&cir, &cua};
  for (int i = 0; i < 2; i++)
    cout << "Dl area de la figura " << (i + 1) << "es: " << formas[i]->area();
  fun(-5);
}

void fun(double r){
    try{
        Circulo c(r);
        cout << "ok" << endl;
    }catch(Circulo::Radio_Negativo rne){
        cout << "error de radio negativo" << endl;
    }
}

/*
d) Ahora nos interesa que las clases tengan métodos públicos para poder modificar sus
atributos. Explique si siguen siendo válidas las relaciones entre las clases establecidas
anteriormente y, en caso contrario, explique por qué y reescriba las clases
apropiadamente.
 */

// void new_cir(double r){
//     r_ = r;
// }

// void new_rec(double l1,double l2){
//     l1_ = l1;
//     l2_ = l2;
// }

// void new_cuad(double l){
//     Rectangulo::new_rec(l,l);
// }