#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	nome = "Guerreiro";
	idade = 30;
}


Guerreiro::~Guerreiro()
{
}




void Guerreiro::atacar()
{
	std::cout << "*atacar*" << std::endl;
}

void Guerreiro::defender()
{
	std::cout << "*defender*" << std::endl;
}




