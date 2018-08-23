#pragma once
#include"Guerreiro.h"
class clerigo: public Guerreiro
{
public:
	clerigo();
	~clerigo();
	void cAtaque() { guerreiro.atacar(); };
	void cDenfender() { guerreiro.defender(); };
	void cPular() { guerreiro.pular(); };
	void cAndar() { guerreiro.andar(); };

	void curar();
	void luzSgrada();
	void curaGrupal();
	void raioCeleste();

	Guerreiro guerreiro;
};

