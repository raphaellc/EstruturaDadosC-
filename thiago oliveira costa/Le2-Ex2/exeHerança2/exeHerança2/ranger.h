#pragma once
#include "Guerreiro.h"
class ranger :
	public Guerreiro
{
public:
	ranger();
	~ranger();
	Guerreiro guerreiro;
	void RAtaque() { guerreiro.atacar(); };
	void RADenfender() { guerreiro.defender(); };
	void RAPular() { guerreiro.pular(); };
	void RAAndar() { guerreiro.andar(); };


	void flechaPerfurante();
	void flechaGrudante();
	void flechaEsplosiva();
	void flechaEletrica();
};

