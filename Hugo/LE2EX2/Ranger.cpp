#include "Ranger.h"
#include<iostream>

using namespace std;

Ranger::Ranger()
{
	nome = "Fregor Veburino";
	vida = 50;
	stamina = 175;
	forca = 75;
	velocidade = 200;
	inteligencia = 75;
	carisma = 100;
	magia = 0;
}


Ranger::~Ranger()
{
}

void Ranger::FlechadaNoJoelho()
{
	cout << "Sua vida de aventuras acabou." << endl;
}
