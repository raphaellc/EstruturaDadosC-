#pragma once
#include "Pessoa.h"
class Rico : public Pessoa
{
public:
	Rico();
	~Rico();
	void fazCompras();

private:
	double dinheiro;
};

