#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"
#define MESESANO 12

//construtor
Vendedor::Vendedor (std::string _nome, double _salarioHora, double _quotaMensalVendas) : Empregado (_nome, _salarioHora) , quotaMensalVendas(_quotaMensalVendas) {}

//Set
void Vendedor::setQuotaMensalVendas (double _quotaMensalVendas) {
	quotaMensalVendas = _quotaMensalVendas;
}

//Metodos
double Vendedor::quotaTotalAnual() {
	  return quotaMensalVendas * MESESANO;
}


