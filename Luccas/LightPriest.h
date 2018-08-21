#pragma once
#include "Warrior.h"

#include <iostream>

class LightPriest :
	public Warrior
{
public:
	LightPriest();
	~LightPriest();
	void iluminar();

private:
	int vida = 100;
	int stamina = 75;
	int mana = 150;
	int idade = 71;
	std::string nome = "Norm";
};

