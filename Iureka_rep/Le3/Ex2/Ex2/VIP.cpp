#include "VIP.h"



VIP::VIP()
{
	tipoIng = "VIP";
	valorAdd = 50;
}


VIP::~VIP()
{
}

void VIP::getImprimeLocal()
{
	std::cout << "Local do ingresso: " << localizacao << ".\n\n";
}
