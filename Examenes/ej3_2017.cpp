#include <algorithm>
#include <iterator>
#include <list>

class ListaOrdenada {
 public:
  typedef std::list<double>::const_iterator iterator;
  ListaOrdenada();
  void insertar(double e);
  iterator buscar(double e) const;
  iterator begin() const;
  iterator end() const;

 private:
  std::list<double> l;
};

void ListaOrdenada::insertar(double e){
    l.insert(l.end(),e);
}

ListaOrdenada::iterator ListaOrdenada::buscar(double e) const{
    return std::find(l.begin(),l.end(),e);
}

ListaOrdenada::iterator ListaOrdenada::begin() const{
    return l.begin();
}

ListaOrdenada::iterator ListaOrdenada::end() const{
    return l.end();
}