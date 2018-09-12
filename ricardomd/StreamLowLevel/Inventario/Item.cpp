#include "Item.h"



Item::Item()
{
}


Item::~Item()
{
}

int Item::getId()
{
	return this->id;
}

int Item::getPeso()
{
	return this->peso;
}

int Item::getTipo()
{
	return this->tipo;
}

void Item::setId(int i)
{
	this->id = i;
}

void Item::setPeso(int p)
{
	this->peso = p;
}

void Item::setTipo(int t)
{
	this->tipo = t;
}
