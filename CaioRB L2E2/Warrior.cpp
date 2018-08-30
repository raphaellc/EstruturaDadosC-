#include <iostream>
#include "Warrior.h"
Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

void Warrior::run()
{
	std::cout << "Brandili, Brandili...\n";
}

void Warrior::block()
{
	std::cout << "You can't hurt me, Joe.\n";
}

void Warrior::attack()
{
	std::cout << "Detroit Smash!!\n";
}

void Warrior::dodge()
{
	std::cout << "...And now you don't.\n";
}

void Warrior::rest()
{
	std::cout << "Brb...\n";
}