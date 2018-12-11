#include "FilaPessoas.h"



FilaPessoas::FilaPessoas()
{
}


FilaPessoas::~FilaPessoas()
{
}


void FilaPessoas::enfileirar(Pessoa * p)
{
	No<Pessoa> *no = new No<Pessoa>;
	no->info = p;
	inserirInicioLista(no);
}


void FilaPessoas::desenfileirar()
{
	removeUltimoNo(lista);
	
}


