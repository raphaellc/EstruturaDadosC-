#pragma once
#include "Lista.h"
#include <iostream>

class Inventario :
	public Lista<int>
{
public:
	Inventario();
	~Inventario();

	void resetaAux();
	bool inventarioCheio();
	void adicionarItem();
	void descartarItem(int posicao);
	int selecionarItem(int posicao);

private:
	int tamanho = 5;
	int aux = 0;
};

