#pragma once
#include "Warrior.h"

#include <string>

class Cleric :
	public Warrior
{
public:
	Cleric();
	~Cleric();
	void prayandpay();

private:
	int life = 125;
	int stamina = 50;
	int mana = 400;
	int age = 66;
	std::string nome = "Malafaia";
};

