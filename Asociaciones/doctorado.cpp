#include "doctorado.hpp"
#include <iostream>
#include <string>

Doctorado::Doctorado(std::string nom,int d, std::string t,int p):Estudiante(Nombre,dni),tutor(t),programa(p){}

void Doctorado::mostrar() const{
    Estudiante::mostrar();
    std::cout << "programa: " << programa << "\n" << "tutor: " << tutor << std::endl;
}

