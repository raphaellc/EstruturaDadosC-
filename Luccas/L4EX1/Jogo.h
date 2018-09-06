#pragma once
#include "libUnicornio.h"
#include"Personagem.h"
#include"Druida.h"
#include"Warlock.h"
#include<fstream>
#include"CarregadordeAssets.h"
using namespace std;
class Jogo
{
public:
	Jogo();
	~Jogo();
	void executar();
	void inicializar();
	void finalizar();
	

protected:
	Personagem* classe[3];
	fstream mapa_assets;
};
