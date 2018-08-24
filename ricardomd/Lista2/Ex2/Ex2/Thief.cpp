#pragma once
#include "Thief.h"



Thief::Thief()
{
	Fighter();
	this->dexterity += 6;
	this->strength -= 2;
	this->constitution -= 2;
	this->isStealth = false;
	this->isOnTheBack = false;
	this->name = "Thief";
}


Thief::~Thief()
{
}

void Thief::stealth()
{
}

void Thief::backStab()
{
	if (this->getStealth())
	{
		std::cout << "BACKSTABED! Critically hit for 50 damage!\n";
	}
	else
	{
		std::cout << "Cannot backstab while not in stealth!!!!\n";
	}
}

bool Thief::getStealth()
{
	return isStealth;
}

bool Thief::getIsOnTheBack()
{
	return isOnTheBack;
}
