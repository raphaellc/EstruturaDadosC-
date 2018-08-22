#pragma once
#include "mago.h"
class SacerdoteDaLuz : public Mago
{

public:
	SacerdoteDaLuz();
	~SacerdoteDaLuz();

	void barreiraDeLuz();
	void Regen();

private:
	string nome;
	int idade;
};

