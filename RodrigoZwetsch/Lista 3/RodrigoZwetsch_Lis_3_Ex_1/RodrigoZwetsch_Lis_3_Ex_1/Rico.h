#pragma once
#include "Pessoa.h"

class Rico :
	public Pessoa
{
public:
	Rico();
	~Rico();

	double dinheiro = 30000000;

	void fazer_compreas();
};

