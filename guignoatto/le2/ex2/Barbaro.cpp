#include "Barbaro.h"
#include <iostream>


Barbaro::Barbaro()
{
	nome = "Barbaro";
	idade = 40;
}


Barbaro::~Barbaro()
{
}

void Barbaro::jogarMachado()
{
	std::cout << "*jogar machado*" << std::endl;
}

void Barbaro::grito_de_guerra()
{
	std::cout << "*grito de guerra*" << std::endl;
}

void Barbaro::furia()
{
	std::cout << "*fúria*" << std::endl;
}