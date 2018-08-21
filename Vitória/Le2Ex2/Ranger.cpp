#include "Ranger.h"



Ranger::Ranger()
{
	nome = "Han";
	reino = "Legen";
	vida = 100;
	stamina = 100;
	magia = 0;
	forca = 90;
	velocidade = 150;
}


Ranger::~Ranger()
{
}

void Ranger::FlechadaNaCara()
{
	cout << "Voce esta na minha mira: Velocidade em: " << velocidade << endl;
}
