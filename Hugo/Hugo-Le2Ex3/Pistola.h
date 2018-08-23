#pragma once
#include"MunicaoPistola.h"

class Pistola
	 
{
protected:
	int dano;
	int capacidade;
public:
	Pistola();
	~Pistola();
	void recarregar();
	void atirar();
};

