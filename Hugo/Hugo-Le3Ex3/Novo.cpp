#include "Novo.h"
#include<iostream>

using namespace std;

Novo::Novo()
{
}


Novo::~Novo()
{
}

void Novo::imprimeValor()
{
	cout << "O imóvel de endereço " << endereco << " custa " << valor + 500000 << " dinheiros" << endl;
}
