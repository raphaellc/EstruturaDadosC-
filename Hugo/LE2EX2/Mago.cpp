#include "Mago.h"
#include<iostream>

using namespace std;


Mago::Mago()
{
	nome = "Morfeanor";
	vida = 75;
	stamina = 175;
	forca = 75;
	velocidade = 50;
	inteligencia = 175;
	carisma = 50;
	magia = 200;
}


Mago::~Mago()
{
}

void Mago::LancarMagia()
{
	cout << "Alo Robora" << endl;
}
