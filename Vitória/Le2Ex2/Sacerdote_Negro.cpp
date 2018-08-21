#include "Sacerdote_Negro.h"



Sacerdote_Negro::Sacerdote_Negro()
{
	nome = "Gendaf";
	reino = "Lux";
	vida = 100;
	stamina = 80;
	magia = 300;
	forca = 50;
}


Sacerdote_Negro::~Sacerdote_Negro()
{
}

void Sacerdote_Negro::Darkside()
{
	cout << "Trevosos:Magia Negra em: " << magia << endl;
}
