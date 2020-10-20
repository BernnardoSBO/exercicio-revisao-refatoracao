

#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
#define JORNADAPADRAO 8

class Empregado {
	
  public:
    double salarioHora;
    std::string nome;
    
    double pagamentoMes(double horasTrabalhadas);
};

#endif
