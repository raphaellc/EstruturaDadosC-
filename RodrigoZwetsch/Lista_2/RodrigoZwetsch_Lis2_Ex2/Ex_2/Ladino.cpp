#include "Ladino.h"



Ladino::Ladino()
{
	força = 6;
	dano = 30;
	vida = 100;
	estamina = 300;
	mana = 40;
	defesa = 20;
}


Ladino::~Ladino()
{
}

void Ladino::Apunhalada_das_sombras()
{
	std::cout << "Raposo deu uma apunhalada surpresa e matou o seu oponete." << std::endl;
}

void Ladino::Roubar()
{
	std::cout << "Raposo roubou todas as roupas de seu alvo e não foi descoberto." << std::endl;
}
