#ifndef DOCTORADO_HPP
#define DOCTORADO_HPP   
#include "estudiante.hpp"
#include <string>

class Doctorado: public Estudiante{
    public:
        Doctorado(std::string , int , std::string , int );
        void mostrar() const;
    protected:
        std::string tutor;
        int programa;
};

#endif