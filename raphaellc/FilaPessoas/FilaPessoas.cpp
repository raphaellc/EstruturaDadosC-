#include "FilaPessoas.h"



FilaPessoas::FilaPessoas()
{
}


FilaPessoas::~FilaPessoas()
{
}

void FilaPessoas::enfilierar(Pessoa * p)
{
	No<Pessoa> * no_pessoa = new No<Pessoa>;
	no_pessoa->info = p;
	no_pessoa->proximo = nullptr;
	Lista<Pessoa>::insereFimLista(no_pessoa);
}

void FilaPessoas::desenfileirar()
{
	Lista<Pessoa>::removePrimeiroNo();
}

Pessoa FilaPessoas::inicioFila() {
	return *this->lista->info;
}

Pessoa FilaPessoas::fimFila() {
	percorreLista(this->lista);
	return *this->lista_aux->info;
}

