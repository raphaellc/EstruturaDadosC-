#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();
	Guerreiro guerreiro;
	void pAtaque() { guerreiro.atacar(); };
	void pDenfender() { guerreiro.defender(); };
	void pPular() { guerreiro.pular(); };
	void pAAndar() { guerreiro.andar(); };


	void escudoDivino();
	void escudada();
	void cegueira();
	void bensao();


};

