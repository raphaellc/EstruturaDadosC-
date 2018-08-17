#include "Ladino.h"



Ladino::Ladino()
{
	this->nome = "Ladino";
	this->forca = 4;
	this->vida = 5;
	this->defesa = 5;
	this->destreza = 11;
	this->inteligencia = 1;
}


Ladino::~Ladino()
{
}

void Ladino::ficarInvisivel()
{
	std::cout << "- LADINO - FICAR INVISIVEL" << std::endl;
}
