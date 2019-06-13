#ifndef CONFIRMADA_HPP
#define CONFIRMADA_HPP
#include <string>
#include "reserva.hpp"

class confirmada : public reserva {
 public:
  confirmada(std::string fc, std::string fp)
      : fecha_confir(fc), forma_pago(fp) {}

 private:
  std::string fecha_confir;
  std::string forma_pago;
};

#endif