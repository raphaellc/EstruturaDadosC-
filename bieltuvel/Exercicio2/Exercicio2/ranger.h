#pragma once
#include "guerreiro.h"
class ranger :
	public guerreiro
{
protected:

	int velocidade;

public:
	ranger();
	~ranger();
    
	int getVelocidade(int _velocidade);

	void voadora();
};

