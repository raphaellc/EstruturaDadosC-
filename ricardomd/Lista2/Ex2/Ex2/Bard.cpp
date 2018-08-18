#pragma once
#include "Bard.h"



Bard::Bard()
{
	Character();
	this->name = "Bard";
	this->charisma += 4;
	this->intelligence += 2;
	this->wisdom += 2;
	this->dexterity += 2;
}


Bard::~Bard()
{
}

void Bard::castMagic()
{
	std::cout << this->name << " sang a song boosting nearby allies morale!\n";
}

void Bard::getAllStats()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Strength: " << this->Fighter::getStrength() << "\n";
	std::cout << "Dexterity: " << this->Fighter::getDexterity() << "\n";
	std::cout << "Constitution: " << this->Fighter::getConstitution() << "\n";
	std::cout << "Intelligence: " << this->Mystic::getIntelligence() << "\n";
	std::cout << "Wisdom: " << this->Mystic::getWisdom() << "\n";
	std::cout << "Charisma: " << this->Mystic::getCharisma() << "\n";
}
