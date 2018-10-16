#pragma once
#include "No.h"
#include "Pessoa.h"
#include "Lista.h"
class ListaPessoas : public Lista
{
public:
	ListaPessoas();
	~ListaPessoas();
	No * lista_pessoas, lista_pessoas_aux;
	void percorreLista(No* lista);
	void insereFimLista(Pessoa * p);
};

