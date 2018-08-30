#include "Ladino.h"
#include <iostream>


Ladino::Ladino()
{
	vida = 75;
	stamina = 100;
	mana = 0;
	escudo = 25;
	agilidade = 100;
	nome = "Yula";
}


Ladino::~Ladino()
{
}

void Ladino::furtar()
{
	cout << nome << " furtou." << endl;
}
