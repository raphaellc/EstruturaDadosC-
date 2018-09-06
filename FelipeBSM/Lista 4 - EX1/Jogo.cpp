#include "Jogo.h"
#include "CamadaDeObjetosTileMap.h"
#include "Mago.h"
#include "Guerreiro.h"
#include "Ladrao.h"
#include"CarregadorDeAssets.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	
	uniInicializar(800, 600, false);

	this->mapaAssets.open("..\\Assetsmapa.txt", ios::in);
	if (!mapaAssets) 
	{
		gDebug.erro("não abriu arquivo", this);
	}
	//Carregar Recursos
	CarregadorDeAssets * cda_carregador_assets = new CarregadorDeAssets;
	if (!cda_carregador_assets->carregarRecursos(mapaAssets)) 
	{
		gDebug.erro("Falha no carregamento de recursos");
	}

	mapa.carregar("assets/tilemaps/tilemap.json");
	gRecursos.carregarSpriteSheet("Mago", "assets/Imagens/Mago.png", 4, 4);

	personagem[0]->setSpriteSheet("Mago");
	ObjetoTileMap * objPos = mapa.getCamadaDeObjetos("Objetos")->getObjeto("Pos1");
	personagem[0]->setPosCentro(objPos->getPosCentro());
	
	
	//	O resto da inicialização vem aqui!
	//	...
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...
	
	mapa.descarregar();
	gRecursos.descarregarTudo();
	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{   
		uniIniciarFrame();

		//	Seu código vem aqui!
		//	...
		//seria isso o certo para fazer?

		
		personagem[0] = new Mago();
		personagem[0]->atualizar();
		personagem[0]->desenhar();

		personagem[1] = new Guerreiro();
		personagem[1]->atualizar();
		personagem[1]->desenhar();

		personagem[2] = new Ladrao();
		personagem[2]->atualizar();
		personagem[2]->desenhar();

		uniTerminarFrame();
	}
}