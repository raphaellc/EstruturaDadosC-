#include "Ladino.h"



Ladino::Ladino()
{
	nome = "Al capone";
	reino = "Crime";
	vida = 100;
	stamina = 100;
	magia = 0;
	forca = 250;
	velocidade = 100;
}


Ladino::~Ladino()
{
}

void Ladino::thief()
{
	cout << "HA HA Otario:Voce roubou alguem, velocidade em: " << velocidade << endl;
}
