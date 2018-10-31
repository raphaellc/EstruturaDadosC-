#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

bool Pessoa::operator==(Pessoa p)
{
	return (this->i_idade == p.i_idade) && (this->s_nome == p.s_nome);
}
//pessoa1 < pessoa2
//pessoa1.operator<(pessoa2)
bool Pessoa::operator<(Pessoa p)
{
	return this->i_idade < p.i_idade;
}
