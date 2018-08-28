#include "Guerreiro.h"
#include"libUnicornio.h"


Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

void Personagem::atualizar()
{
	if (gTeclado.segurando[TECLA_A])
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando[TECLA_D])
	{
		dir.set(-1, 0);
	}
	else if (gTeclado.segurando[TECLA_S])
	{
		dir.set(0, 1);
	}
	else if (gTeclado.segurando[TECLA_W])
	{
		dir.set(0, -1);
	}
	Vetor2D pos = getPosCentro();
	pos += dir * velo * gTempo.getDeltaTempo();
	setPosCentro(pos);

}
void Personagem::desenhar()
{
	

}