#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "viaje.hpp"
#include <string>
#include <set>

class viaje;

class cliente {
 public:
  cliente(std::string dni,std::string nom,std::string dir,int telf):dni_(dni),nombre_(nom),dir_(dir),telf_(telf){}
  typedef std::set<viaje*> vi;
  void asocia(viaje&);
  const vi& asocia() const;
 private:
  std::string dni_;
  std::string nombre_;
  std::string dir_;
  int telf_;
  vi v;
};

#endif