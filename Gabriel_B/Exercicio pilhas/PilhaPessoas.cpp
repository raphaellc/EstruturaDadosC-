#include "PilhaPessoas.h"



PilhaPessoas::PilhaPessoas()
{
}


PilhaPessoas::~PilhaPessoas()
{
}

void PilhaPessoas::push(Pessoa * p)
{
	No<Pessoa> * no = new No<Pessoa>;
	no->info = p;
	no->proximo = nullptr;
	Lista<Pessoa>::insereFimLista(no);
}
void PilhaPessoas::pop() {

	/*Lista<Pessoa>::removeUltimoNo(lista);*/
	No<Pessoa> * no = new No<Pessoa>;
	while (no->proximo != nullptr) {
		no = no->proximo;
	}
	delete no;
}

Pessoa PilhaPessoas::topo()
{
	/*No<Pessoa> * no = new No<Pessoa>; */

	lista_aux = lista;
	while (lista_aux->proximo != nullptr) {
		lista_aux = lista_aux->proximo;
		}

	return *lista_aux->info;
}
