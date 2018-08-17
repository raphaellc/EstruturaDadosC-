#include "Ranger.h"



Ranger::Ranger()
{
	this->nome = "Ranger";
	this->forca = 5;
	this->vida = 5;
	this->defesa = 4;
	this->destreza = 11;
	this->inteligencia = 2;
}


Ranger::~Ranger()
{
}

void Ranger::atirarComArco()
{
	std::cout << "- RANGER - ATIRAR COM O ARCO" << std::endl;
}
