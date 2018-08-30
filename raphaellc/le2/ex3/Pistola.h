#pragma once
#include "Armas.h"
class Pistola :
	public Armas
{
public:
	Pistola();
	virtual ~Pistola();
	std::string disparaTiro() override;
};

