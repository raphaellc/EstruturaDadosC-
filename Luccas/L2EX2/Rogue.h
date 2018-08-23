#pragma once
#include "Warrior.h"

#include <string>

class Rogue :
	public Warrior
{
public:
	Rogue();
	~Rogue();
	void furtar();

private:
	int vida = 100;
	int stamina = 200;
	int escudo = 25;
	int idade = 25;
	std::string nome = "Will";
};

