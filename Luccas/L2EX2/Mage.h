#pragma once
#include "Warrior.h"

#include <string>
class Mage
{

public:
	Mage();
	~Mage();
	void lançarboladefogo();

private:
	int vida = 100;
	int stamina = 70;
	int mana = 200;
	int idade = 54;
	std::string nome = "Arog";
};