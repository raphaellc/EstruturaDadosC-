#pragma once
#include "Barbarian.h"



Barbarian::Barbarian()
{
	Warrior();
	this->name = "Barbarian";
	this->strength += 4;
	this->constitution += 2;
}


Barbarian::~Barbarian()
{
}

void Barbarian::warriorSkill()
{
	std::cout << this->name << " enter in a frenzy! increasing greatly his damage!\n";
}

void Barbarian::meleeAttack()
{
	std::cout << this->name << " swings its huge sword hitting all monsters nearby for 10 damage!\n";
}
