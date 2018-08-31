#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

void Pessoa::setNome(string _nome)
{
	nome = _nome;
}

string Pessoa::getNome()
{
	return nome;
}

void Pessoa::setIdade(int _idade)
{
	idade = _idade;
}

int Pessoa::getIdade()
{
	return idade;
}

