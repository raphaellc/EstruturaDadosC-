#include "Character.h"

Character::Character()
{
	this->name = "Character";

	this->strength = 10;
	this->dexterity = 10;
	this->constitution = 10;
	this->intelligence = 10;
	this->wisdom = 10;
	this->charisma = 10;

	this->isWalking = false;
	this->isJumping = false;
	this->isResting = false;
}


Character::~Character()
{
}

void Character::walk()
{
	if (this->isWalking)
	{
		this->isWalking = false;
		std::cout << this->getName() + " standing still...\n";
	}
	else
	{
		if (this->isJumping) { this->jump(); }
		if (this->isResting) { this->rest(); }
		this->isWalking = true;
		std::cout << this->name + " walking...\n";
	
	}
}

void Character::jump()
{
	if (this->isJumping)
	{
		this->isJumping = false;
		std::cout << this->getName() + " on the ground...\n";
	}
	else
	{
		if (isWalking) { this->walk(); }
		if (isResting) { this->rest(); }
		this->isJumping = true;
		std::cout << this->name + " is jumping!\n";
	}
}

void Character::rest()
{
	if (this->isResting)
	{
		this->isResting = false;
		std::cout << this->getName() + " is not resting...\n";
	}
	else
	{
		if (this->isJumping) { this->jump(); }
		if (this->isWalking) { this->walk(); }
		this->isResting = true;
		std::cout << this->getName() + " is resting...\n";
	
	}

}

bool Character::getJumping()
{
	return isJumping;
}

bool Character::getWalking()
{
	return isWalking;
}

bool Character::getResting()
{
	return isResting;
}

int Character::getStrength()
{
	return strength;
}

int Character::getDexterity()
{
	return dexterity;
}

int Character::getConstitution()
{
	return constitution;
}

int Character::getIntelligence()
{
	return intelligence;
}

int Character::getWisdom()
{
	return wisdom;
}

int Character::getCharisma()
{
	return this->charisma;
}

std::string Character::getName()
{
	return name;
}
