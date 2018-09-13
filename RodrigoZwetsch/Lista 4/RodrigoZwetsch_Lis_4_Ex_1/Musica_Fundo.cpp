#include "Musica_Fundo.h"



Musica_Fundo::Musica_Fundo()
{
}


Musica_Fundo::~Musica_Fundo()
{
}

void Musica_Fundo::setAudio(string nome)
{
	//	2)	setar audio no som
	som.setAudio(nome);

	//	(OPCIONAL) setar volume (0 - 100)
	som.setVolume(10);
}

void Musica_Fundo::tocar()
{
	som.tocar();
}
