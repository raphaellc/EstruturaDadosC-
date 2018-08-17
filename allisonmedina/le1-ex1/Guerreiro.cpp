#include "stdafx.h"
#include "Guerreiro.h"


Guerreiro::Guerreiro()
{
	this->strength = 10;
	this->hp = 100;
	
	//Conditions:Increase hp.

	if (bool Guerreiro = true)
	{
		hp += 300;
	}
	else
	{
		hp += 100;
	}
		
	std::cout << "Name? " << "\n";
	std::cin >> name;
		
}


Guerreiro::~Guerreiro()
{
}
std::string Guerreiro::getName()
{	
	std::cout << name << "\n";
	return name;
}
bool Guerreiro::walk()
{
	// keyboard direction.
		
	/*if (key == 'd')
	{
		std::cout << "Position: Moving Forward!" << "\n";

		return true;

	}
	else if (key == 'a')
	{
		std::cout << "Position: Moving Backward!" << "\n";

		return true; 				
	}	
	else*/
	//{	
		std::cout << "Position: Standard!" << "\n";

		return false;		
	//}

}
bool Guerreiro::talk()
{	
	std::cout << name << " talk: How're u?" << "\n";

	return true;   
}
bool Guerreiro::attack()
{		
	
	/*if (key == 'z')
	{
		std::cout << "HAAAAAAAA! ATTACK!" << "\n";
		
		return true;
	}*/
	//else
	//{
		std::cout << "Passive!" << "\n";

		return false;
	//}
		
}
bool Guerreiro::block()
{	
	
	/*if (key == 'c')
	{
		
		std::cout << "BLOCK!" << "\n";

		return true;
	}
	else
	{*/
		std::cout << "Damage taken!" << "\n";

		hp = hp - 50;
				
		return false;
	//}
		
}
int Guerreiro::getHp()
{
	if (hp > 0)
	{
		std::cout << "Hp: " << hp << "\n";
		
	}
	else
	{
		std::string dead = { "Dead" };
		std::cout << dead << "\n"; 	
		
	}

	return hp;
}
int Guerreiro::getStrength()
{
	std::cout << "Strength: "<< strength << "\n";
	return strength;
}

