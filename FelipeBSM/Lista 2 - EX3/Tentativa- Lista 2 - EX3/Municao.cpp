#include "pch.h"
#include "Municao.h"


Municao::Municao()
{
}


Municao::~Municao()
{
}

void Municao::setPente(int a)
{
	pente = a;

}

int Municao::getPente()
{
	return pente;
}

void Municao::setDano(int b)
{
	dano = b;
}

int Municao::getDano()
{
	return dano;
}

void Municao::setDB(int c)
{
	danobonus = c;

}

int Municao::getDB()
{
	return danobonus;
}

