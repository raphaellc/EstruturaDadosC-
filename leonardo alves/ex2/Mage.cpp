#include "Mage.h"

Mage::Mage(int magic_weapon)
{
	Mage::mage_wisdom = Human::wisdom * 2;
	Mage::magic_weapon = magic_weapon;
	Mage::skill1 = 1;
	Mage::skill2 = 2;
}

Mage::~Mage()
{
}

int Mage::getMagicWeapon()
{
	return Mage::magic_weapon;
}

int Mage::getSkill1()
{
	return Mage::skill1;
}

int Mage::getSkill2()
{
	return Mage::skill2;
}

float Mage::use_skill1()
{
	skill1_damage = Mage::getSkill1 * Mage::mage_wisdom;
	return skill1_damage;
}

float Mage::use_skill2()
{
	skill2_damage = Mage::getSkill2 * Mage::mage_wisdom;
	return skill2_damage;
}
