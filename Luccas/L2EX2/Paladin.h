#pragma once
#include "Warrior.h"

#include <string>

class Paladin :
	public Warrior
{
public:
	Paladin();
	~Paladin();
	void curar();

private:
	int vida = 125;
	int stamina = 75;
	int mana = 75;
	int idade = 40;
	std::string nome = "Uter";
};

