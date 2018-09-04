#include "VIP.h"
#include<iostream>

using namespace std;

VIP::VIP()
{
	valor = valor + 50;
}


VIP::~VIP()
{
}

void VIP::imprimeValor()
{
	cout << "Ingresso VIP: " << valor << endl;
}

