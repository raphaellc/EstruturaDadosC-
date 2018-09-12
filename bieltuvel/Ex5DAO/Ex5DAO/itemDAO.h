#pragma once
#include <fstream>
#include "Item.h"

class itemDAO
{
public:
	itemDAO();
	~itemDAO();

	virtual void obtemTodosItens(std::istream &in) = 0;
	virtual bool guardaTodosItens(std::ostream &out)= 0;
	virtual void atualizaItem(std::ostream &_out, Item &atuaItem, int atualizaItem)= 0;
	virtual void deletaItem(std::ostream &delItem, int deletaItem) = 0;
	virtual void adicionaItem(Item &addItem, int n) = 0;

};

