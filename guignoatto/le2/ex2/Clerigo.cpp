#include "Clerigo.h"



Clerigo::Clerigo()
{
	nome = "Clerigo";
	idade = 80;
}


Clerigo::~Clerigo()
{
}

void Clerigo::curar()
{
	std::cout << "*curar*" << std::endl;
}

void Clerigo::ressuscitar()
{
	std::cout << "*ressuscitar*" << std::endl;
}
