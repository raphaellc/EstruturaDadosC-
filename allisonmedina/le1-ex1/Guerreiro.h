#include <iostream>
#include <string>
#pragma once
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	bool walk();
	bool talk();
	bool block();
	virtual bool attack();
	int getStrength();
	std::string getName();
	int getHp();
	char key;
	
	
protected:
	int strength, hp;
	std::string name;
};

