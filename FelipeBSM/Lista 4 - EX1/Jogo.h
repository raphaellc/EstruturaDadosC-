#pragma once
#include "libUnicornio.h"
#include "Personagem.h"
#include "fstream"
#include"CarregadorDeAssets.h";
class Jogo
{
public:
	Jogo();
	~Jogo();

	Personagem* personagem[3];


	void inicializar();
	void finalizar();

	void executar();

private:
	TileMap mapa;
	fstream mapaAssets;

};


/*Arma *armas[4];
armas[0] = new Pistola9mm;
armas[1] = new Calibre12;
armas[2] = new Metralhadora;
armas[3] = new Motoserra;
for(int i=0; i<4; i++)
{
armas[i]->Atacar();
}*/
