#pragma once
#include "clerigo.h"
class SarcerdoteDaLuz :
	public clerigo
{
public:
	SarcerdoteDaLuz();
	~SarcerdoteDaLuz();
	void sLatacar() { guerreiro.atacar(); };
	void sLandar() { guerreiro.andar(); };
	

	void SluzAbensuada();
	void ataqueDivino();
	void ataqueSagrado();
	void flechaDeLuz();


};

