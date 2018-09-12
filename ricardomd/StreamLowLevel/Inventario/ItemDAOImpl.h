#pragma once
#include "ItemDAO.h"
#include <array>

class ItemDAOImpl : public ItemDAO
{
public:
	Item inventario[10];

	ItemDAOImpl();
	~ItemDAOImpl();

	virtual void obtemTodosItens(std::istream & is) override;
	virtual bool guardaTodosItens(std::ostream & os) override;
	virtual void atualizaItem(Item &item, int index, std::ostream & os) override;
	virtual void deletaItem(int index, std::ostream & os) override;
	virtual void adicionaItem(Item &item, int index) override;
};

