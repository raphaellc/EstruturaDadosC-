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
	int life, stamina, shield, age;
	std::string name = "Bizi";
};

