#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	nome = "Derek";
	idade = 22;
	this->forca = 0;
	this->escudo = 0;

}


Guerreiro::~Guerreiro()
{
}

bool Guerreiro::andar()
{
	return true;
}

string Guerreiro::falar()
{
	cout <<"Meu nome é:" << nome << endl;
	return nome;
	
	
}

int Guerreiro::getataque()
{
	cout<< "Ataque:" << forca << endl;
	return forca;
}

int Guerreiro::getdefender()
{
	cout<<"Defesa:" << escudo << endl;
	return escudo;
}

int Guerreiro::getidd()
{
	cout<< "Idade:" << idade << endl;
	return idade;
}

