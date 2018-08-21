#include "pch.h"
#include "Rifle.h"
#include <iostream>
using namespace std;

Rifle::Rifle()
{
	modelo = "M24";
	calibre = 50;
	danoA = 100;
	cadencia = "Baixa";
}


Rifle::~Rifle()
{
}

void Rifle::info2()
{
	cout << "Modelo: " << modelo << endl;
	cout << "Calibre: ." << calibre << endl;
	cout << "Dano Extra: " << danoA << endl;
	cout << "Cadência: " << cadencia << endl;
}
