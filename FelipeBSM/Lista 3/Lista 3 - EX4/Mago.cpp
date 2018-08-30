#include "Mago.h"
#include "libUnicornio.h"


Mago::Mago()
{

	
}


Mago::~Mago()
{
}


void Personagem::atualizar()
{
	if (gTeclado.segurando[TECLA_DIR])
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando[TECLA_ESQ])
	{
		dir.set(-1, 0);
	}
	else if (gTeclado.segurando[TECLA_BAIXO])
	{
		dir.set(0, 1);
	}
	else if (gTeclado.segurando[TECLA_CIMA])
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

