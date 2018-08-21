#pragma once
#include "Guerreiro.h"
#include<iostream>
#include<string>

class Barbaro :
	public Guerreiro
{
public:
	Barbaro();
	~Barbaro();
	void SuperForca();

	string nome, reino;
	int forca, vida, magia, stamina;
};

