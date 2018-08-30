#pragma once

#include"libUnicornio.h"
class Personagem:public ObjetoTileMap
{
public:
	Personagem();
	~Personagem();
	void setSpriteSheet(string spritesheet);
	virtual void atualizar();

protected:
	Sprite sprite;
	Vetor2D dir;
	float velo;
};

