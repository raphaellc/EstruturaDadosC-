#include "Mago.h"



Mago::Mago()
{
	nome = "Mago";
	idade = 120;
}


Mago::~Mago()
{
}



void Mago::meditar()
{
	std::cout << "*meditar*" << std::endl;
}

void Mago::asas()
{
	std::cout << "*voar*" << std::endl;
}

void Mago::bolaDeFogo()
{
	std::cout << "*bola de fogo*" << std::endl;
}

void Mago::Meteoro()
{
	std::cout << "*meteoro*" << std::endl;
}
