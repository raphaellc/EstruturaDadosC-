#include "pch.h"
#include "Pilha.h"


Pilha::Pilha()
{
}


Pilha::~Pilha()
{

}

void Pilha::push(Pessoa * p)
{
	No<Pessoa> * temp = new No<Pessoa>;
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

void Pilha::pop()
{
	if (this->cabeca != nullptr)
	{
		if (this->cabeca->proximo == nullptr)
		{
			delete this->cabeca->info;
			this->cabeca = nullptr;
		}
		else
		{
			this->cauda = this->cabeca;
			while (this->cauda->proximo != nullptr)
			{
				this->cauda = this->cauda->proximo;
				if (this->cauda->proximo == nullptr)
				{
					delete this->cauda->info;
					this->cauda = nullptr;
				}
			}
		}
	}
}

Pessoa Pilha::topo()
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
			std::cout << "O último elemento da lista é: " << this->cauda->info->nome << std::endl;
			return *this->cauda->info;
		}
	}
}
