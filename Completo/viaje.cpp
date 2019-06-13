#include "viaje.hpp"

void viaje::asocia(cliente& client){
    this->c = &client;
}

cliente& viaje::asocia() const{
    return *c;
}

void viaje::asocia_O(ciudad& CO){
    this->ci_origen = &CO;
}

ciudad& viaje::asocia_O() const{
    return *ci_origen;
}

void viaje::asocia_D(ciudad& CD){
    this->ci_dest = &CD;
}

ciudad& viaje::asocia_D() const{
    return *ci_dest;
}