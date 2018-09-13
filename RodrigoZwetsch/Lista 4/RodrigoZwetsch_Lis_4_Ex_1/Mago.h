#pragma once
#include "Personagem.h"
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();

	void atualizar();

	void setAudio(string nome);
	void atirar_magia();

private:
	Som som;
};
