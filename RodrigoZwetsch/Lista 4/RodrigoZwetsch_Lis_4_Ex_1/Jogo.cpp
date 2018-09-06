#include "Jogo.h"
#include "Guerreiro.h"
#include "Mago.h"
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

	mapa.carregar("assets/tilemaps/mapinha.json");
	gRecursos.carregarSpriteSheet("knight", "assets/spritesheets/Knight.png", 4, 4);
	gRecursos.carregarSpriteSheet("mage", "assets/spritesheets/Mage.png", 4, 4);
	gRecursos.carregarSpriteSheet("thief", "assets/spritesheets/Thief.png", 4, 4);

	gRecursos.carregarAudio("magia", "assets/som/explosion.wav");
	mago.setAudio("magia");

	gRecursos.carregarAudio("Fundo", "assets/som/fundo.wav");
	musica.setAudio("Fundo");

	gAudios.setVolumeGlobal(100.0);


	personagem[0] = new Guerreiro;
	personagem[0]->setSpriteSheet("knight");

	personagem[1] = new Ladrao;
	personagem[1]->setSpriteSheet("thief");

	personagem[2] = new Mago;
	personagem[2]->setSpriteSheet("mage");

	musica.tocar();


}

void Jogo::finalizar()
{
	gRecursos.descarregarTudo();
	mapa.descarregar();

	uniFinalizar();
}

void Jogo::executar()
{
	while (!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		mapa.desenhar();

		personagem[0]->atualizar();

		personagem[1]->atualizar();

		personagem[2]->atualizar();

		uniTerminarFrame();

		if (gTeclado.pressionou[TECLA_ENTER])
		{
			//	atirar
			mago.atirar_magia();
		}
	}
}
