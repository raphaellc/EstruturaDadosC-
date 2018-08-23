#pragma once
#include "Armas.h"
class Rifle :
	public Armas
{
public:
	Rifle();
	Rifle(Armas * arma);
	~Rifle();
};

