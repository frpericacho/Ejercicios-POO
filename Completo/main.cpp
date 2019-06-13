#include <iostream>
#include "cliente.hpp"
#include "viaje.hpp"
#include "ciudad.hpp"
#include "hotel.hpp"
#include "presupuesto.hpp"
#include "reserva.hpp"
#include "confirmada.hpp"

int main(){
    cliente c("a","b","c",1);
    viaje v("d","10/08/1998");
    ciudad ci_O("cadiz");
    ciudad ci_D("madrid");
    hotel h("risort","calle",3);
    presupuesto p("abc","10/08/1998","12:25","20/10/1998","15:54",15.2);
    reserva r(1,"9/08/1998", 5.6);
    confirmada con(1,"9/08/1998", 5.6,"9/08/1998","tarjeta");

    //c.asocia(v);
    //v.asocia(c);
    //v.asocia_O(ci_O);
    //v.asocia_D(ci_D);
    //ci_D.asocia_D(v);
    //ci_O.asocia_O(v);
    //ci_D.asocia_H(h);
    //h.asocia(ci_D);
    //h.asocia(p);
    //p.asocia(h);
    p.asocia(r);
    r.asocia(p);
}