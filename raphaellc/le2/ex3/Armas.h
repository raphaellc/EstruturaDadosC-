#pragma once
#include "Municao.h";
#include <string>
class Armas
{
public:
	Armas();
	~Armas();
	virtual std::string disparaTiro() = 0;
private:
	Municao mun;
	int balas;

};

