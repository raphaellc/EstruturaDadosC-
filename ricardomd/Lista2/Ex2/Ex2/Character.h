#pragma once
#include <iostream>
#include <string>

class Character
{
public:
	bool isJumping, isWalking, isResting;
	int strength, dexterity, constitution, intelligence, wisdom, charisma;
	std::string name;

	Character();
	~Character();

	void walk();
	void jump();
	void rest();

	bool getJumping();
	bool getWalking();
	bool getResting();
	int getStrength();
	int getDexterity();
	int getConstitution();
	int getIntelligence();
	int getWisdom();
	int getCharisma();
	std::string getName();
	virtual void getAllStats();

};
