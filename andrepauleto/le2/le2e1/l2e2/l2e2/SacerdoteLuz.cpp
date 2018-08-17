#include "SacerdoteLuz.h"



SacerdoteLuz::SacerdoteLuz()
{
	this->nome = "Sarcedote de Luz";
	this->forca = 1;
	this->vida = 4;
	this->defesa = 4;
	this->destreza = 3;
	this->inteligencia = 8;
}


SacerdoteLuz::~SacerdoteLuz()
{
}

void SacerdoteLuz::lancarMagiaLuz()
{
	std::cout << "- SARCEDOTE DE LUZ - LANÇAR MAGIA DE LUZ" << std::endl;
}
