#ifndef VIAJE_HPP
#define VIAJE_HPP
#include "cliente.hpp"
#include "ciudad.hpp"
#include "presupuesto.hpp"
#include <string>

class viaje {
 public:
  viaje(std::string c,std::string f):cod_(c),fecha_(f){}
  void asocia(cliente&);
  void asocia_O(ciudad&);
  void asocia_D(ciudad&);

  cliente& asocia() const;
  ciudad& asocia_O() const;
  ciudad& asocia_D() const;

 private:
  std::string cod_;
  std::string fecha_;
  cliente* c;
  ciudad* ci_origen, *ci_dest;
  std::set<presupuesto> P;
};

#endif