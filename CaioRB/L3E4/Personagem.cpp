#include "Personagem.h"


Personagem::Personagem()
{
	objeto = NULL;
}


Personagem::~Personagem()
{
}

void Personagem::inicializar(string spritesheet, ObjetoTileMap* objeto)
{
	
	spr.setSpriteSheet(spritesheet);
	spr.setVelocidadeAnimacao(4.0);
	this->objeto = objeto;
	objeto->setSprite(&spr);

	
	movendo = false;
	inicio.x = objeto->getXCentro();
	inicio.y = objeto->getYCentro();
	destino.x = 0;
	destino.y = 0;
	velocidade = 4.0;
}

void Personagem::atualizar()
{
	atualizarAnimacao();
	atualizarMovimento();
}

void Personagem::setDestino(float x, float y)
{
	destino.x = x;
	destino.y = y;
	movendo = true;
}

bool Personagem::estaMovendo()
{
	return movendo;
}

float Personagem::getX()
{
	return objeto->getXCentro();
}

float Personagem::getY()
{
	return objeto->getYCentro();
}

void Personagem::atualizarAnimacao()
{
	if (movendo)
	{
		if (destino.x - inicio.x > 0.0)
		{
			spr.setAnimacao(ANIMACAO_DIR);	
		}
		else if (destino.x - inicio.x < 0.0)
		{
			spr.setAnimacao(ANIMACAO_ESQ);	
		}
		spr.avancarAnimacao();
	}

	else
	{
		spr.setFrame(0);
	}
}

void Personagem::atualizarMovimento()
{
	if (movendo)
	{
		float x = inicio.x + (destino.x - inicio.x)*interpolador;
		float y = inicio.y + (destino.y - inicio.y)*interpolador;


		interpolador += velocidade * gTempo.getDeltaTempo();


		if (interpolador >= 1.0)
		{
			interpolador = 0.0f;
			x = destino.x;			
			y = destino.y;			
			inicio.x = destino.x;
			inicio.y = destino.y;
			movendo = false;		
		}

		objeto->setPosCentro(x, y);
	}
}


void Personagem::ataquebasico()
{
	cout << "Toma essa, fodido." << endl;
}
