#pragma once
#include "Guerreiro.h"
class Barbaro :
	public Guerreiro
{
public:
	Barbaro();
	~Barbaro();
	Guerreiro guerreiro;
	void BAAtaque() { guerreiro.atacar(); };
	void BADenfender() { guerreiro.defender(); };
	void BAPular() { guerreiro.pular(); };
	void BAAndar() { guerreiro.andar(); };

	void terremoto();
	void selvageria();
	void atordoa();
	void empurrar();

	
};

