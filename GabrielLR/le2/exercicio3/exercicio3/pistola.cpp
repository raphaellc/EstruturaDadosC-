#include "pistola.h"

pistola::pistola()
{
	gun();
	this->miraLaser = true;
	this->power = 9;
	this->capacity = 12;
	this->reg = 999;
}

pistola::~pistola()
{
}

void pistola::imprimirNome(string nome)
{
	std::cout << "Pistola" << endl;
}

void pistola::recarregar()
{
	std::cout << "Pistola recarregada com" << endl;
	PistolBullet();
}

string pistola::getNome()
{
	return nome;
}

void pistola::setNome(string _nome)
{
	nome = _nome;
}




