#pragma once
#include "Guerreiro.h"
class Sacerdote_Luz :
	public Guerreiro
{
public:
	Sacerdote_Luz();
	~Sacerdote_Luz();
	void Lumina();

	string nome, reino;
	int forca, vida, magia, stamina;
};

