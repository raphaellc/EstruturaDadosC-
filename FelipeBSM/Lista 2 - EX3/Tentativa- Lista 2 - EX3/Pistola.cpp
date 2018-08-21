#include "pch.h"
#include "Pistola.h"
#include <iostream>
using namespace std;
Pistola::Pistola()
{
	modelo = "G2c";
	calibre = 9;
	danoA = 5;
	cadencia = "Baixa";
}


Pistola::~Pistola()
{
}

void Pistola::info3()
{

	cout << "Modelo: " << modelo << endl;
	cout << "Calibre: " << calibre << " mm" << endl;
	cout << "Dano Extra: " << danoA << endl;
	cout << "Cadência: " << cadencia << endl;
}
