#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();
	void Abencoar();

	string nome, reino;
	int forca, vida, magia, stamina;
};

