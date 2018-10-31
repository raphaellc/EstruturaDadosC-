#include "Pessoa.h"



Pessoa::Pessoa()
{
}
Pessoa::Pessoa(const int idade, const std::string nome )
{
	this->idade = idade;
	this->s_nome = nome;
}

Pessoa::~Pessoa()
{
}

bool Pessoa::operator==(const Pessoa p)
{
	return (this->idade == p.idade) && (this->s_nome == p.s_nome);
}

bool Pessoa::operator<(const Pessoa p) const
{
	return this->idade < p.idade;
}
