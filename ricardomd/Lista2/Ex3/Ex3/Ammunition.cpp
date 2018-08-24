#include "Ammunition.h"



Ammunition::Ammunition()
{
}


Ammunition::~Ammunition()
{
}

int Ammunition::getBonusPenetration()
{
	return this->bonusPenetration;
}

int Ammunition::getBonusDamage()
{
	return this->bonusDamage;
}

void Ammunition::setBonusPenetration(int x)
{
	this->bonusPenetration = x;
}

void Ammunition::setBonusDamage(int x)
{
	this->bonusDamage = x;
}

int Ammunition::getRoundsLeft()
{
	return this->roundsLeft;
}

void Ammunition::setRoundsLeft(int x)
{
	this->roundsLeft = x;
}
