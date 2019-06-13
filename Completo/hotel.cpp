#include "hotel.hpp"

void hotel::asocia(ciudad& c){
    this->ci = &c;
}

void hotel::asocia(presupuesto& prep){
    p.insert(&prep);
}

ciudad& hotel::asocia_C() const{
    return *ci;
}

const hotel::Prep& hotel::asocia_H() const{
    return p;
}

