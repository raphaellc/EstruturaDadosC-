#include "Mago.h"
#include <iostream>

using namespace std;


Mago::Mago()
{
	vida = 100;
	stamina = 70;
	mana = 100;
	escudo = 0;
	agilidade = 50;
	nome = "Alff";
}


Mago::~Mago()
{
}

void Mago::conjurarmagia()
{
	cout << nome << " conjurar magia" << endl;
}
