#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
private: 

	string facanhas;

public:
	Paladino();
	~Paladino();
	void setFacanhas(string faca);
	string getFacanhas();
	void vesti();
};

