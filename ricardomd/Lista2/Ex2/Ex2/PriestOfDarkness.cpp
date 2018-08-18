#pragma once
#include "PriestOfDarkness.h"



PriestOfDarkness::PriestOfDarkness()
{
	this->name = "Priest of Darkness";
}


PriestOfDarkness::~PriestOfDarkness()
{
}

void PriestOfDarkness::curseEnemies()
{
	std::cout << this->name << " cursed nearby enemies!\n";
}

void PriestOfDarkness::clericSpell()
{
	std::cout << this->name << " caused harm to an enemy with dark energy for 40 damage!\n";
}

void PriestOfDarkness::castMagic()
{
	std::cout << this->name << " creates a shield of wicked magic around himself!\n";
}
