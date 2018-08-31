#include "stdafx.h"
#include "Rica.h"


Rica::Rica()
{
	nome_ = "Anderson Rico";
	idade_ = 19;

	dinheiro_ = 100000;
}


Rica::~Rica()
{
}

double Rica::dinheiro()
{
	cout << "Dinheiro:" << dinheiro_ << endl;

	return 0.0;
}

void Rica::fazcompras()
{

	cout << "Compras:";
	cout << "Preco da compra:" << endl;
	cin >> preco;
	cout << "Seu dinheiro:" << dinheiro_ << " dinheiro restante apos compras :" << dinheiro_ - preco << endl;

	

}
