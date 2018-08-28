#include "Ladrao.h"
#include "libUnicornio.h"


Ladrao::Ladrao()
{
}


Ladrao::~Ladrao()
{
}

void Personagem::atualizar()
{
	if (gTeclado.segurando[TECLA_X])
	{
		dir.set(1, 0);
	}
	else if (gTeclado.segurando[TECLA_C])
	{
		dir.set(-1, 0);
	}
	else if (gTeclado.segurando[TECLA_Y])
	{
		dir.set(0, 1);
	}
	else if (gTeclado.segurando[TECLA_P])
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