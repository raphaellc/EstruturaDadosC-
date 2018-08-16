//guerreiro.h

#include <iostream>
#include <string>

using namespace std;

#pragma once
class guerreiro
{
protected:
	int vida;
	char sexo;
	int forca;
	int defesa;
	string nome;
public:
	guerreiro();
	~guerreiro();
	int atacar();
	void pular();
	void correr();
	int defender();
	void saquear();
};

