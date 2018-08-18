#pragma once
#include "Cleric.h"
#include <string>

Cleric::Cleric()
{
	this->name = "Cleric";
	this->wisdom += 4;
	this->charisma += 2;
}


Cleric::~Cleric()
{
}

void Cleric::clericSpell()
{
	std::cout << this->name << " is ressurecting a fallen dead!\n";
}

void Cleric::getAllStats()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Strength: " << this->Fighter::getStrength() << "\n";
	std::cout << "Dexterity: " << this->Fighter::getDexterity() << "\n";
	std::cout << "Constitution: " << this->Fighter::getConstitution() << "\n";
	std::cout << "Intelligence: " << this->Mystic::getIntelligence() << "\n";
	std::cout << "Wisdom: " << this->Mystic::getWisdom() << "\n";
	std::cout << "Charisma: " << this->Mystic::getCharisma() << "\n";
}

void Cleric::castMagic()
{
	std::cout << this->name << " cast magic! healed a friendly unit for 20 hp!\n";
}
