#pragma once
#include "Municao.h";
class Armas
{
public:
	Armas();
	~Armas();
	void disparaTiro();
private:
	Municao mun;
	int balas;

};

