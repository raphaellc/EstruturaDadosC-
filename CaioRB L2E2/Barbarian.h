#pragma once
#include "Warrior.h"

#include <string>

class Barbarian :
	public Warrior
{
public:
	Barbarian();
	~Barbarian();
	void berserk();

private:
	int life = 250;
	int stamina = 200;
	int shield = 150;
	int age = 28;
	std::string nome = "Klin";
};

