#include "Clerigo.h"

Clerigo::Clerigo()
{
	this->nome = "Clérigo";
	this->forca = 1;
	this->vida = 3;
	this->defesa = 3;
	this->destreza = 3;
	this->inteligencia = 7;
}


Clerigo::~Clerigo()
{
}

void Clerigo::curar()
{
	std::cout << "- CLÉRIGO - CURAR" << std::endl;
}