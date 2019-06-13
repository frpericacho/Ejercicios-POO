#ifndef PERSONA_HPP
#define PERSONA_HPP
#include "asignatura.hpp"
#include <string>
#include <set>

class Asignatura;

class Persona{
    public:
        Persona(std::string nom, std::string dir);
        void mostrar() const;
        void imparte(Asignatura&);
        void mostrarAsignatura() const;
    private:
        std::string Nombre, direccion;
        //Asignatura *asig_;  //UNO
        typedef std::set<Asignatura*> Asignaturas;
        Asignaturas asig_;
};

#endif