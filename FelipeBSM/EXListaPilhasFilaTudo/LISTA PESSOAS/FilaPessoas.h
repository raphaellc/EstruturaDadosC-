#pragma once
#include "Lista.h"
#include "iostream"
class FilaPessoas :
	public Lista<Pessoa>
{
public:
	FilaPessoas();
	~FilaPessoas();

	void enfileirar(Pessoa * p);
	void percorrerFila(No<Pessoa> * lista);
	void desenfileirar();
};

