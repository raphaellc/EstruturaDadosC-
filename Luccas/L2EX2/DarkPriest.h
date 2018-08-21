#pragma once
#include "Warrior.h"

#include <string>

class DarkPriest :
	public Warrior
{
public:
	DarkPriest();
	~DarkPriest();
	void enfeitiçar();

private:
	int vida = 100;
	int stamina = 75;
	int mana = 150;
	int idade = 69;
	std::string nome = "Marn";
};

