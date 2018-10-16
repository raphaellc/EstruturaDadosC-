#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

bool Pessoa::operator==(const Pessoa& p) {
	return this->s_nome == p.s_nome;
		
}
