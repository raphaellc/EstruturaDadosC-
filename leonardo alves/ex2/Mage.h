#pragma once
#include "human.h"

class Mage:
	public Human
{
public:
	Mage(int weapon);
	~Mage();
	int getMagicWeapon();
	int getSkill1();
	int getSkill2();
	float use_skill1();
	float use_skill2();
protected:
	int mage_wisdom;
	int magic_weapon,
		skill1,
		skill2;
};

