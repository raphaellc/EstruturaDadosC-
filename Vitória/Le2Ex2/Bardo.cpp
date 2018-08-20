#include "Bardo.h"



Bardo::Bardo()
{
	nome = "Kurt";
	reino = "Guiterstain";
	vida = 50;
	stamina = 75;
	magia = 125;
	forca = 50;
}


Bardo::~Bardo()
{
}

void Bardo::SomMortal()
{
	cout << "Solta a batida:Magia musical em: "<<magia<<endl;
}
