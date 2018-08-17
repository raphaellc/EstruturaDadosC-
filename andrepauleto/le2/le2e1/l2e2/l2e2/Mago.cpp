#include "Mago.h"



Mago::Mago()
{
	this->nome = "Mago";
	this->forca = 1;
	this->vida = 2;
	this->defesa = 2;
	this->destreza = 3;
	this->inteligencia = 10;
}


Mago::~Mago()
{
}

void Mago::lancarMeteoro()
{
	std::cout << "- MAGO - LANÇAR METEÓRO" << std::endl;
}
