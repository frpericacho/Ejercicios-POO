#include "ciudad.hpp"

void ciudad::asocia_O(viaje& co){
    CO.insert(&co);
}

void ciudad::asocia_D(viaje& cd){
    CD.insert(&cd);
}

void ciudad::asocia_H(hotel& hot){
    H.insert(&hot);
}

const ciudad::ci_Origen& ciudad::asocia_O() const{
    return CO;
}

const ciudad::ci_Destino& ciudad::asocia_D() const{
    return CD;
}

const ciudad::htl& ciudad::asocia_H() const{
    return H;
}