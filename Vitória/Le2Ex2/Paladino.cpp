#include "Paladino.h"



Paladino::Paladino()
{
	nome = "Thorin";
	reino = "Mord";
	vida = 200;
	stamina = 50;
	magia = 250;
	forca = 200;
}


Paladino::~Paladino()
{
}

void Paladino::Abencoar()
{
	cout << "Deus eh pai:Magia em: " << magia << endl;
}
