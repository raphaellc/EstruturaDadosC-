#include "Paladino.h"



Paladino::Paladino()
{
	força = 9;
	dano = 18;
	vida = 180;
	estamina = 150;
	mana = 130;
	defesa = 35;
}


Paladino::~Paladino()
{
}

void Paladino::Deus_vult()
{
	std::cout << "DEUS VULT!!! DEUS VULT!!! DEUS VULT!!! (100% mais defesa, ataque e vida por 30 segundos)" << std::endl;
}

void Paladino::Santa_granada()
{
	std::cout << "Crusado lançou a santa granada gerando 200 de nos infieis" << std::endl;
}
