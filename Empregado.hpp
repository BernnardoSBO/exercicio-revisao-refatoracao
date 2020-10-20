#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
#define JORNADAPADRAO 8

class Empregado {
	
  public:
  //Construtor
    Empregado (std::string _nome, double _salarioHora);

  //set
    void setNome (std::string _nome);
    void setSalarioHora (double _salarioHora);

  //get
    std::string getNome ();
    double getSalarioHora ();

  //metodos  
    double pagamentoMes (double horasTrabalhadas);
    
  private:
    double salarioHora;
    std::string nome;
};

#endif
