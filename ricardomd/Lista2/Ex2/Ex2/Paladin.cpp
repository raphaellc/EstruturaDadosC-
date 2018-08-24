#pragma once
#include "Paladin.h"



Paladin::Paladin()
{
	Cleric();
	this->charisma += 6;
	this->name = "Paladin";
}


Paladin::~Paladin()
{
}

void Paladin::clericSpell()
{
	std::cout << this->name << " lay down his hands on an allied wound and heals it\n";
}

void Paladin::castMagic()
{
	std::cout << this->name << " cast smite evil on the vilain!\n";
}

void Paladin::meleeAttack()
{
	std::cout << this->name << " swings his holy sword and hits the enemy for 10 damage!\n";

}
