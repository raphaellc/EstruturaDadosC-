#include "Warrior.h"

Warrior::Warrior(int weapon)
{
	Warrior::warrior_strenght = Human::strength * 2;
	Warrior::weapon = weapon;
	Warrior::skill = 1;
}

Warrior::~Warrior()
{
}

int Warrior::getWeapon() {
	return Warrior::weapon;
}

int Warrior::getSkill() {
	return Warrior::skill;
}

float Warrior::attack()
{
	int damage = Warrior::getWeapon * Warrior::warrior_strenght;
	return damage;
}

float Warrior::use_skill()
{
	int skill_damage = Warrior::getSkill * Warrior::getWeapon * Warrior::warrior_strenght;
	return skill_damage;
}
