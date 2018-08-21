#pragma once
#include "Warrior.h"

#include <string>
class Mage
{

public:
	Mage();
	~Mage();
	void castarcane();

private:
	int life = 100;
	int stamina = 70;
	int mana = 300;
	int age = 1400;
	std::string nome = "Rabbit";
};