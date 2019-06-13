#ifndef CONFIRMADA_HPP
#define CONFIRMADA_HPP
#include <string>
#include "reserva.hpp"

class confirmada : public reserva {
 public:
  confirmada(int n,std::string f, double s, std::string fc, std::string fp)
      : reserva(n,f,s), fecha_confir(fc), forma_pago(fp) {}

 private:
  std::string fecha_confir;
  std::string forma_pago;
};

#endif