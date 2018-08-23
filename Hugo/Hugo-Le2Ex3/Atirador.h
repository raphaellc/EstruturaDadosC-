#pragma once
#include"Carabina.h"
#include"Pistola.h"
#include"Rifle.h"
#include"Medkit.h"
#include"Colete.h"

class Atirador
{
protected:
	Pistola M9;
	Carabina OST;
	Rifle M16;
public:
	Atirador();
	~Atirador();
	void atirar();
	void recarregar();
	void colete();
	void medkit();
	void trocarArma();
	int arma;
};

