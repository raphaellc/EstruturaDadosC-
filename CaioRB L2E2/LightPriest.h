#pragma once
#include "Warrior.h"

#include <iostream>

class LightPriest :
	public Warrior
{
public:
	LightPriest();
	~LightPriest();
	void massheal();

private:
	int life = 100;
	int stamina = 75;
	int mana = 300;
	int age = 15;
	std::string nome = "LoganPaul";
};

