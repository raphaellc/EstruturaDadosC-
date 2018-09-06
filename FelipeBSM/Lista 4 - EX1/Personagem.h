#pragma once
#include <string>
#include "Sprite.h"
using namespace std;
class Personagem : public ObjetoTileMap
{

protected:

	int velo;
	
public:
	Personagem();
	~Personagem();

	//  virtuais puros == virtual <tipo> <nome()> = 0;.

	Sprite spr;
	Vetor2D dir;
	
	void setSpriteSheet(string spritesheet);
	virtual void atualizar();
	virtual void desenhar();
	
};

