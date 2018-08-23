#pragma once
#include"MunciaoCarabina.h"
class Carabina
{
protected:
	int dano;
	int capacidade;
public:
	Carabina();
	~Carabina();
	void recarregar();
	void atirar();
};

