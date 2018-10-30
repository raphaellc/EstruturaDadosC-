#include "FilaPessoas.h"



FilaPessoas::FilaPessoas()
{
}


FilaPessoas::~FilaPessoas()
{
}

void FilaPessoas::enfileirar(Pessoa * p)
{
	No<Pessoa> * n = new No<Pessoa>();
	n->info = p;
	if (this->lista == nullptr) { 
		this->lista = n;
		this->tam++;
	}
	else 
	{
		lista_aux = lista;
		while (lista_aux->proximo != nullptr) 
		{
			lista_aux = lista_aux->proximo;
		}
		lista_aux->proximo = n;
		tam++;
	}
	
}

void FilaPessoas::percorrerFila(No<Pessoa>* lista)
{
	if (lista!= nullptr)
	{
		std::cout << lista->info->s_nome << std::endl;
		percorrerFila(lista->proximo);

	}
}

void FilaPessoas::desenfileirar()
{
     if (listaVazia()) 
     {
	     std::cout << "Ta vazia esta merda!" << std::endl;
     }
	 else 
	 {
		 lista_aux = lista;
		 lista = lista->proximo;
		 std::cout << "Este item será excluido: " << lista_aux->info->s_nome << std::endl;
		 delete lista_aux;
	 }
}
