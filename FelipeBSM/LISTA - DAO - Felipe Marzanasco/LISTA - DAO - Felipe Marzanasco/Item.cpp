#include "pch.h"
#include "Item.h"


Item::Item()
{
}


Item::~Item()
{
}

void Item::setID(int i_d)
{
	id = i_d;
}

int Item::getID()
{
	return id;
}

void Item::setPeso(int p_so)
{
	peso = p_so;
}

int Item::getPeso()
{
	return peso;
}

void Item::setTipo(string ti_po)
{
	tipo = ti_po;
}

string Item::getTipo()
{
	return tipo;
}
