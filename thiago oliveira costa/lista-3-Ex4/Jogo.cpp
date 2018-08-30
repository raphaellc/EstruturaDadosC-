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
	map.carregar("assets/tilemaps/untitled.json");
	gRecursos.carregarSpriteSheet("Knight", "assets/spritesheets/Knight.png", 4, 4);
	gRecursos.carregarSpriteSheet("Mage", "assets/spritesheets/Mage.png", 4, 4);
	gRecursos.carregarSpriteSheet("Thief", "assets/spritesheets/Thief.png", 4, 4);
	personagem[0] = new Guerreiro;
	personagem[0]->setSpriteSheet("Knight");

	personagem[1]= new Mago;
	personagem[1]->setSpriteSheet("Mage");

	personagem[2] = new Ladrao;
	personagem[2]->setSpriteSheet("Thief");




	
}

void Jogo::finalizar()
{
	gRecursos.descarregarTudo();
	map.descarregar();

	uniFinalizar();
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair)
	{
		uniIniciarFrame();

		map.desenhar();

		personagem[0]->atualizar();
		personagem[1]->atualizar();
		personagem[2]->atualizar();

		uniTerminarFrame();
	}
}