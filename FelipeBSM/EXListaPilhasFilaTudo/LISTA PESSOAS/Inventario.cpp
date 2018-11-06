#include "Inventario.h"
#include "No.h"


Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

void Inventario::obterUltimoItem()
{



	if (this->lista == nullptr)
	{
		std::cout << " V A Z I A . . ." << std::endl;
	}
	else
	{
		this->lista = this->lista;
		while (lista->proximo != nullptr)
		{
			this->lista = this->lista->proximo;
		}
		if (this->lista->proximo == nullptr)
		{
			std::cout << "O ÚLTIMO ITEM DESSA BOSTA É: " << this->lista->info->item_merda << std::endl;
		}
	}
}

void Inventario::inserirNaUltimaPos(Item * p)
{
	No<Item> * tempe = new No<Item>();
	tempe->info = p;
	if (this->lista == nullptr)
	{
		this->lista = tempe;
		tam++;
	}
	else
	{
		this->lista_aux = this->lista;
		while (this->lista_aux->proximo != nullptr) {
			this->lista_aux = this->lista_aux->proximo;
		}
		this->lista_aux->proximo = tempe;
		tam++;
	}
}

