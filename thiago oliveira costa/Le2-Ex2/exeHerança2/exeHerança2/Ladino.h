#pragma once
#include"Guerreiro.h"
class Ladino:public Guerreiro
{
public:
	Ladino();
	~Ladino();
	void lAtacar() { guerreiro.atacar(); };
	void lPular() { guerreiro.pular(); };
	void ldefender() { guerreiro.defender(); };
	void lAndar() { guerreiro.andar(); };

	void invisibilidade();
	void steal();
	void apanhalar();
	void supressa();
	Guerreiro guerreiro;
};

