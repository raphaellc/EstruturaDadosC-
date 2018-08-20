#include "Clerigo.h"

Clerigo::Clerigo()
{
	nome = "Titus";
	reino = "Forest";
	vida = 50;
	stamina = 75;
	magia = 150;
	forca = 50;
}


Clerigo::~Clerigo()
{

}

void Clerigo::cura()
{
	cout << "Voce nao ira morrer:Magia de cura em "<<magia<<endl;
}

