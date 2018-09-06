#include<string>
#pragma once
#include"libUnicornio.h"

using namespace std;

class Personagem :public ObjetoTileMap
{
protected:
	Sprite spr;

public:
	Personagem();
	~Personagem();
	void setSpriteSheet(string spritesheet);
	virtual void atualizar() = 0;
};