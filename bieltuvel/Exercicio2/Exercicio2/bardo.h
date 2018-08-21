#pragma once
#include "guerreiro.h"
class bardo :
	public guerreiro
{
protected:

	int serenityLvl;

public:
	bardo();
	~bardo();

	int getSerenityLvl(int _serenity);

	void tocarViolao();

};

