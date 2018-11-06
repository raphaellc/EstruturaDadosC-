#include "pch.h"
#include "Item.h"


Item::Item()
{
}


Item::~Item()
{
}

Item::Item(std::string nome_ , int _dano)
{
	nome = nome_;
	dano = _dano;
}

void Item::setNome(std::string name)
{
	nome = name;
}

std::string Item::getNome()
{
	return nome;
}
