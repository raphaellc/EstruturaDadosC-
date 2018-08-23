#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	/*int forca, stamina, vida, pocoes;
	std::string nome;*/
	forca = 10;
	stamina = 100;
	vida = 100;
	pocoes = 3;
	nome = "Dilmo";
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::atacar()
{
	std::cout << "Toma, miserávi! *Atacando*" << std::endl;
}

void Guerreiro::pular()
{
	std::cout << "Hump! *Pulo*" << std::endl;
}

void Guerreiro::amedrontar()
{
	std::cout << "Sou o grande " << nome<< ", e irei destruí-lo!" << std::endl;
}

void Guerreiro::curar()
{
	std::cout << "Glump *Tomando pocão*" << std::endl;
	pocoes--;
}

void Guerreiro::defender()
{
	std::cout << "Out, essa foi por pouco! *Defendendo*" << std::endl;
}
