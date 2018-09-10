#pragma once
//"ItemDAO 'usa' item"
#include "Item.h"
#include <fstream>
class ItemDAO
{
public:
	ItemDAO();
	~ItemDAO();

	
	virtual void atualizaItem(std::ostream & o_ut, Item & atua_Item, int atualizaaItem ) = 0;
	virtual void deletaItem(std::ostream & o_u_t, int deletaItem) = 0;
	virtual void adicionaItem(Item & add_Item, int n) = 0;
	virtual void ObtemTodosOsItems(std::istream & in) = 0; // para obter teria que ser uma stream tipo in...
	virtual bool guardaTodosOsItems(std::ostream & out) = 0; // vai guaradar dentro de um arquivo


};

