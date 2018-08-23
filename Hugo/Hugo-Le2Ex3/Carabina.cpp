#include "Carabina.h"
#include<iostream>

using namespace std;

Carabina::Carabina()
{
	dano = 45;
	capacidade = 10;
}


Carabina::~Carabina()
{
}

void Carabina::recarregar()
{
	cout << "Voce recarregou com";
	MunciaoCarabina();
	capacidade = 10;
}

void Carabina::atirar()
{
	if (capacidade > 0) {
		cout << "PrauPrau" << endl;
		capacidade = capacidade - 1;
	}
	else {
		cout << "Recarrega ai meu" << endl;
	}
}
