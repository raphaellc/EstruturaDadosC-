#pragma once
#include "Mago.h"
class Druida :
	public Mago
{
public:
	Druida();
	~Druida();
	void getHigh(); //serviço/comportamento novo;
	bool invocarMagia() override;
	bool high_state;
};

