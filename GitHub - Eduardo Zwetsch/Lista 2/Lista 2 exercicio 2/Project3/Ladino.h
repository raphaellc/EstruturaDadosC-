#pragma once
#include "Guerreiro.h"
class Ladino :
	public Guerreiro
{
public:
	Ladino();
	~Ladino();

	int vida = 80;
	int dano = 25;

	void roubar();
};

