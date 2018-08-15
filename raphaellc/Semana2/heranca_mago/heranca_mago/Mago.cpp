#include "Mago.h"



Mago::Mago()
{
	this->escola_magia = 0;
	this->poder = 0;
}


Mago::~Mago()
{
}

int Mago::getPoder()
{
	return poder;
}

int Mago::getEscMagia()
{
	return escola_magia;
}

bool Mago::andar()
{
	return true;
}

bool Mago::invocarMagia()
{
	return true;
}
