#ifndef RESERVA_HPP
#define RESERVA_HPP
#include <string>
#include "presupuesto.hpp"

class presupuesto;

class reserva {
 public:
  reserva(int num, std::string fr, double s)
      : num_reser_(num), fecha_reser_(fr), senial_(s) {}
  void asocia(presupuesto&);
  presupuesto& asocia() const;

 private:
  presupuesto* prep;
  int num_reser_;
  std::string fecha_reser_;
  double senial_;
};

#endif