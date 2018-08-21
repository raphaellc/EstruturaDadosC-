#include "Barbaro.h"



Barbaro::Barbaro()
{
	nome = "Atila";
	reino = "Morter";
	vida = 200;
	stamina = 50;
	magia = 0;
	forca = 500;
}


Barbaro::~Barbaro()
{
}

void Barbaro::SuperForca()
{
	cout << "Morrao,morrao,morrao:Voce atacou, dano de: "<<forca<<endl;
}
