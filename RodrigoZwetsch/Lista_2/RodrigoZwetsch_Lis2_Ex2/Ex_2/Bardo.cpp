#include "Bardo.h"



Bardo::Bardo()
{
	força = 3;
	dano = 4;
	vida = 80;
	estamina = 130;
	mana = 200;
	defesa = 5;
}


Bardo::~Bardo()
{
}

void Bardo::Cantada()
{
	std::cout << "Trovador deu uma cantada na donzela e levou um tapa. -5 de vida" << std::endl;
}

void Bardo::Ninar()
{
	std::cout << "Trovador cantou uma musica tediosa e todos dormiram." << std::endl;
}
