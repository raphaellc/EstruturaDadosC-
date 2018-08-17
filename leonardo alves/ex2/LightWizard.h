#pragma once
#include "Mage.h"
class LightWizard:
	public Mage
{
public:
	LightWizard(int weapon);
	~LightWizard();
	int getMagicWeapon();
	int getSkill1();
	int getSkill2();
	float use_skill1();
	float use_skill2();
protected:
	int light_wizard_wisdom;
	int magic_weapon,
		skill1,
		skill2;
};

