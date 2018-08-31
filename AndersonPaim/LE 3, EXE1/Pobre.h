#pragma once
#include "Rica.h"
#include "Pessoa.h"
class Pobre :
	public Rica
{
public:
	Pobre();
	~Pobre();

	void trabalha();
};

