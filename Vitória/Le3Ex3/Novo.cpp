#include "Novo.h"
#include<iostream>


Novo::Novo()
{
	endereco = "Av. Joao Wallig, 1800 ";
	valor = valor + 5000;
}


Novo::~Novo()
{
}

void Novo::Endereco()
{
	std::cout << "Endereco no bairro Novo: " << endereco << std::endl;
}

void Novo::Valor()
{
	std::cout << "Valor da casa: " << valor << std::endl;
}
