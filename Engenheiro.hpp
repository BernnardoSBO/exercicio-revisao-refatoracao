#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  public:
    Engenheiro (std::string nome, double salarioHora, int projetos);
  private: 
	int projetos;
	
};

