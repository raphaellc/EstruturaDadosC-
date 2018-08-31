#pragma once
#include "Pessoa.h"

class Rica :
	public Pessoa
{
public:
	Rica();
	~Rica();
	void fazCompras();

protected:
	double dinheiro;
};

