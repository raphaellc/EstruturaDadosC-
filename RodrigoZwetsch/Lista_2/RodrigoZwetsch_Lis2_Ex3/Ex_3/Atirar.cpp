#include "Atirar.h"

Atirar::Atirar()
{
	std::cout << "Total de balas: " << municao << std::endl;
	std::cout << "BANG! BANG! BANG! (-3 balas)" << std::endl;
	municao = municao - 3;
	std::cout << "Total de balas: " << municao << std::endl;
}

Atirar::~Atirar()
{
}

