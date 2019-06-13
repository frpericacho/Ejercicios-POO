#include "persona.hpp"
#include <iostream>

Persona::Persona(std::string nom, std::string dir):Nombre(nom), direccion(dir){}

void Persona::mostrar() const{
    std::cout << "nombre: " << Nombre << "\n" << "direccion: " << direccion << std::endl;
}

void Persona::imparte(Asignatura& asignatura){
    asig_.insert(&asignatura);
}

void Persona::mostrarAsignatura() const{
    if(asig_.empty())
        std::cout << "no hay asignatura" << std::endl;
    else{
        for(Asignaturas::iterator i = asig_.begin(); i != asig_.end(); i++){
            (*i)->mostrar();
        }
    }
}