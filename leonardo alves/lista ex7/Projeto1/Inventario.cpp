#include "Inventario.h"



Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

void Inventario::resetaAux()
{
	int aux = 0;
	this->lista_aux = lista;
}

bool Inventario::inventarioCheio()
{
	resetaAux();

	while (aux < 5) {
		this->lista_aux = lista_aux->proximo;
		aux++;
	}

	if (lista_aux != nullptr)
		return true;
	else
		return false;
}

void Inventario::adicionarItem()
{
	resetaAux();

	while (this->lista_aux->proximo != nullptr) {
		this->lista_aux = lista_aux->proximo;
		aux++;
	}

	if (inventarioCheio() != true)
		this->insereEm(aux, item); // não sei o que colocar no item
	else
		std::cout << std::endl << "Inventario cheio" << std::endl;
}

void Inventario::descartarItem(int posicao)
{
	resetaAux();
	
	while (aux < posicao)
		this->lista_aux == lista_aux->proximo;

	this->lista_aux == nullptr;
}

int Inventario::selecionarItem(int posicao)
{
	resetaAux();

	while (aux < posicao)
		this->lista_aux == lista_aux->proximo;

	return & lista_aux->info; // como proceder?
}
