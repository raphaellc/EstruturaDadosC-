#pragma once


class Warrior
{
public:
	Warrior();
	~Warrior();

	int getPoder();
	int getDef();
	bool run();
	void dash();
	void block();
	void attack();
	bool rage();
	void jump();

private: 
	int life, poder, def;
	


};

