#include "Clerigo.h"
#include<iostream>

using namespace std;


Clerigo::Clerigo()
{
	nome = "Papa Francisco";
	vida = 50;
	stamina = 100;
	forca = 25;
	velocidade = 50;
	inteligencia = 200;
	carisma = 20;
	magia = 100;

}


Clerigo::~Clerigo()
{
}

void Clerigo::MagiaCura()
{
	cout << "Herois nunca morrem!" << endl;
}
