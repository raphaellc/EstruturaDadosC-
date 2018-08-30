#include "Jogo.h"
#include "Personagem.h"
#include "Guerreiro.h"
#include "Mago.h"
Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);
	mapa.carregar("assets/tilemaps/tilemapnovo.json");
	Personagem *charac[2];
	
	//	O resto da inicialização vem aqui!
	//	...

	gRecursos.carregarSpriteSheet("charac[0]", "assets/spritesheets/Knight.png", 4, 4);
	charac[0]->setSpriteSheet("charac[0]");
	ObjetoTileMap* objPos = mapa.getCamadaDeObjetos("Objetos")->getObjeto("Pos1");
	charac[0]->setPosCentro(objPos->getPosCentro());
	mapa.getCamadaDeObjetos("Objetos")->adicionarObjeto(charac[0]);
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
		charac[0] = new Guerreiro;
		charac[0]->atualizar();
	
		charac[1] = new Mago;
		charac[1]->atualizar();
		
		mapa.desenhar();
		uniTerminarFrame();
	}
}