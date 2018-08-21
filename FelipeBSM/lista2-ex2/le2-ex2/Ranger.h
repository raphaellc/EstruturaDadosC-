#pragma once
#include "Guerreiro.h"
class Ranger :
	public Guerreiro
{
private:
	string amor;

public:
	Ranger();
	~Ranger();
	void setAmor(string a);
	string getAmor();
};

