#include "Pistola.h"
#include<iostream>

using namespace std;


Pistola::Pistola()
{
	dano = 20;
	capacidade = 15;
}


Pistola::~Pistola()
{
}

void Pistola::recarregar()
{
	capacidade = 15;
	cout << "Voce recarregou com";
	MunicaoPistola();
}

void Pistola::atirar()
{
	if (capacidade > 0) {
		cout << "POW POW" << endl;
		capacidade = capacidade - 1;
	}
	else {
		cout << "Recarregue a arma" << endl;
	}
}


