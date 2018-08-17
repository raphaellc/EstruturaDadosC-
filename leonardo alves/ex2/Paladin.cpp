#include "Paladin.h"

Paladin::Paladin(int weapon)
{
	Paladin::paladin_strength = Warrior:strength;
	Paladin::paladin_wisdom = Human::wisdom * 2;
	Paladin::weapon = weapon;
	Paladin::paladin_skill1 = 1;
	Paladin::paladin_skill2 = 2;
}

Paladin::~Paladin()
{
}

int Paladin::getWeapon()
{
	return Paladin::weapon;
}

int Paladin::getSkill1()
{
	return Paladin::paladin_skill1;
}

int Paladin::getSkill2()
{
	return Paladin::paladin_skill2;
}

float Paladin::attack()
{
	int damage = Paladin::getWeapon * Paladin::paladin_strength;
	return damage;
}

float Paladin::use_skill()
{
	int skill1_damage = Paladin::getWeapon * Paladin::paladin_strength * Paladin::getSkill1;
	return skill1_damage;
}

float Paladin::use_skill2()
{
	int skill1_damage = Paladin::getWeapon * Paladin::paladin_wisdom * Paladin::getSkill2;
	return skill1_damage;
}
