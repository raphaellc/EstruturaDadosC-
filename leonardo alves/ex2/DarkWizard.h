#pragma once
#include "Mage.h"
class DarkWizard:
	public Mage
{
public:
	DarkWizard(int weapon);
	~DarkWizard();
	int getMagicWeapon();
	int getSkill1();
	int getSkill2();
	float use_skill1();
	float use_skill2();
protected:
	int dark_wizard_wisdom;
	int magic_weapon,
		skill1,
		skill2;
};
