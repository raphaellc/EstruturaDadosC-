#pragma once
#include "Guerreiro.h"
class Ranger :
	public Guerreiro
{
public:
	Ranger();
	~Ranger();
	void FlechadaNaCara();

	string nome, reino;
	int forca, vida, magia, stamina, velocidade;
};

