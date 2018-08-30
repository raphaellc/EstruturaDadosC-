#include "Jogo.h"
#include "Warlock.h"
#include "Druida.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(1280, 720);
	//carregar spritesheet, fonte, etc
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
		atualizarInput();
		chars[0] = new Warlock;
		chars[0]->atualizar();

		chars[1] = new Druida;
		chars[1]->atualizar();

		uniTerminarFrame();


		//colisao, desenhar asset, etc
	}
}

void Jogo::atualizarInput()
{
	if (!jogador.estaMovendo())
	{
		if (gTeclado.segurando[TECLA_DIR])
		{
			if (mapa.tileECaminhavel(jogador.getX() + 1.0, jogador.getY()))
			{
				jogador.setDestino(jogador.getX() + 1.0, jogador.getY());
			}
		}
		else if (gTeclado.segurando[TECLA_ESQ])
		{
			if (mapa.tileECaminhavel(jogador.getX() - 1.0, jogador.getY()))
			{
				jogador.setDestino(jogador.getX() - 1.0, jogador.getY());
			}
		}
	
	}
}
//inacabado