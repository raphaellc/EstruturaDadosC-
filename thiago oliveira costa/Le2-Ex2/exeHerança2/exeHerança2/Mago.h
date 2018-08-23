#pragma once
#include<iostream>
#include"Guerreiro.h"
class Mago : public Guerreiro
{
public:
	Mago();
	~Mago();


	void Invocaçao();
	void BolaDeFogo();
	void Meteoro();
	void Explosao();

	void Matacar() { guerreiro.atacar(); };
	void mPular() { guerreiro.pular(); };
	void mAndar() { guerreiro.andar(); };

	Guerreiro guerreiro;
};

