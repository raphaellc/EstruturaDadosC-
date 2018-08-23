#pragma once
#include "clerigo.h"
class SarcerdoteDaTrevas :
	public clerigo
{
public:
	SarcerdoteDaTrevas();
	~SarcerdoteDaTrevas();

	void sTatacar() { guerreiro.atacar(); };
	void sTandar() { guerreiro.andar(); };
	


	void buracoNegro();
	void invocasaoSombria();
	void raioDaMorte();
	void venenoMortal();
};

