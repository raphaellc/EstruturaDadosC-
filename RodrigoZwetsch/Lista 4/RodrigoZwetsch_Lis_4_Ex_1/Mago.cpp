#include "Mago.h"

Mago::Mago()
{
}


Mago::~Mago()
{
}

void Mago::atualizar()
{
	spr.desenhar(300, 400);
}

void Mago::setAudio(string nome)
{
	//	2)	setar audio no som
	som.setAudio(nome);

	//	(OPCIONAL) setar volume (0 - 100)
	som.setVolume(100);
}

void Mago::atirar_magia()
{
	som.tocar();
}
