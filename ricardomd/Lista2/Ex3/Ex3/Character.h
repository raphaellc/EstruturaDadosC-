#pragma once
#include "Armor.h"
#include "Rifle.h"
#include "Ammunition.h"
#include "MedicKit.h"
class Character
{
public:
	int HP;
	int accuracy;
	Armor armor;
	Rifle rifle;
	AmmunitionRifle ammunition;
	MedicKit medkit;

	Character();
	~Character();
};

