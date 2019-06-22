#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Empleados {
 public:
  Empleados(string n, string nom, string ape, string fe)
      : n_empleado_(n), nombre_(nom), apellidos_(ape), f_alta_(fe) {}
  Empleados() {}
  virtual string n_empleado() const { return n_empleado_; }
  virtual string nombre() const { return nombre_; }
  virtual string apellidos() const { return apellidos_; }
  virtual string f_alta() const { return f_alta_; }

 protected:
  string n_empleado_;
  string nombre_;
  string apellidos_;
  string f_alta_;
};

class EmpleadoConCartera : virtual public Empleados {
 public:
  EmpleadoConCartera(unsigned c, unsigned h) : clientes_(c), horas_(h) {}
  unsigned clientes() const { return clientes_; }
  unsigned horas() const { return horas_; }

 protected:
  unsigned clientes_;
  unsigned horas_;
};