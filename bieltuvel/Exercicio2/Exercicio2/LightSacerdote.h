#pragma once
#include "mago.h"
class LightSacerdote :
	public mago
{
protected:

	int concentracao;

public:
	LightSacerdote();
	~LightSacerdote();

	int getConcen(int _concentracao);

	void powerOfLight();

};

