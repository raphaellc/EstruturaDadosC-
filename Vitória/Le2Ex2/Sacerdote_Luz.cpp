#include "Sacerdote_Luz.h"



Sacerdote_Luz::Sacerdote_Luz()
{
	nome = "Gibili";
	reino = "Tros";
	vida = 100;
	stamina = 80;
	magia = 300;
	forca = 50;
}


Sacerdote_Luz::~Sacerdote_Luz()
{
}

void Sacerdote_Luz::Lumina()
{
	cout << "LUMINOS:Magia da Luz em: " << magia << endl;
}
