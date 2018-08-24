#pragma once
#include "Mage.h"



Mage::Mage()
{
	Mystic();
	this->name = "Mage";
	this->intelligence += 2;
	this->wisdom += 1;
}


Mage::~Mage()
{
}

void Mage::castTrilementalMagic()
{
	int fireDamage = rand() % (12 - 1) + 1;
	int coldDamage = rand() % (12 - 1) + 1;
	int lightningDamage = rand() % (12 - 1) + 1;
	std::cout << this->name << " casted Trilemental Magic, damage is Fire: " << fireDamage << " Cold: " << coldDamage << " Lightning: " << lightningDamage << "\n";

}
