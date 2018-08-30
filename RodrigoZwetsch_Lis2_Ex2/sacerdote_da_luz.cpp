#include "sacerdote_da_luz.h"



sacerdote_da_luz::sacerdote_da_luz()
{
	força = 5;
	dano = 10;
	vida = 110;
	estamina = 100;
	mana = 450;
	defesa = 14;
}


sacerdote_da_luz::~sacerdote_da_luz()
{
}

void sacerdote_da_luz::Purificacao()
{
	std::cout << "Aqua usou Purificação e causou 5000 de dano em mortos vivos." << std::endl;
}
