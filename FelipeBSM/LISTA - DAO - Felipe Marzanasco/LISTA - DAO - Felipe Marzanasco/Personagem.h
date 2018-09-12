#pragma once
#include "Item.h"
#include <fstream>
#include "ItemDAO.h"

class Personagem:
	public Item
{
public:
	Personagem();
	~Personagem();

	Item inventario[5];
	Item item_atual;

	void pega_o_inventario(Item invent[5]);
	void inserirItem(std::ostream & os);
	void inserirItemEm(std::ostream & os, int indice);
	void carregaItens(std::istream & is);
};

