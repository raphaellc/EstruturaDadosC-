#pragma once
#include "MunicaoRifle.h"
class Rifle :
	public MunicaoRifle
{
protected:
	int dano;
	int capacidade;
public:
	Rifle();
	~Rifle();
	void atirar();
	void recarregar();
};

