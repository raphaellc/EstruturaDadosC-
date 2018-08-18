#pragma once
#include "Mystic.h"



Mystic::Mystic()
{
	Character();
	this->name = "Mystic";
	this->intelligence += 4;
	this->wisdom += 2;
	this->isConcentrate = false;
}


Mystic::~Mystic()
{
}

void Mystic::castMagic()
{
	if (this->getConcentrate())
	{
		std::cout << "Cannot cast magic while concentrating....\n";
	}
	else
	{
		int damage = rand() % (18 - 1) + 1;
		std::cout << this->name + " attacked for " << damage << " points of damage!\n";
	}
}


void Mystic::concentrate()
{
	if (this->getConcentrate())
	{
		this->isConcentrate = false;
		std::cout << this->getName() + " is not concentrating anymore...\n";
	}
	else
	{
		if (this->getJumping()) { this->jump(); }
		if (this->getResting()) { this->rest(); }
		if (this->getWalking()) { this->walk(); }
		this->isConcentrate = true;
		std::cout << this->name + " is defending!\n";

	}
}

bool Mystic::getConcentrate()
{
	return isConcentrate;
}
