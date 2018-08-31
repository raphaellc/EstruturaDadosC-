#pragma once
#include "Pessoa.h"
class Rica :
	public Pessoa
{
public:
	Rica();
	~Rica();

	double dinheiro();
	void fazcompras();

	double dinheiro_;
	int preco;

};

