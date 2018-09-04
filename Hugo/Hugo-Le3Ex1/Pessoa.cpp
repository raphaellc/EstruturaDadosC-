#include "Pessoa.h"
#include<iostream>
#include<string>

using namespace std;

Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

void Pessoa::setNome(string n)
{
	nome = n;
}

string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setIdade(int i)
{
	idade = i;
}

int Pessoa::getIdade()
{
	return idade;
}

