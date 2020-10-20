#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

//construtor
Engenheiro::Engenheiro (std::string nome, double salarioHora, int _projetos) : Empregado (nome, salarioHora), projetos(_projetos) {}

//set
void Engenheiro::setProjetos (int _projetos) {
  projetos = _projetos;
}

//get
int Engenheiro::getProjetos () {
  return projetos;
}