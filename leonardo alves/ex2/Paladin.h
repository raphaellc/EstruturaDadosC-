#pragma once
#include "Warrior.h"
class Paladin:
	public Warrior
{
public:
	Paladin(int weapon);
	~Paladin();
	int getWeapon();
	int getSkill1();
	int getSkill2();
	float attack();
	float use_skill();
	float use_skill2();
protected:
	int paladin_strength;
	int paladin_wisdom;
	int barbarian_skill1,
		barbarian_skill2;
};

