#include "Velho.h"
#include<iostream>


Velho::Velho()
{
	endereco = " Av. João Pessoa, 791";
	valor = valor - 50000;
}


Velho::~Velho()
{
}

void Velho::Endereco()
{
	std::cout << "Endereco no bairro Velho: " << endereco << std::endl;
}

void Velho::Valor()
{
	std::cout << "Valor da casa: " << valor << std::endl;
}
