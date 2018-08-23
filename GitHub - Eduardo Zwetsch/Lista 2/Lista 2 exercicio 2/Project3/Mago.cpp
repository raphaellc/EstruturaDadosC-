#include "Mago.h"



Mago::Mago()
{
}


Mago::~Mago()
{
}

void Mago::usarMagia(int da)
{
	dano = da;
	cout << "Voce jogou uma de suas magias e fez " << dano << " de dano.\n";
}
