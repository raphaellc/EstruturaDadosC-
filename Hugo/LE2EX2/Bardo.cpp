#include "Bardo.h"
#include<iostream>

using namespace std;

Bardo::Bardo()
{
	nome = "Braulios o Destemido";
	vida = 50;
	stamina = 100;
	forca = 25;
	velocidade = 75;
	inteligencia = 100;
	carisma = 200;
	magia = 75;
}


Bardo::~Bardo()
{
}

void Bardo::Batuque_do_Mal()
{
	cout << "Sinta a ira do meu pandeiro!!" << endl;
}
