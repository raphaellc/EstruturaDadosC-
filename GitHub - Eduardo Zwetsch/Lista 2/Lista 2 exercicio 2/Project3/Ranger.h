#pragma once
#include "Guerreiro.h"
class Ranger :
	public Guerreiro
{
public:
	Ranger();
	~Ranger();

	int dano = 40;

	void atirar(int da);
};

