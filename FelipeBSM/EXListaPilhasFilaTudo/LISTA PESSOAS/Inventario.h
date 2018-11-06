#pragma once
#include "Lista.h"
#include "Item.h"

class Inventario:
	public Lista<Item>
{
public:
	Inventario();
	~Inventario();

	void obterUltimoItem();
	void inserirNaUltimaPos(Item * p);
};

