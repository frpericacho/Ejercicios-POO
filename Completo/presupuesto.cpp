#include "hotel.hpp"

void presupuesto::asocia(hotel& htl){
    this->h = &htl;
}

void presupuesto::asocia(reserva& res){
    this->reser = &res;
}

hotel& presupuesto::asocia_H() const{
    return *h;
}

reserva& presupuesto::asocia_R() const{
    return *reser;
}