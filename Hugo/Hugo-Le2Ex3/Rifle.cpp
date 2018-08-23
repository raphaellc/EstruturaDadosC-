#include "Rifle.h"
#include<iostream>

using namespace std;

Rifle::Rifle()
{
	dano = 30;
	capacidade = 30;
}


Rifle::~Rifle()
{
}

void Rifle::atirar()
{
	if (capacidade > 0) {
		cout << "TRATRATRA" << endl;
		capacidade = capacidade - 1;
	}
	else {
		cout << "Recarrega plis" << endl;
	}
}

void Rifle::recarregar()
{
	cout << "Voce recarregou com ";
	MunicaoRifle();
	capacidade = 30;
}
