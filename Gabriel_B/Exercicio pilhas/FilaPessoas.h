#pragma once
#include "Lista.h"
class FilaPessoas: public Lista<Pessoa>
{
public:
	FilaPessoas();
	~FilaPessoas();

	void enfileirar(Pessoa *p);
	void desenfileirar();

};

