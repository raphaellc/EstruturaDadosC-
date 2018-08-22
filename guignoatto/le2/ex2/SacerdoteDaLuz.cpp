#include "SacerdoteDaLuz.h"



SacerdoteDaLuz::SacerdoteDaLuz()
{
	nome = "Sacerdote da Luz";
	idade = 99;
}


SacerdoteDaLuz::~SacerdoteDaLuz()
{
}


void SacerdoteDaLuz::Regen()
{
	cout << "*regen*" << endl;
}

void SacerdoteDaLuz::barreiraDeLuz() 
{
	cout << "** barreira de luz" << endl;
}