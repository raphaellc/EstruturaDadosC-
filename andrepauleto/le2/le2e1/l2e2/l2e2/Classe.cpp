#include "Classe.h"

Classe::Classe()
{
	this->nome = "";
	this->forca = 0;
	this->vida = 0;
	this->defesa = 0;
	this->destreza = 0;
	this->inteligencia = 0;
}


Classe::~Classe()
{
}

string Classe::getNome()
{
	return this->nome;
}

int Classe::getForca()
{
	return this->forca;
}

int Classe::getVida()
{
	return this->vida;
}

int Classe::getDestreza()
{
	return this->destreza;
}

int Classe::getDefesa()
{
	return this->defesa;
}

int Classe::getInteligencia()
{
	return this->inteligencia;
}

void Classe::getStatus()
{
	std::cout << "Classe: " << this->nome << std::endl;
	std::cout << "- Força: " << this->forca << std::endl;
	std::cout << "- Vida: " << this->vida << std::endl;
	std::cout << "- Destreza: " << this->destreza << std::endl;
	std::cout << "- Defesa: " << this->defesa << std::endl;
	std::cout << "- Inteligencia: " << this->inteligencia << std::endl;
}

void Classe::andar()
{
	std::cout << "- CLASSE - Andar" << std::endl;
}

void Classe::atacar()
{
	std::cout << "- CLASSE - Atacar" << endl;
}

void Classe::pular()
{
	std::cout << "- CLASSE - Pular" << endl;
}

void Classe::defender()
{
	std::cout << "- CLASSE - Defender" << endl;
}

void Classe::esquivar()
{
	std::cout << "- CLASSE - Esquivar" << endl;
}