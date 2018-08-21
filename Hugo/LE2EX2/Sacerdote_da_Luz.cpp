#include "Sacerdote_da_Luz.h"
#include<iostream>

using namespace std;

Sacerdote_da_Luz::Sacerdote_da_Luz()
{
	nome = "Yornham Milocres";
	vida = 100;
	stamina = 75;
	forca = 75;
	velocidade = 500;
	inteligencia = 250;
	carisma = 50;
	magia = 175;
}


Sacerdote_da_Luz::~Sacerdote_da_Luz()
{
}

void Sacerdote_da_Luz::LuzAtordoante()
{
	cout << "Luminus" << endl;
}
