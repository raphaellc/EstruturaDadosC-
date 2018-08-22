#pragma once
#include "Mago.h"
class SacerdoteDasTrevas : public Mago
{
public:
	SacerdoteDasTrevas();
	~SacerdoteDasTrevas();

	void barreiraDaEscuridao();
	void amaldicoar();

private:
	string nome;
	int idade;

};

