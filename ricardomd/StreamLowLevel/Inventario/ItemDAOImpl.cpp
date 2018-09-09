#include "ItemDAOImpl.h"



ItemDAOImpl::ItemDAOImpl()
{
}


ItemDAOImpl::~ItemDAOImpl()
{
}

void ItemDAOImpl::obtemTodosItens(std::istream & is)
{
	for (int i = 0; i < 10; i++)
	{
		is.read(reinterpret_cast<char *>(&this->inventario[i]), sizeof(Item));
	}
}

bool ItemDAOImpl::guardaTodosItens(std::ostream & os)
{
	for (int i = 0; i < 10; i++)
	{
		os.write(reinterpret_cast<char*>(&this->inventario[i]), sizeof(Item));
	}
	return true;
}

void ItemDAOImpl::atualizaItem(Item &item, int index, std::ostream & os)
{
	this->inventario[index].setId(item.getId());
	this->inventario[index].setPeso(item.getPeso());
	this->inventario[index].setTipo(item.getTipo());

	std::streampos pos(index * sizeof(Item));
	os.seekp(pos);
	os.write(reinterpret_cast<char*>(&this->inventario[index]), sizeof(Item));
}

void ItemDAOImpl::deletaItem(int index, std::ostream & os)
{
	this->inventario[index].setId(0);
	this->inventario[index].setPeso(0);
	this->inventario[index].setTipo(0);

	for (int i = 0; i < 10; i++)
	{
		os.write(reinterpret_cast<char*>(&this->inventario[i]), sizeof(Item));
	}
}

void ItemDAOImpl::adicionaItem(Item &item, int index)
{
	this->inventario[index].setId(item.getId());
	this->inventario[index].setPeso(item.getPeso());
	this->inventario[index].setTipo(item.getTipo());
}


