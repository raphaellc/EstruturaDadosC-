#pragma once
#include "Item.h"
#include <iostream>
#include <array>

class ItemDAO
{
public:
	ItemDAO() {};
	~ItemDAO() {};

	virtual void obtemTodosItens(std::istream & is) = 0;
	virtual bool guardaTodosItens(std::ostream & os) = 0;
	virtual void atualizaItem(Item &item, int index, std::ostream & os) = 0;
	virtual void deletaItem(int index, std::ostream & os) = 0;
	virtual void adicionaItem(Item &item, int index) = 0;
};
