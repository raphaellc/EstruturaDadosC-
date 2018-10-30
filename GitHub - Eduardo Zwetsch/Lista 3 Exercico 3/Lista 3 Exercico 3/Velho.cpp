#include "Velho.h"



Velho::Velho()
{
}


Velho::~Velho()
{
}

void Velho::Exibir()
{
	cout << "Imovel em: " << endereco << "\nDe valor: " << preco - preco * 0.2 << "\nEstado: Velho\n\n";
}
