#include "Sacerdote_de_Trevas.h"
#include<iostream>

using namespace std;

Sacerdote_de_Trevas::Sacerdote_de_Trevas()
{
	nome = "Sareniklo Frovs";
	vida = 75;
	stamina = 150;
	forca = 75;
	velocidade = 50;
	inteligencia = 250;
	carisma = 0;
	magia = 175;
}


Sacerdote_de_Trevas::~Sacerdote_de_Trevas()
{
}

void Sacerdote_de_Trevas::LevantarMortos()
{
	cout << "Meus servos nunca morrem!" << endl;
}
