#include "Barbarian.h"

Barbarian::Barbarian(int weapon)
{
	Barbarian::barbarian_strength = Warrior::warrior_strenght * 2;
	Barbarian::weapon = weapon;
	Barbarian::barbarian_skill1 = 1;
	Barbarian::barbarian_skill2 = 2;
}

Barbarian::~Barbarian()
{
}

int Barbarian::getWeapon()
{
	return Barbarian::weapon;
}

int Barbarian::getSkill1()
{
	return Barbarian::barbarian_skill1;
}

int Barbarian::getSkill2()
{
	return Barbarian::barbarian_skill2;
}

float Barbarian::attack()
{
	int damage = Barbarian::getWeapon * Barbarian::barbarian_strength;
	return damage;
}

float Barbarian::use_skill()
{
	int skill1_damage = Barbarian::getWeapon * Barbarian::barbarian_strength * Barbarian::getSkill1;
	return skill1_damage;
}

float Barbarian::use_skill2()
{
	int skill1_damage = Barbarian::getWeapon * Barbarian::barbarian_strength * Barbarian::getSkill2;
	return skill1_damage;
}


