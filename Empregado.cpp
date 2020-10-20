#include <iostream>
#include <string>
#include "Empregado.hpp"

//Contrutor
Empregado::Empregado (std::string _nome, double _salarioHora) {
    nome = _nome;
    salarioHora = _salarioHora;
}

//Set
void Empregado::setNome (std::string _nome) {
    nome = _nome;
}

void Empregado::setSalarioHora (double _salarioHora) {
    salarioHora = _salarioHora;
}

//get
std::string Empregado::getNome () {
    return nome;
}
double Empregado::getSalarioHora () {
    return salarioHora;
}
//Outros Metodos
double Empregado::pagamentoMes (double horasTrabalhadas) {
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > JORNADAPADRAO) {
        double horasExtras = horasTrabalhadas - JORNADAPADRAO;
        horasTrabalhadas += horasExtras / 2;
      }
	return horasTrabalhadas * salarioHora;
}

