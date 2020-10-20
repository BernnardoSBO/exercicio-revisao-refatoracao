#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
    double quotaMensalVendas;
    
  public:
  //construtor
    Vendedor (std::string _nome, double _salarioHora, double _quotaMensalVendas);

  //set
    void setQuotaMensalVendas(double _quotaMensalVendas);

  //metodos
    double quotaTotalAnual();	
};

