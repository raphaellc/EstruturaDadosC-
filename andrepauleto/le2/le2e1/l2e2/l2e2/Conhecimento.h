#pragma once
#include "Classe.h"
class Conhecimento :
	public Classe
{
public:
	Conhecimento();
	~Conhecimento();
	void atacar() override;
};

