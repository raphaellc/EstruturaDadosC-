#pragma once
#include "Fighter.h"
class Warrior :
	public Fighter
{
public:
	Warrior();
	~Warrior();

	virtual void warriorSkill();
};