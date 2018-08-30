#include "Guerreiro.h"

Guerreiro::Guerreiro()
{
}

Guerreiro::~Guerreiro()
{
}

void Guerreiro::atacar()
{
	std::cout << "Aaaaaaah!" << endl;
}

void Guerreiro::atualizar()
{
	if (gTeclado.segurando[TECLA_D])
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando[TECLA_A])
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
	else
		dir.set(0, 0);

	Vetor2D pos = getPosCentro();
	if (getTileMap()->tileECaminhavel(pos.x * dir.x*0.5f, pos.y + dir.y*0.5f))
	{
		pos += dir * velo * gTempo.getDeltaTempo();
		setPosCentro(pos);
	}

}
