#pragma once
#include "Pessoa.h"
class Rico :
	public Pessoa
{
protected:
	double dinheiro;
	
public:
	Rico();
	~Rico();
	void fazCompras();
};

