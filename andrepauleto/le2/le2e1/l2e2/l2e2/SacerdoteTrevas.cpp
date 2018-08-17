#include "SacerdoteTrevas.h"



SacerdoteTrevas::SacerdoteTrevas()
{
	this->nome = "Sarcedote das Trevas";
	this->forca = 2;
	this->vida = 2;
	this->defesa = 2;
	this->destreza = 3;
	this->inteligencia = 11;
}


SacerdoteTrevas::~SacerdoteTrevas()
{
}

void SacerdoteTrevas::lancarMagiaTrevas()
{
	std::cout << "- SACERDOTE DAS TREVAS - LANÇAR MAGIA DAS TREVAS" << std::endl;
}
