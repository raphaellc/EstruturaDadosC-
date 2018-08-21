#include "Barbaro.h"
#include<iostream>

using namespace std;


Barbaro::Barbaro()
{
	nome = "Conan, o Conan";
	vida = 150;
	stamina = 150;
	forca = 150;
	velocidade = 50;
	inteligencia = 0;
	carisma = 75;
	magia = 0;
}


Barbaro::~Barbaro()
{
}

void Barbaro::MegaAtaquedoMachado()
{
	cout << "Morra seu infeliz" << endl;
}
