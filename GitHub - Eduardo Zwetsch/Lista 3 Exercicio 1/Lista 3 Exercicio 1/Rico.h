#pragma once
#include "Pessoa.h"
class Rico :
	public Pessoa
{
public:
	Rico();
	~Rico();
	void comprar();

protected:
	double dinheiro;
};

