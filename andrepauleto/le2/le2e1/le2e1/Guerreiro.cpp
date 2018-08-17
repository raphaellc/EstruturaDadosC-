#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
	this->nome = "Player";
	this->forca = 7;
	this->vida = 6;
	this->defesa = 6;
	this->destreza = 4;
}

string Guerreiro::getNome()
{
	return this->nome;
}

int Guerreiro::getForca()
{
	return this->forca;
}

int Guerreiro::getVida()
{
	return this->vida;
}

int Guerreiro::getDestreza()
{
	return this->destreza;
}

int Guerreiro::getDefesa()
{
	return this->defesa;
}

void Guerreiro::andar()
{
	std::cout << "Andar" << std::endl;
}

void Guerreiro::atacar()
{
	std::cout << "Atacar" << endl;
}

void Guerreiro::pular()
{
	std::cout << "Pular" << endl;
}

void Guerreiro::defender()
{
	std::cout << "Defender" << endl;
}

void Guerreiro::esquivar()
{
	std::cout << "Esquivar" << endl;
}
