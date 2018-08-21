#include "pch.h"
#include "Paladino.h"


Paladino::Paladino()
{
}


Paladino::~Paladino()
{
}

void Paladino::setFacanhas(string faca)
{
	facanhas = faca;
}

string Paladino::getFacanhas()
{
	return facanhas;
}

void Paladino::vesti()
{
	cout << "Vestimentas: Heavy-Armor." << endl;
}
