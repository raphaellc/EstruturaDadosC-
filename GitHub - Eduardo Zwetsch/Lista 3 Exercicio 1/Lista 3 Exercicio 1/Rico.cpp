#include "Rico.h"



Rico::Rico()
{
	idade = 16;
	nome = "Gordinho do Outfit";
	dinheiro = 10000;
}


Rico::~Rico()
{
}

void Rico::comprar()
{
	cout << "Nome: " << nome << "\nIdade: " << idade << endl;
	cout << "O rico comprou coisas com sua conta de mais de R$: " << dinheiro << "\n\n";
}
