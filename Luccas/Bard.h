#pragma once
#include "Warrior.h"

#include <string>

class Bard :
	public Warrior
{
public:
	Bard();
	~Bard();
	void tocar();

private:
	int vida = 75;
	int stamina = 50;
	int escudo = 20;
	int idade = 25;
	std::string nome = "Liam";
};

