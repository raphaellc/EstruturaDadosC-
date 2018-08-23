#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::andar()
{
	std::cout << " Anando." << std::endl;
}

void Guerreiro::atacar()
{
	std::cout << " ataqando" << std::endl;
}

void Guerreiro::defender()
{
	std::cout << " Defende" << std::endl;
}

void Guerreiro::pular()
{
	std::cout << " pular" << std::endl;
}

void Guerreiro::buffar()
{
	std::cout << "Guerreiro: buffado" << std::endl;

}

void Guerreiro::esmagar()
{
	std::cout << "Guerreiro: Habilidade esmagar" << std::endl;
}

void Guerreiro::berro()
{
	std::cout << "Guerreiro: Habilidade berro" << std::endl;
}

void Guerreiro::provocar()
{
	std::cout << "Guerreiro: uso habilidade berro" << std::endl;
}
