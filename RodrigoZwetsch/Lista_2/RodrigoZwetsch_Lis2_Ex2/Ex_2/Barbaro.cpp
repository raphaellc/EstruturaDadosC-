#include "Barbaro.h"



Barbaro::Barbaro()
{
	força = 13;
	dano = 35;
	vida = 300;
	estamina = 200;
	mana = 0;
	defesa = 7;
}


Barbaro::~Barbaro()
{
}

void Barbaro::Cobrolhada()
{
	std::cout << "Cobrolho deu uma cobrolhada na cara de seu oponente dando 1 de dano e nivel 4 de nojo." << std::endl;
}

void Barbaro::Furia()
{
	std::cout << "Cobrolho dara 200% a mais de dano por 30 segundos." << std::endl;
}
