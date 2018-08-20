#pragma once
#include "Guerreiro.h"
class Sacerdote_Negro :
	public Guerreiro
{
public:
	Sacerdote_Negro();
	~Sacerdote_Negro();
	void Darkside();

	string nome, reino;
	int forca, vida, magia, stamina;
};

