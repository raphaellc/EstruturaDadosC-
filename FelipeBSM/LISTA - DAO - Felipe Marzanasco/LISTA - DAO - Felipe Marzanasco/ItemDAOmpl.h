#pragma once
#include "ItemDAO.h"
#include "Item.h"
#include <iostream>

class ItemDAOmpl: // ItemDAOmpl tem que herdar de ItemDAO, para poder sobrescrever os métodos;
	public ItemDAO, Item
	
{
public:
	ItemDAOmpl();
	~ItemDAOmpl();

	Item inventario[10]; // não estava conseguindo puxar o inventário do Persobagem ... dai botei ele aqui
	//isso deu certo.
	virtual void atualizaItem(std::ostream & o_ut, Item & atua_Item, int atualizaaItem) override; // atualiza o item do arquivo portanto stream tipo out...
	virtual void deletaItem(std::ostream & o_u_t, int deletaItem) override; // deleta o item do arquivo  portanto stream tipo out...
	virtual void adicionaItem(Item & add_Item, int n) override; // add o item no Item
	virtual void ObtemTodosOsItems(std::istream & in) override; // para obter teria que ser uma stream tipo in...
	virtual bool guardaTodosOsItems(std::ostream & out) override; // vai guaradar dentro de um arquivo ou seha uma stream tipo out...
};

