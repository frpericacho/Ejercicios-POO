#include "reserva.hpp"

void reserva::asocia(presupuesto& p){
    this->prep = &p;
}

presupuesto& reserva::asocia() const{
    return *prep;
}