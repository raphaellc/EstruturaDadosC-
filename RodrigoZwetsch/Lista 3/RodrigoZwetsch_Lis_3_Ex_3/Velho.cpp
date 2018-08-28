#include "Velho.h"
#include <string>


Velho::Velho()
{
	indereco = "Velha Rua, Velho Bairro casa 1.";
}


Velho::~Velho()
{
}

void Velho::Imp()
{
	cout << "O movel custa: " << preco - preco/2 << endl;
	cout << "E esta localizado em " << indereco << endl;
	cout << "Economiza: " << preco/2 << endl << endl;
}
