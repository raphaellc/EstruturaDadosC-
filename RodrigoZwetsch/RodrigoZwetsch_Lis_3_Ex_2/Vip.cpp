#include "Vip.h"
//#include<iostream>
//using namespace std;

Vip::Vip()
{
}


Vip::~Vip()
{
}

void Vip::imprimirVip()
{
	preco = preco * 2;
	std::cout << "Ingresso VIP: R$" << preco << std::endl << std::endl;;
}
