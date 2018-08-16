#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	nome = "Joao";
	cidade = "Porto Alegre";
	idade = 45;

}


Guerreiro::~Guerreiro()
{
}

int Guerreiro::andar(int an)
{
	return an;
}

void Guerreiro::pular()
{
	std::cout << "*pulando*" << std::endl;
}

void Guerreiro::espadada()
{
	std::cout << "*atacar*" << std::endl;
}

void Guerreiro::defender()
{
	std::cout << "*defender*" << std::endl;
}


