#pragma once
#include "libUnicornio.h"
#include"Personagem.h"
#include"Guerreiro.h"
#include"Mago.h"
#include"Ladrao.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void executar();

protected:
	Personagem* classe[3];
};

