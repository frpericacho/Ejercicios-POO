#ifndef HOTEL_HPP
#define HOTEL_HPP
#include <set>
#include <string>
#include "ciudad.hpp"
#include "presupuesto.hpp"

class presupuesto;
class ciudad;

class hotel {
 public:
  hotel(std::string nom, std::string dir, int estr):nom_(nom),dir_(dir),estrellas_(estr){}
  typedef std::set<presupuesto*> Prep;
  void asocia(presupuesto&);
  void asocia(ciudad&);
  ciudad& asocia_C() const;
  const Prep& asocia_H() const;

 private:
  std::string nom_, dir_;
  int estrellas_;
  Prep p;
  ciudad* ci;
};

#endif