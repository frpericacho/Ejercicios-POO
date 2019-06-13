#include "cliente.hpp"

void cliente::asocia(viaje& viaj){
    v.insert(&viaj);
}

const cliente::vi& cliente::asocia() const{
    return v;
}