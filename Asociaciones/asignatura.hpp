#ifndef ASIGNATURA_HPP
#define ASIGNATURA_HPP
#include "persona.hpp"
#include <string>
#include <set>

class Persona;

class Asignatura{
    public:
        Asignatura(std::string nom,std::string area);
        void mostrar();
        void impartida(Persona& );
        void mostrarPersona();
    private:
        std::string Nombre,area_;
        typedef std::set<Persona*> Personas;
        Personas per_;
        //Persona *per_;  //UNO
};

#endif