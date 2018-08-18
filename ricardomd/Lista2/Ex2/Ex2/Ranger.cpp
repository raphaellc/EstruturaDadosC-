#pragma once
#include "Ranger.h"



Ranger::Ranger()
{
	Character();
	this->dexterity += 6;
	this->constitution += 2;
	this->strength += 6;
	this->name = "Ranger";
}


Ranger::~Ranger()
{
}

void Ranger::meleeAttack()
{
	std::cout << this->name << " swing his dual swords and hit the enemy for 16 damage!\n";
}

void Ranger::castMagic()
{
	std::cout << this->name << " summons an animal companion to fight by his side!\n";
}

void Ranger::getAllStats()
{
	std::cout << "Name: " << this->name << "\n";
	std::cout << "Strength: " << this->Fighter::getStrength() << "\n";
	std::cout << "Dexterity: " << this->Fighter::getDexterity() << "\n";
	std::cout << "Constitution: " << this->Fighter::getConstitution() << "\n";
	std::cout << "Intelligence: " << this->Mystic::getIntelligence() << "\n";
	std::cout << "Wisdom: " << this->Mystic::getWisdom() << "\n";
	std::cout << "Charisma: " << this->Mystic::getCharisma() << "\n";

}
