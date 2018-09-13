#pragma once
#include "libUnicornio.h"


class Musica_Fundo
{
public:
	Musica_Fundo();
	~Musica_Fundo();

	void setAudio(string nome);
	void tocar();

private:
	Som som;
};

