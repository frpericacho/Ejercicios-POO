#include <iostream>

class Figura {};

class Circulo : public Figura {};
class Triangulo : public Figura {};
class Cuadrado : public Figura {};

/*
4. Sea Figura una clase abstracta de la que derivan las clases Circulo,
Triangulo, Cuadrado y otras. Supongamos que existe una función para rotar
figuras definida como sigue:
 */

void rotar(const Figura& fig) {
  if (typeid(fig) == typeid(Circulo)) {
    // no hacer nada
  } else if (typeid(fig) == typeid(Triangulo)) {
    // rotar triangulo
  } else if (typeid(fig) == typeid(Cuadrado)) {
    // rotar cuadrado
  }
  // y otras
}

// Ponga un ejemplo de uso de la función rotar.

// Triangulo t;
// rotar(t);

/*
¿Cree que ésta es la mejor forma de implementar la rotación de figuras? Razone
la respuesta. En caso negativo, describa cómo mejorarla y emplee el ejemplo
anterior para mostrar la diferencia de uso.
 */

// No, porque typeid es únicamente útil en cuanto a la comparación
// de clases, sin embargo, con dynamic_cast nos permite el acceso a
// los métodos de las clases derivadas.

void rotar2(Figura* fig) {
  if (Circulo* c = dynamic_cast<Circulo*>(fig)) {
    // nohacer nada
  } else if (Triangulo* t = dynamic_cast<Triangulo*>(fig)) {
    // rota triangulo
  } else if (Cuadrado* cu = dynamic_cast<Cuadrado*>(fig)) {
    // rota cuadrado
  }
}

int main(){
    Triangulo t;
    rotar2(&t);
}