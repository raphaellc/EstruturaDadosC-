#pragma once
#include "Guerreiro.h"
class Mago :
	public Guerreiro
{
public:
	Mago();
	~Mago();
	void Magia();

	string nome, reino;
	int forca, vida, magia, stamina;
};

