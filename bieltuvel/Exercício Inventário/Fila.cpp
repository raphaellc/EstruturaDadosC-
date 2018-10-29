#include "pch.h"
#include "Fila.h"

Fila::Fila()
{
}


Fila::~Fila()
{
}

void Fila::enfileirarNoFinal(Pessoa * p)
{
	No<Pessoa> * temp = new No<Pessoa>();
	temp->info = p;
	if (this->cabeca == nullptr) {
		this->cabeca = temp;
		this->tam++;
	}
	else
	{
		cauda = cabeca;
		while (cauda->proximo != nullptr)
		{
			cauda = cauda->proximo;
		}
		cauda->proximo = temp;
		tam++;
	}
}

void Fila::desenfileirar()
{
	if (cabeca == nullptr)
	{
		std::cout << "Ta vazia esta merda!" << std::endl;
	}
	else
	{
		cauda = cabeca;
		cabeca = cabeca->proximo;
		std::cout << "Este item será excluido: " << cauda->info->nome << std::endl;
		delete cauda;
	}
}
