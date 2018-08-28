#include "Personagem.h"

Personagem::Personagem()
{
	velo = 5;
}


Personagem::~Personagem()
{
}

void Personagem::setSpriteSheet(string spritesheet)
{
	spr.setSpriteSheet(spritesheet);
	setSprite(&spr);
}

void Personagem::atualizar()
{
    if (gTeclado.segurando[TECLA_DIR]) 
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando [TECLA_ESQ]) 
	{
		dir.set(-1, 0);
	}
	else if (gTeclado.segurando [TECLA_BAIXO]) 
	{
		dir.set(0, 1);
	}
	else if (gTeclado.segurando[TECLA_CIMA]) 
	{
		dir.set(0, -1);
	}
	else
		dir.set(0, 0);

	Vetor2D pos = getPosCentro();
	if (getTileMap()->tileECaminhavel(pos.x * dir.x*0.5f, pos.y + dir.y*0.5f))
	{
		pos += dir * velo * gTempo.getDeltaTempo();
		setPosCentro(pos);
	}

}
