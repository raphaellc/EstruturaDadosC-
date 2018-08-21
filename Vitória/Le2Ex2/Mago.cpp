#include "Mago.h"



Mago::Mago()
{
	nome = "Merigold";
	reino = "Hogt";
	vida = 100;
	stamina = 50;
	magia = 300;
	forca = 50;
}


Mago::~Mago()
{
}


void Mago::Magia()
{
	cout << "Alakazam: voce usou magia em: " << magia << endl;
}
