#pragma once
#include "Warrior.h"

#include <string>

class DarkPriest :
	public Warrior
{
public:
	DarkPriest();
	~DarkPriest();
	void charm();

private:
	int life = 100;
	int stamina = 75;
	int mana = 500;
	int age = 69;
	std::string nome = "Tigor";
};

