#pragma once
#include <string>
class Warrior
{

public:
	Warrior();
	~Warrior();
	void run();
	void block();
	void attack();
	void dodge();
	void rest();

private:
	int life = 500;
	int stamina = 100;
	int shield = 50;
	int age = 31;
	std::string nome = "Brandili";
};