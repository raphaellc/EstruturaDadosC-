#include "Personagem.h"
#include<iostream>

using namespace std;

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



