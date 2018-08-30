#include "Personagem.h"
#include <iostream>

using namespace std;

Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::correr()
{
	cout << nome << " correu!" << endl;
}

void Personagem::pular()
{
	cout << nome << " pulou!" << endl;
}

void Personagem::andar()
{
	cout << nome << " andou." << endl;
}

void Personagem::setNome(string n)
{
	nome = n;
}

string Personagem::getNome()
{
	return nome();
}
