#include "Guerreiro.h"
Guerreiro::Guerreiro()
{
}
Guerreiro::~Guerreiro()
{
	this->nome = "HE-MAN";
	this->Str = 500;
	this->hp = 100;
	this->def = 2;
	this->dex = 6;
	this->power = 9999;
}
string Guerreiro::getNome()
{
	std::cout << "HE-MAN" << endl;
}
int Guerreiro::getStr()
{
	std::cout << "strength: " << Str << std::endl;
}
int Guerreiro::gethp()
{
	std::cout << "HP: " << hp << std::endl;
}
int Guerreiro::getDex()
{
	std::cout << "Dexterity: " << dex << std::endl;
}
int Guerreiro::getDef()
{
	std::cout << "Armor: " << def << std::endl;
}
void Guerreiro::walk()
{
	std::cout << "I WALK" << std::endl;
}
void Guerreiro::attack()
{
	std::cout << "I ATTACK" << endl;
}
void Guerreiro::jump()
{
	std::cout << "I JUMP" << endl;
}
void Guerreiro::defend()
{
	std::cout << "I DEFEND" << endl;
}
void Guerreiro::roll()
{
	std::cout << "I ROLL" << endl;
}
int Guerreiro::getPower()
{
	if (power == 9999) {
		std::cout << "I'VE GOT THE POWEEEEEEEEEEEEEEEEEER!" << def << std::endl;
	}
}

