#pragma once

#include <iostream>
#include <string>


class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();

	int andar(int an);
	void pular();
	void espadada();
	void defender();

private:
	
	string nome;
	string cidade;
	int idade;
};

