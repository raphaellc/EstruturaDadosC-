#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::andar()
{
	cout << "Voce andou.\n";
}

void Guerreiro::pular()
{
	cout << "Voce pulou.\n";
}

void Guerreiro::esconder()
{
	cout << "Voce se escondeu.\n";
}

void Guerreiro::atacar(int da)
{
	dano = da;
	cout << "Voce atacou e causou " << dano << " de dano.\n";
}

void Guerreiro::defender()
{
	cout << "Voce se defendeu.\n";
}