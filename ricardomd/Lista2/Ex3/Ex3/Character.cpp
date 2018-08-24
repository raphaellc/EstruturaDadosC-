#include "Character.h"



Character::Character()
{


	this->HP = 50;
	this->accuracy = 10;
	this->armor = Armor();
	this->rifle = Rifle();
	this->ammunition = AmmunitionRifle();
	this->medkit = MedicKit();

}


Character::~Character()
{
}
