#pragma once
#include "Warrior.h"

#include <string>

class Rogue :
	public Warrior
{
public:
	Rogue();
	~Rogue();
	void backstab();

private:
	int vida = 100;
	int stamina = 400;
	int escudo = 25;
	int idade = 36;
	std::string nome = "Shaw";
};

