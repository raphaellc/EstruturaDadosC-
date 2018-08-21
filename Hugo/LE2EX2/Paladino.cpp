#include "Paladino.h"
#include<iostream>

using namespace std;


Paladino::Paladino()
{
	nome = "Bolório Xurucanto";
	vida = 200;
	stamina = 125;
	forca = 150;
	velocidade = 75;
	inteligencia = 100;
	carisma = 100;
	magia = 0;
}


Paladino::~Paladino()
{
}

void Paladino::ProtegerAliados()
{
	cout << "Deus lhe protegerá" << endl;
}
