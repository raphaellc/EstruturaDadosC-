#include <iostream>
#include "Warrior.h"
Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

void Warrior::correr()
{
	std::cout << "Run Bizi, run...\n";
}

void Warrior::bloquear()
{
	std::cout << "NÁO ME TOCA!!!\n";
}

void Warrior::atacar()
{
	std::cout << "TOMA ESSE SOCO MEU CONSAGRADO!\n";
}

void Warrior::esquivar()
{
	std::cout << "OLÉ!!!\n";
}

void Warrior::descansar()
{
	std::cout << "Bah cansei na real espera aí um pouquinho...\n";
}