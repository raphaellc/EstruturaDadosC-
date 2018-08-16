#include "Warrior.h"
#include<iostream>


Warrior::Warrior()
{
	this->def = 0;
	this->poder = 0;
}


Warrior::~Warrior()
{
}

int Warrior::getPoder()
{
	return poder;
}

int Warrior::getDef()
{
	return def;
}

bool Warrior::run()
{
	return true;
}

void Warrior::dash()
{
	std::cout << "Nao adianta correr!!" << std::endl;
}

void Warrior::block()
{
	std::cout << "Ha Ha, defendi!" << std::endl;
}

void Warrior::attack()
{
	std::cout << "Toma essa!" << std::endl;
}

bool Warrior::rage()
{
	return false;
}

void Warrior::jump()
{
	cout << "Subindo" << std::endl;
}
