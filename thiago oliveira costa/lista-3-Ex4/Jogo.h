#pragma once
#include"Personagem.h"
#include "libUnicornio.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
	TileMap map;
	Personagem * personagem[3];
};

