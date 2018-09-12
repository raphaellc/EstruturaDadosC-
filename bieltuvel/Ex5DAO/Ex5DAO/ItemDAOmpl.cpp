#include "ItemDAOmpl.h"

ItemDAOmpl::ItemDAOmpl()
{
}

ItemDAOmpl::~ItemDAOmpl()
{
}

void ItemDAOmpl::obtemTodosItens(std::istream & in)
{
	for (int i = 0; i < 5; i++)
	{
		in.read(reinterpret_cast<char *> (&this->inventario[i]), sizeof(Item));
	}
}

bool ItemDAOmpl::guardaTodosItens(std::ostream & out)
{
	for (int i = 0; i < 5; i++)
	{
		out.write(reinterpret_cast<char *> (&this->inventario[i]), sizeof(Item));
	}
	return true;
}

void ItemDAOmpl::atualizaItem(std::ostream & _out, Item & atuaItem, int atualizaItem)
{
	inventario[atualizaItem].setId(atuaItem.getId());
	inventario[atualizaItem].setPeso(atuaItem.getPeso());
	inventario[atualizaItem].setTipo(atuaItem.getTipo());

	std::streampos pos(atualizaItem *sizeof(Item));
	_out.seekp(pos);
	_out.write(reinterpret_cast<char*>(&inventario[atualizaItem]), sizeof(Item));
}

void ItemDAOmpl::deletaItem(std::ostream & delItem, int deletaItem)
{
	inventario[deletaItem].setId(0);
	inventario[deletaItem].setPeso(0);
	inventario[deletaItem].setTipo(0);

	for (int i = 0; i < 5; i++)
	{
		delItem.write(reinterpret_cast<char*>(&this->inventario[i]), sizeof(Item));
	}

}

void ItemDAOmpl::adicionaItem(Item & addItem, int n)
{
	this->inventario[n].setId(addItem.getId());
	this->inventario[n].setPeso(addItem.getPeso());
	this->inventario[n].setTipo(addItem.getTipo());
}
