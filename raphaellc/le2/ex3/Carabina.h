#pragma once
#include "Armas.h"

class Carabina : 
	public Armas
{
public:
	Carabina();
	virtual ~Carabina();
	std::string disparaTiro() override;
};

