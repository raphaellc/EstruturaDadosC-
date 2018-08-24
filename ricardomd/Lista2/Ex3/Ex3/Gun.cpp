#include "Gun.h"
#include <iostream>


Gun::Gun()
{
}


Gun::~Gun()
{
}

void Gun::shoot()
{
	std::cout << this->type << " deals " << this->getBaseDamage() + ammo.getBonusDamage() << " points of damage!!!\n";
	this->ammo.setRoundsLeft(ammo.getRoundsLeft()-1);
	std::cout << this->ammo.getRoundsLeft() << " rounds left...\n";
}

void Gun::reload()
{
	std::cout << "Reload!\n";
	ammo.setRoundsLeft(7);
}

int Gun::getBaseDamage()
{
	return this->baseDamage;
}

int Gun::getBasePenetration()
{
	return this->basePenetration;
}

void Gun::setBaseDamage(int x)
{
	this->baseDamage = x;
}

void Gun::setBasePenetration(int x)
{
	this->basePenetration = x;
}
