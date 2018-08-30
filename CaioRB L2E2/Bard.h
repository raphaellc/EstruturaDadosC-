#pragma once
#include "Warrior.h"

#include <string>

class Bard :
	public Warrior
{
public:
	Bard();
	~Bard();
	void play();

private:
	int vida = 100;
	int stamina = 50;
	int escudo = 10;
	int idade = 19;
	std::string nome = "Bibi";
};

