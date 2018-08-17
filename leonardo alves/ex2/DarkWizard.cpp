#include "DarkWizard.h"



DarkWizard::DarkWizard()
{
	DarkWizard::dark_wizard_wisdom = Mage::wisdom * 3;
	DarkWizard::magic_weapon = magic_weapon;
	DarkWizard::skill1 = 1;
	DarkWizard::skill2 = 2;
}

DarkWizard::DarkWizard(int weapon)
{
}

DarkWizard::~DarkWizard()
{
}

int DarkWizard::getMagicWeapon()
{
	return DarkWizard::magic_weapon;
}

int DarkWizard::getSkill1()
{
	return DarkWizard::skill1;
}

int DarkWizard::getSkill2()
{
	return DarkWizard::skill2;
}

float DarkWizard::use_skill1()
{
	skill1_damage = DarkWizard::getSkill1 * DarkWizard::dark_wizard_wisdom;
	return skill1_damage;
}

float DarkWizard::use_skill2()
{
	skill2_damage = DarkWizard::getSkill1 * DarkWizard::dark_wizard_wisdom;
	return skill2_damage;
}
