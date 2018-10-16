#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
}


ListaPessoas::~ListaPessoas()
{
}

void ListaPessoas::percorreLista(No * lista)
{
	if (lista != nullptr) {
		std::cout << lista->pessoa->s_nome << std::endl;
		percorreLista(lista->proximo);
	}
}

void ListaPessoas::insereFimLista(Pessoa * p)
{
	No * no = new No;
	no->pessoa = p;
	no->proximo = nullptr;
	Lista::insereFimLista(no);
}
