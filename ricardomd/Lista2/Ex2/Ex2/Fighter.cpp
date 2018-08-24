#pragma once
#include "Fighter.h"


Fighter::Fighter()
{
	Character();
	this->name = "Fighter";
	this->strength += 4;
	this->dexterity += 2;
	this->constitution += 4;
	this->isDefending = false;
}


Fighter::~Fighter()
{
}

void Fighter::defend()
{
	if (this->isDefending)
	{
		this->isDefending = false;
		std::cout << this->getName() + " is not defending anymore...\n";
	}
	else
	{
		if (this->getJumping()) { this->jump(); }
		if (this->getResting()) { this->rest(); }
		if (this->getWalking()) { this->walk(); }
		this->isDefending = true;
		std::cout << this->name + " is defending!\n";

	}
}

void Fighter::meleeAttack()
{
	if (this->getDefending())
	{
		std::cout << "Cannot attack while defending....\n";
	}
	else
	{
		int damage = rand() % (18 - 1) + 1;
		std::cout << this->name + " attacked for " << damage << " points of damage!\n";
	}
}

bool Fighter::getDefending()
{
	return isDefending;
}