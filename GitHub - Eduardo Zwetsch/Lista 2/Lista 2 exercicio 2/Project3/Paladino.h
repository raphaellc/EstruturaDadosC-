#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();

	//int dano = 10;
	int vida = 300;

	void abencoar();
};

