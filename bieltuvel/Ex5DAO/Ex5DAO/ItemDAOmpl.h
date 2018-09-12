#pragma once
#include "Item.h"
#include "itemDAO.h"

class ItemDAOmpl  :
	public itemDAO
{
public:
	ItemDAOmpl();
	~ItemDAOmpl();
	
	Item inventario[5];

	virtual void obtemTodosItens(std::istream &in) override;
	virtual bool guardaTodosItens(std::ostream &out) override;
	virtual void atualizaItem(std::ostream &_out, Item &atuaItem, int atualizaItem) override;
	virtual void deletaItem(std::ostream &delItem, int deletaItem) override;
	virtual void adicionaItem(Item &addItem, int n) override;

};

