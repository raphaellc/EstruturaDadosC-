#include "Jogo.h"
#include"Druida.h"
#include"Warlock.h"
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
		gDebug.erro("o arquivo não foi aberto", this);
	}
	CarregadordeAssets * cda_carregador_assets = new CarregadordeAssets;
	if (!cda_carregador_assets->CarregarAssets(mapa_assets)) {
		gDebug.erro("Falha ao carregar recursos");
	}
	
	classe[0] = new Druida;
	classe[1] = new Warlock;
	classe[0]->setSpriteSheet("mage");
	classe[1]->setSpriteSheet("thief");

}
void Jogo::finalizar()
{
	gRecursos.descarregarTudo();
	uniFinalizar();
}
void Jogo::executar()
{
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();
		classe[0]->atualizar();
		classe[1]->atualizar();
		classe[2]->atualizar();

		uniTerminarFrame();
	}
}