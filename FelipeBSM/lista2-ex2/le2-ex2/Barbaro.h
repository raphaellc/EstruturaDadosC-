#pragma once
#include "Guerreiro.h"
class Barbaro :
	public Guerreiro
{
private:

	string inimigo;

public:
	Barbaro();
	~Barbaro();
	void setinimigo(string i);
	string getInimigo();

};

