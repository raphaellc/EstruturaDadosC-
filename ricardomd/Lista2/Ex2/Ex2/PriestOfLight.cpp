#pragma once
#include "PriestOfLight.h"



PriestOfLight::PriestOfLight()
{
	Cleric();
	this->wisdom += 2;
	this->name = "Priest of Light";
}


PriestOfLight::~PriestOfLight()
{
}

void PriestOfLight::blessAllies()
{
	std::cout << this->name << " blessed nearby allies!\n";
}

void PriestOfLight::clericSpell()
{
	std::cout << this->name << " turn nearby undeads into fear!\n";
}

void PriestOfLight::castMagic()
{
	std::cout << this->name << " casts a ray of sunbean into enemies eyes!";
}

