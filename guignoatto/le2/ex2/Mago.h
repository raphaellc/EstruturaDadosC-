#pragma once
#include "Personagem.h"
class Mago : public Personagem
{
public:
	Mago();
	~Mago();

	void meditar();
	void asas();

protected:

	void bolaDeFogo();
	void Meteoro();
};

