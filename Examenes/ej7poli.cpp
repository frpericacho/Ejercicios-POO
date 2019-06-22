#include <string>
using namespace std;

class empleado {
 public:
  empleado() {}
  empleado(string nom, string num) : nombre_(nom), numero_(num) {}

 private:
  string nombre_;
  string numero_;
};

class empleadoconcosas : virtual public empleado {
 public:
  empleadoconcosas(unsigned t, unsigned c) : empleado(), telef_(t), calle_(c) {}

 private:
  unsigned telef_;
  unsigned calle_;
};