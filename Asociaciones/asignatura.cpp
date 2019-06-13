#include "asignatura.hpp"
#include <iostream>

Asignatura::Asignatura(std::string nom,std::string area):Nombre(nom), area_(area){}

void Asignatura::mostrar(){
    std::cout << "nombre: " << Nombre << "\n" << "area: " << area_ << std::endl;
}

void Asignatura::impartida(Persona& per){
    per_.insert(&per);
}

void Asignatura::mostrarPersona(){
    if(!per_.empty()){
        std::cout<<"No hay persona" << std::endl;
    }
    else{
        for(Personas::iterator i = per_.begin(); i != per_.end(); i++){
            (*i)->mostrar();
        }
    }
}