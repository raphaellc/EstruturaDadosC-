#include "LightWizard.h"

LightWizard::LightWizard(int weapon)
{
	LightWizard::light_wizard_wisdom = Mage::wisdom * 2;
	LightWizard::magic_weapon = magic_weapon;
	LightWizard::skill1 = 1;
	LightWizard::skill2 = 2;
}

LightWizard::~LightWizard()
{
}

int LightWizard::getMagicWeapon()
{
	return LightWizard::magic_weapon;
}

int LightWizard::getSkill1()
{
	return LightWizard::skill1;
}

int LightWizard::getSkill2()
{
	return LightWizard::skill2;
}

float LightWizard::use_skill1()
{
	skill1_damage = LightWizard::getSkill1 * LightWizard::light_wizard_wisdom;
	return skill1_damage;
}

float LightWizard::use_skill2()
{
	skill2_heal = LightWizard::getSkill2 * LightWizard::light_wizard_wisdom;
	return skill2_heal;
}
