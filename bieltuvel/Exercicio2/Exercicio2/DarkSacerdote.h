#pragma once
#include "mago.h"
class DarkSacerdote :
	public mago
{
protected:

	int karma;

public:
	DarkSacerdote();
	~DarkSacerdote();

	int getKarma(int _karma);

	void darknessPower();

};

