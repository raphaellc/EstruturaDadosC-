#pragma once
#include "Warrior.h"

#include <string>

class Cleric :
	public Warrior
{
public:
	Cleric();
	~Cleric();
	void rezar();

private:
	int vida = 125;
	int stamina = 50;
	int mana = 150;
	int idade = 66;
	std::string nome = "Frey";
};

