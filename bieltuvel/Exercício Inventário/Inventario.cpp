#include "pch.h"
#include "Inventario.h"

Inventario::Inventario()
{
}

Inventario::~Inventario()
{
}

void Inventario::inserirNaUltimaPos(Item * p)
{
	No<Item> * temp = new No<Item>();
	temp->info = p;
	if (this->cabeca == nullptr)
	{
		this->cabeca = temp;
		tam++;
	}
	else
	{
		this->cauda = this->cabeca;
		while (this->cauda->proximo != nullptr) {
			this->cauda = this->cauda->proximo;
		}
		this->cauda->proximo = temp;
		tam++;
	}
}

void Inventario::obterUltimoItem()
{
	if (this->cabeca == nullptr)
	{
		std::cout << "Lista Vazia" << std::endl;
	}
	else
	{
		this->cauda = this->cabeca;
		while (cauda->proximo != nullptr)
		{
			this->cauda = this->cauda->proximo;
		}
		if (this->cauda->proximo == nullptr)
		{
			std::cout << "O último elemento do inventário é: " << this->cauda->info->nome << std::endl;
		}
	}
}
