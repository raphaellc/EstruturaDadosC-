#include "carabina.h"

carabina::carabina()
{
	gun();
	this->miraLaser = false;
	this->power = 5;
	this->capacity = 30;
	this->reg = 585;
}

carabina::~carabina()
{
}

void carabina::imprimirNome(string nome)
{
	std::cout << "Carabina" << endl;
}

string carabina::getNome()
{
	return nome;
}

void carabina::setNome(string _nome)
{
	nome = _nome;
}

void carabina::recarregar()
{
	std::cout << "Carabina recarregada com " << endl;
	CarabBullet();
}