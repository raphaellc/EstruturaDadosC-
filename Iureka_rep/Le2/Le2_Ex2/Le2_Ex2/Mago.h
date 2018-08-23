#pragma once
#include "Personagem.h"
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();

	void magia();

protected:
	int forcaMagica;
};

