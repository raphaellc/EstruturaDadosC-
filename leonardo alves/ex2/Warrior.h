#pragma once
#include "Human.h"

class Warrior:
	public Human
{
public:
	Warrior(int weapon);
	~Warrior();
	int getWeapon();
	int getSkill();
	float attack();
	float use_skill();
protected:
	int warrior_strenght;
	int weapon,
		skill;
};

