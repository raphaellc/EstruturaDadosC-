#include "Personagem.h"

Personagem::Personagem()
{
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

}
