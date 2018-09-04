#include<iostream>
#pragma once
#include"Novo.h"
#include"Velho.h"

int main()
{
	setlocale(LC_ALL, "ptb");
	Imovel* x = new Imovel();
	Imovel* y = new Novo();
	Imovel* z = new Velho();

	x->imprimeValor();
	y->setEndereco("Rua do Gorgonzola Preto, 5544");
	y->imprimeValor();
	z->setEndereco("Alameda do Parmesão Murcho, 1889");
	z->imprimeValor();

	system("pause");
	return 0;
}