#include "VIP.h"



VIP::VIP()
{
	valor = valor * 2;
}


VIP::~VIP()
{
}

void VIP::imprimirValor()
{
	cout << "Tipo: VIP\nValor: " << valor << "\n\n";
}
