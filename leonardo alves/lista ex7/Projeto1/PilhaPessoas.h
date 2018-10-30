#pragma once
#include "ListaPessoas.h"
#include "PilhaPessoas.h"
class PilhaPessoas : Lista<Pessoa>
{
public:
	PilhaPessoas();
	~PilhaPessoas();
	void push(Pessoa * p);
	void pop();
	Pessoa topo();
};


