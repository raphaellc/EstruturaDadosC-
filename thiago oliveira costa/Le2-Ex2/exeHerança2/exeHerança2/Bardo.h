#pragma once
#include "Guerreiro.h"
class Bardo :
	public Guerreiro
{
public:
	Bardo();
	~Bardo();
	void Batacar() { guerreiro.atacar(); };
	void BPular() { guerreiro.pular(); };
	void BAndar() { guerreiro.andar(); };

	void tocarMusica();
	void tocarCifonia();
	void tocarCura();
	void tocarMelodia();
	Guerreiro guerreiro;
};

