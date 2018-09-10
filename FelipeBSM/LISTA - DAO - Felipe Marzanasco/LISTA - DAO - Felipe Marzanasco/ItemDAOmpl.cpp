#include "pch.h"
#include "ItemDAOmpl.h"
#include "Item.h"
#include "Personagem.h"


ItemDAOmpl::ItemDAOmpl()
{
	
}


ItemDAOmpl::~ItemDAOmpl()
{
}

void ItemDAOmpl::ObtemTodosOsItems(std::istream & in)
{
	for (int i = 0; i < 5; i++)
	{
		in.read(reinterpret_cast<char *>(&this->inventario[i]), sizeof(Item));
	}  
}

void ItemDAOmpl::atualizaItem(std::ostream & o_ut, Item & atua_Item, int atualizaaItem)
{
	inventario[atualizaaItem].setID(atua_Item.getID());
	inventario[atualizaaItem].setPeso(atua_Item.getPeso());
	inventario[atualizaaItem].setTipo(atua_Item.getTipo());

	std::streampos pos(atualizaaItem * sizeof(Item));
	o_ut.seekp(pos);
	o_ut.write(reinterpret_cast<char*>(&inventario[atualizaaItem]), sizeof(Item));
}

void ItemDAOmpl::deletaItem(std::ostream & o_u_t, int deletaItem)
{
	inventario[deletaItem].setID(0);
	inventario[deletaItem].setPeso(0);
	inventario[deletaItem].setTipo(0);

	for (int i = 0; i < 5; i++)
	{
		o_u_t.write(reinterpret_cast<char*>(&this->inventario[i]), sizeof(Item));
	}
}

void ItemDAOmpl::adicionaItem(Item & add_Item, int n)
{
	this->inventario[n].setID(add_Item.getID());
	this->inventario[n].setPeso(add_Item.getPeso());
	this->inventario[n].setTipo(add_Item.getTipo());
}



bool ItemDAOmpl::guardaTodosOsItems(std::ostream & out)
{
	for (int i = 0; i < 5; i++)
	{
		out.write(reinterpret_cast<char*>(&this->inventario[i]), sizeof(Item));
	}
	return true;
}
