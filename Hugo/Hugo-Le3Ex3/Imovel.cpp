#include "Imovel.h"
#include<iostream>

using namespace std;

Imovel::Imovel()
{
	endereco = "Rua do Polenguinho Amassado, 3343";
	valor = 1000000;
}


Imovel::~Imovel()
{
}

void Imovel::setEndereco(string e)
{
	endereco = e;
}

string Imovel::getEndereco()
{
	return endereco;
}

void Imovel::setValor(int v)
{
	valor = v;
}

int Imovel::getValor()
{
	return valor;
}

void Imovel::imprimeValor()
{
	cout << "O imóvel de endereço " << endereco << " custa " << valor << " dinheiros" << endl;
}
