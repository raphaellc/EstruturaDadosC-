#include "Ranger.h"



Ranger::Ranger()
{
}


Ranger::~Ranger()
{
}

void Ranger::atirar(int da)
{
	dano = da;
	cout << "Você atirou uma flecha causando " << dano << " de dano.\n";
}
