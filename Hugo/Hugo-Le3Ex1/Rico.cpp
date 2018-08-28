#include "Rico.h"
#include<iostream>

using namespace std;

Rico::Rico()
{
	nome = "Richie";
	dinheiro = 100000;
}


Rico::~Rico()
{
}

void Rico::fazCompras()
{
	cout << getNome() << " comprou um presunto" << endl;
	dinheiro = dinheiro - 3;
}
