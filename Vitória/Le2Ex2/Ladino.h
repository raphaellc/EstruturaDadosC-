#pragma once
#include "Guerreiro.h"
class Ladino :
	public Guerreiro
{
public:
	Ladino();
	~Ladino();
	void thief();

	string nome, reino;
	int forca, vida, magia, stamina, velocidade;
};

