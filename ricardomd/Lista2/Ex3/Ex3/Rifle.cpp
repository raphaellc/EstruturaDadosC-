#include "Rifle.h"



Rifle::Rifle()
{
	this->baseDamage = 10;
	this->basePenetration = 10;
	this->ammo = AmmunitionRifle();
	this->type = "Rifle";
}


Rifle::~Rifle()
{
}
