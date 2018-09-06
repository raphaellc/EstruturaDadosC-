#include "Personagem.h"
#include "libUnicornio.h"
#include"Vetor2D.h"

Personagem::Personagem()
{
	velo = 2;
}

Personagem::~Personagem()
{
}



void Personagem::setSpriteSheet(string spritesheet)
{
	spr.setSpriteSheet(spritesheet);
	
}

void Personagem::atualizar()
{
	if (gTeclado.segurando[TECLA_A])
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando[TECLA_D])
	{
		dir.set(-1, 0);
	}
	else if (gTeclado.segurando[TECLA_W])
	{
		dir.set(0, 1);
	}
	else if (gTeclado.segurando[TECLA_S])
	{
		dir.set(0, -1);
	}
	Vetor2D pos = getPosCentro();
	pos += dir * velo * gTempo.getDeltaTempo();
	setPosCentro(pos);
	
	
}

void Personagem::desenhar()
{
}

