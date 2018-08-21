#include "pch.h"
#include "Carabina.h"
#include <iostream>
using namespace std;

Carabina::Carabina()
{
	modelo = "IA2";
	calibre = 5.56;
	danoA = 2;
	cadencia = "Alta";
}


Carabina::~Carabina()
{
}

void Carabina::info()
{
	cout << "Modelo: " << modelo << endl;
	cout << "Calibre: " << calibre << endl;
	cout << "Dano Extra: " << danoA << endl;
	cout << "Cadência: " << cadencia << endl;
}