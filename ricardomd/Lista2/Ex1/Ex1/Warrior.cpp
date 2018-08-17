#include "Warrior.h"


Warrior::Warrior()
{
	Fighter();
	this->strength += 2;
	this->name = "Warrior";
}


Warrior::~Warrior()
{
}

void Warrior::heroicStrike()
{
	int damage = rand() % (36 - 10) + 10;
	std::cout << this->getName() + " attacked for " << damage << " points of damage!\n";
}
