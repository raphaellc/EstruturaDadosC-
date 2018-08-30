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
	
	
}

void Personagem::desenhar()
{
}

Vetor2D Personagem::setPosCentro(Vetor2D)
{
	return Vetor2D();
}

Vetor2D Personagem::getPosCentro()
{
	return Vetor2D();
}
