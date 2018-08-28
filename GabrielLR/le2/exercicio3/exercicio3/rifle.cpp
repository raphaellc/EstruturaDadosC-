#include "rifle.h"

rifle::rifle()
{
	gun();
	this->miraLaser = true;
	this->power = 15;
	this->capacity = 25;
	this->reg = 750;
}

rifle::~rifle()
{
}

void rifle::imprimirNome(string nome)
{
	std::cout << "Rifle" << endl;
}

void rifle::recarregar()
{
	std::cout << "Rifle recarregado com " << endl;
	RifleBullet();
}

string rifle::getNome()
{
	return nome;
}

void rifle::setNome(string _nome)
{
	nome = _nome;
}
