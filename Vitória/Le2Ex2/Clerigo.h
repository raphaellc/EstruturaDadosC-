#pragma once
#include "Guerreiro.h"
class Clerigo :
	public Guerreiro
{
public:
	Clerigo();
	~Clerigo();
	void cura();

	string nome, reino;
	int forca, vida, magia, stamina;

};

