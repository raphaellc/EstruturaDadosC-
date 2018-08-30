#pragma once
#include <iostream>
#include <string>
#include "Sprite.h"
#include "libUnicornio.h"
using namespace std;

class Personagem: public ObjetoTileMap
{

protected:
	Vetor2D dir;
	string name;
	int velo;
	Sprite spr;
public:
	Personagem();
	~Personagem();

	virtual void andar();
	virtual void atacar();
	void setSpriteSheet(string spritesheet);
	virtual void atualizar();
	Vetor2D setPosCentro(Vetor2D);
	Vetor2D getPosCentro();
};

