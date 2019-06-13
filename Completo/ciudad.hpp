#ifndef CIUDAD_HPP
#define CIUDAD_HPP
#include <set>
#include <string>
#include "hotel.hpp"
#include "viaje.hpp"

class viaje;
class hotel;

class ciudad {
 public:
  ciudad(std::string nom):nom_(nom){}
  typedef std::set<viaje*> ci_Origen;
  typedef std::set<viaje*> ci_Destino;
  typedef std::set<hotel*> htl;

  void asocia_O(viaje&);
  void asocia_D(viaje&);
  void asocia_H(hotel&);

  const ci_Origen& asocia_O() const;
  const ci_Destino& asocia_D() const;
  const htl& asocia_H() const;

 private:
  std::string nom_;
  ci_Origen CO;
  ci_Destino CD;
  htl H;
};

#endif