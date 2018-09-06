#include "Novo.h"
#include <string>


Novo::Novo()
{
	indereco = "Nova Rua, Novo Bairro casa 101.";
}


Novo::~Novo()
{
}

void Novo::Imp()
{
	cout << "O movel custa: " << preco + preco/2 << endl;
	cout << "E esta localizado em " << indereco << endl;
	cout << "Soma: " << preco/2 << endl << endl;
}
