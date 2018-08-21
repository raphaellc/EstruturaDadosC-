#pragma once
#include "guerreiro.h"
class ladino :
	public guerreiro
{
protected:

	int stealthLvl;

public:
	ladino();
	~ladino();

	int getStealthLvl(int _stealth);

	void roubar();

};

