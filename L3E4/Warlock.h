#pragma once
#include "Personagem.h"
class Warlock :
	public Personagem
{
public:
	Warlock();
	~Warlock();
	void getAlmas();
	void setAlmas();
	void chamadodemon();
	void setainfernal();

private:
	int almas;
};

