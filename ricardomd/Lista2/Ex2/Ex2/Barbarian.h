#pragma once
#include "Warrior.h"
class Barbarian :
	public Warrior
{
public:
	Barbarian();
	~Barbarian();

	void warriorSkill() override;
	void meleeAttack() override;
};
