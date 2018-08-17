#pragma once
#include "Warrior.h"

class Barbarian :
	public Warrior
{
public:
	Barbarian(int weapon);
	~Barbarian();
	int getWeapon();
	int getSkill1();
	int getSkill2();
	float attack();
	float use_skill();
	float use_skill2();
protected:
	int barbarian_strength;
	int barbarian_skill1,
		barbarian_skill2;
};

