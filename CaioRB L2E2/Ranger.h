#pragma once
#include "Warrior.h"

#include <string>

class Ranger :
	public Warrior
{
public:
	Ranger();
	~Ranger();
	void barrage();

private:
	int life = 150;
	int stamina = 150;
	int shield = 10;
	int age = 13;
	std::string nome = "JakePaul";
};

