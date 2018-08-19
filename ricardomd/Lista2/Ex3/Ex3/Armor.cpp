#include "Armor.h"
#include <iostream>



Armor::Armor()
{
	this->defense = 10;
}


Armor::~Armor()
{
}

void Armor::lastStand()
{
	std::cout << "The armor glows blue and it's defense is now: " << this->getDefense() * 2 << "\n";
}

int Armor::getDefense()
{
	return this->defense;
}
