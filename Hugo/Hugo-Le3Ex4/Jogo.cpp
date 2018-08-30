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

	gRecursos.carregarSpriteSheet("knight", "assets/spritesheets/Knight.png", 4, 4);
	gRecursos.carregarSpriteSheet("mage", "assets/spritesheets/Mage.png", 4, 4);
	gRecursos.carregarSpriteSheet("thief", "assets/spritesheets/Thief.png", 4, 4);

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