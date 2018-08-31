#include "VIP.h"
#include<iostream>

VIP::VIP()
{
	valor = valor + 200;
}


VIP::~VIP()
{
}

void VIP::ImpValor()
{
	std::cout << "Ingresso VIP: " << valor << std::endl;
}
