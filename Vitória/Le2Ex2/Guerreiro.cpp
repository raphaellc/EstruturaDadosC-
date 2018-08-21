#include "Guerreiro.h"
#include<iostream>
#include<string>

Guerreiro::Guerreiro()
{
	nome = "Huger";
	reino = "Nexos";
	vida = 100;
	stamina = 100;
	magia = 0;
	forca = 250;
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::andar()
{
	cout << "Pela estrada fora eu vou bem sozinho.\n";
}

void Guerreiro::falar()
{
	cout << "Saudacoes\n";
}

void Guerreiro::atacar()
{
	cout << "Eu ataquei voce seu patife\n";
}

void Guerreiro::defender()
{
	cout << "Voce nao pode contra as minhas defesas\n";
}


