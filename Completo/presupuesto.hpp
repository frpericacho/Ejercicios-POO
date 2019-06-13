#ifndef PRESUPUESTO_HPP
#define PRESUPUESTO_HPP
#include <string>
#include "hotel.hpp"
#include "reserva.hpp"

class presupuesto {
 public:
  presupuesto(std::string fs, std::string hs, std::string fl, std::string hl,
              std::string trans, double pr)
      : fecha_s(fs),
        hora_s(hs),
        fecha_ll(fl),
        hora_ll(hl),
        trans_(trans),
        precio_(pr) {}
  void asocia(hotel&);
  void asocia(reserva&);
  hotel& asocia_H() const;
  reserva& asocia_R() const;

 protected:
  int num_prep;
  std::string fecha_s, hora_s;
  std::string fecha_ll, hora_ll;
  std::string trans_;
  double precio_;
  hotel* h;
  reserva* reser;
};

#endif