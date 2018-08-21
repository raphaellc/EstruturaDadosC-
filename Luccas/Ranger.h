#pragma once
#include "Warrior.h"

#include <string>

class Ranger :
	public Warrior
{
public:
	Ranger();
	~Ranger();
	void atirar();

private:
	int vida = 100;
	int stamina = 150;
	int escudo = 25;
	int idade = 32;
	std::string nome = "Halt";
};

