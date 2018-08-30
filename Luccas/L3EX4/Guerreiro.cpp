#include "Guerreiro.h"
#include <iostream>

using namespace std;

Guerreiro::Guerreiro()
{
	vida = 100;
	stamina = 50;
	mana = 0;
	escudo = 100;
	agilidade = 25;
	nome = "Yorn";
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::bloquear()
{
	cout << nome << " bloqueou!" << endl;
}
