#include "Atirador.h"
#include<iostream>

using namespace std;


Atirador::Atirador()
{
}


Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	if (arma == 1) {
		M9.atirar();
	}
	else if (arma == 2) {
		M16.atirar();
	}
	else if (arma == 3) {
		OST.atirar();
	}
	else {
		cout << "Escolha uma arma: 1=M9; 2=M16; 3=OST" << endl;
		cin >> arma;
	}
}

void Atirador::recarregar()
{
	if (arma == 1) {
		M9.recarregar();
	}
	else if (arma == 2) {
		M16.recarregar();
	}
	else if (arma == 3) {
		OST.recarregar();
	}
	else {
		cout << "Escolha uma arma: 1=M9; 2=M16; 3=OST" << endl;
		cin >> arma;
	}
}

void Atirador::colete()
{
	Colete();
}

void Atirador::medkit()
{
	Medkit();
}

void Atirador::trocarArma()
{
	cout << "Selecione sua arma: M9=1; M16=2; OST=3;" << endl;
	cin >> arma;
}
