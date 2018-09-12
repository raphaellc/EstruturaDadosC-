#include "Item.h"

Item::Item()
{
}

Item::~Item()
{
}

int Item::getId()
{
	return id;
}

void Item::setId(int _id)
{
	id = _id;
}

int Item::getPeso()
{
	return peso;
}

void Item::setPeso(int _peso)
{
    peso = _peso;
}

std::string Item::getTipo()
{
	return tipo;
}

void Item::setTipo(std::string _tipo)
{
	tipo = _tipo;
}

