#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP
#include <iostream>
#include <string>

class Estudiante{
    public:
        Estudiante(std::string ,int );
        void mostrar() const;
    protected:
        std::string Nombre;
        int dni;
};

#endif