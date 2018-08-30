#pragma once
#include "Personagem.h"
class Guerreiro :
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();

	void atacar() override;
	void atualizar() override;
};

