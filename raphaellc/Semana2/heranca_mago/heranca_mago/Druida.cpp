#include "Druida.h"



Druida::Druida()
{
	Mago::Mago();
}


Druida::~Druida()
{
	Mago::~Mago();
}

void Druida::getHigh()
{
	high_state = true;
}

bool Druida::invocarMagia()
{
	Mago::invocarMagia();
	return high_state;
}


