#pragma once
#include <fstream>
#include "libUnicornio.h"
#include "CarregadorDeAssets.h"
#include "Human.h"
#include "Knight.h"

// n�o sei o que ta acontecendo, s� anotando as d�vidas

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void executar();

private:
	Human* characters[3];
	fstream f_mapa_assets;
};

