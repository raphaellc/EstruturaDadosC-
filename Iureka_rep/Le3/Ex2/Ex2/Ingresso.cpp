#include "Ingresso.h"



Ingresso::Ingresso()
{
	valorBase = 100;
	valorAdd = 00;
}


Ingresso::~Ingresso()
{
}

void Ingresso::imprimeValor()
{
	std::cout << "Ingresso " <<tipoIng << ", valor: " << valorBase + valorAdd <<" reais.\n"<< std::endl;
}
