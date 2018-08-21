#include "mago.h"

mago::mago()
{
}

mago::~mago()
{
}

string mago::getNome(string _nome)
{
	nome = _nome;
	return nome;
}

int mago::getMagia(int _magia)
{
	magia = _magia;
	return magia;
}

int mago::getLvl(int _lvl)
{
	lvl = _lvl;
	return lvl;
}

int mago::getDef(int _def)
{
	def = _def;
	return def;
}

string mago::getEquip(string _equip)
{
	equip = _equip;
	return equip;
}

void mago::persuadir()
{
	std::cout << "Tem certeza que irá discutir com tamanha sabedoria? Saia do meu caminho!" << endl;
}

void mago::ataque()
{
	std::cout << "Você lançou uma bola de vento!" << endl;
}

void mago::meditar()
{
	std::cout << "Hora de renovar as energias..." << endl;
}

void mago::conjurar()
{
	std::cout << "Fire Raposa! Me ajuda nessa!" << endl;
}

void mago::levitar()
{
	std::cout << "Estou sem chão..." << endl;
}
