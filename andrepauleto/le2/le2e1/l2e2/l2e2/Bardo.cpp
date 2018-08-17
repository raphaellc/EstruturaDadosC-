#include "Bardo.h"



Bardo::Bardo()
{
	this->nome = "Bardo";
	this->forca = 1;
	this->vida = 3;
	this->defesa = 3;
	this->destreza = 2;
	this->inteligencia = 5;
}



Bardo::~Bardo()
{
}

void Bardo::tocarMusica()
{
	std::cout << "- BARDO - TOCAR MÚSICA" << std::endl;
}
