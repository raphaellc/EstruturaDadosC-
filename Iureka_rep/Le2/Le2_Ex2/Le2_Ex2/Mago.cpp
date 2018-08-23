#include "Mago.h"



Mago::Mago()
{
	nome = "Bruxinho";
	forcaMagica = 100;
}


Mago::~Mago()
{
}

void Mago::magia()
{
	std::cout << "Alacazan! *Conjurando Magia*" << std::endl;
}
