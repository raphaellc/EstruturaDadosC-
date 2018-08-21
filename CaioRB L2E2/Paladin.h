#pragma once
#include "Warrior.h"

#include <string>

class Paladin :
	public Warrior
{
public:
	Paladin();
	~Paladin();
	void protect();

private:
	int life = 250;
	int stamina = 100;
	int mana = 100;
	int age = 40;
	std::string nome = "Jesus.";
};

