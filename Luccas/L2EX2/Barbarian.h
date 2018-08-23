#pragma once
#include "Warrior.h"

#include <string>

class Barbarian :
	public Warrior
{
public:
	Barbarian();
	~Barbarian();
	void enfurecer();

private:
	int vida = 100;
	int stamina = 50;
	int escudo = 150;
	int idade = 39;
	std::string nome = "Rolo";
};

