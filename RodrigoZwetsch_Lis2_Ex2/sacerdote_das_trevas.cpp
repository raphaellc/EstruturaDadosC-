#include "sacerdote_das_trevas.h"



sacerdote_das_trevas::sacerdote_das_trevas()
{
	força = 4;
	dano = 10;
	vida = 80;
	estamina = 30;
	mana = 800;
	defesa = 5;
}


sacerdote_das_trevas::~sacerdote_das_trevas()
{
}

void sacerdote_das_trevas::Invocar()
{
	std::cout << "Ainz Ooal Gown invocou um cavaleiro morto vivo de nivel 50." << std::endl;
}

void sacerdote_das_trevas::Muralha()
{
	std::cout << "Ainz Ooal Gown invocou uma muralha de ossos com 4000 de vida." << std::endl;
}
