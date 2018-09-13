#include "Jogo.h"
#include"Guerreiro.h"
#include"Mago.h"
#include"Ladrao.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	this->mapa_assets.open("..\\mapa_assets.txt", ios::in);
	if (!mapa_assets) {
		gDebug.erro("não abriu o arquivo", this);
	}
	CarregadordeAssets * cda_carregador_assets = new CarregadordeAssets;
	if (!cda_carregador_assets->CarregarAssets(mapa_assets)) {
		gDebug.erro("Falha no carregamento de recursos");
	}

	classe[0] = new Guerreiro;
	classe[1] = new Mago;
	classe[2] = new Ladrao;

	classe[0]->setSpriteSheet("knight");
	classe[1]->setSpriteSheet("mage");
	classe[2]->setSpriteSheet("thief");
	
}

void Jogo::finalizar()
{
	gRecursos.descarregarTudo();

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		classe[0]->atualizar();
		classe[1]->atualizar();
		classe[2]->atualizar();
		
		uniTerminarFrame();
	}
}