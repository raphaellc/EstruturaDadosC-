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
	cout << "Pela estrada fora eu vou bem sozinho.\n\n";
}

void Guerreiro::falar()
{
	cout << "Eu sou " << nome << " e venho do reino de " << reino << endl << endl;
}

void Guerreiro::atacar()
{
	cout << "Eu ataquei voce seu patife\n\n";
}

void Guerreiro::defender()
{
	cout << "Voce nao pode contra as minhas defesas\n\n";
}

void Guerreiro::pular()
{
}
