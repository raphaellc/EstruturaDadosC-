#pragma once
#include "Personagem.h"
#include <iostream>
class Druida :
	public Personagem
{
public:
	Druida();
	~Druida();
	void reviver();
	void curar();

private:
	int mana;
};

