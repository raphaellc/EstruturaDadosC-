#pragma once
#include "Guerreiro.h"
class Ranger :
	public Guerreiro
{
public:
	Ranger();
	~Ranger();
	
	void Clamufagem();
	void Flechada();
	void Joelho();
};

