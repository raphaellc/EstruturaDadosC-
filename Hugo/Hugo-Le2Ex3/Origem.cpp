#include<iostream>
#include"Atirador.h"

using namespace std;

int main()
{
	Atirador Silvio;

	Silvio.trocarArma();
	Silvio.atirar();
	Silvio.recarregar();
	Silvio.medkit();
	Silvio.colete();
	Silvio.trocarArma();
	Silvio.atirar();
	Silvio.recarregar();

	system("pause");
	return 0;
}