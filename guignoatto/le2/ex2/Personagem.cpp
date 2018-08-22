#include "Personagem.h"
#include <string>


Personagem::Personagem()
{
	nome = "Personagem";
	idade = 1000;
}


Personagem::~Personagem()
{
}



void Personagem::pular()
{
	std::cout << "*pular*" << std::endl;
}

bool Personagem::andar()
{
	return false;
}

void Personagem::falar()
{
	cout << "Meu nome é " << this->nome << ", tenho " << idade << " anos." << endl;

}
