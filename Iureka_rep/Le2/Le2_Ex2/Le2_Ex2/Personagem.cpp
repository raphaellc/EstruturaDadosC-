#include "Personagem.h"



Personagem::Personagem()
{
	forca = 10;
	stamina = 100;
	vida = 100;
	pocoes = 3;
}


Personagem::~Personagem()
{
}

void Personagem::atacar()
{
	std::cout << "Toma, miserávi! *Atacando*" << std::endl;
}

void Personagem::pular()
{
	std::cout << "Hump! *Pulo*" << std::endl;
}

void Personagem::amedrontar()
{
	std::cout << "Sou o grande " << nome << ", e irei destruí-lo!" << std::endl;
}

void Personagem::curar()
{
	std::cout << "Glump *Tomando pocão*" << std::endl;
	pocoes--;
}

void Personagem::defender()
{
	std::cout << "Out, essa foi por pouco! *Defendendo*" << std::endl;
}

