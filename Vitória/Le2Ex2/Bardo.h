#pragma once
#include "Guerreiro.h"
#include<string>
#include<iostream>

class Bardo :
	public Guerreiro
{
public:
	Bardo();
	~Bardo();
	void SomMortal();

	string nome, reino;
	int forca, vida, magia, stamina;
};


