#include "Mago.h"



Mago::Mago()
{
	força = 4;
	dano = 7;
	vida = 100;
	estamina = 100;
	mana = 400;
	defesa = 15;
}


Mago::~Mago()
{
}

void Mago::EXPLOSION()
{
	std::cout << "Megumim usou EXPLOSION!!! e causou 99999999 de dano." << std::endl;
}
