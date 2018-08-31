#include "Ingresso.h"



Ingresso::Ingresso()
{
	valor = 10;
}


Ingresso::~Ingresso()
{
}

void Ingresso::imprimirValor()
{
	cout << "O valor do ingresso eh: " << valor << " Reais\n\n";
}
