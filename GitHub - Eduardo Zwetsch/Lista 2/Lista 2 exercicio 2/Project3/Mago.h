#pragma once
#include "Guerreiro.h"
class Mago :
	public Guerreiro
{
public:
	Mago();
	~Mago();

	int vida = 80;
	int dano = 30;
	int magia = 30;
	
	void usarMagia(int da);
};

