#pragma once
#include "libUnicornio.h"
#include "Personagem.h"
#include "Mago.h"
#include "Musica_Fundo.h"

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void executar();


private:
	Mago mago;


	Musica_Fundo musica;

protected:
	Personagem * personagem[3];
	TileMap mapa;
};