#pragma once
#include "Guerreiro.h"
class Barbaro :
	public Guerreiro
{
public:
	Barbaro();
	~Barbaro();

	int vida = 200;
	int dano = 20;
	
	void gritar();
};

