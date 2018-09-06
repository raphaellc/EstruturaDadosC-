#include "Rico.h"



Rico::Rico()
{
	nome = "Gordinho do outfit";
	idade = 14;

	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Dinheiro: " << dinheiro << " dol." << endl;
	fazer_compreas();
	cout << endl;
}


Rico::~Rico()
{
}

void Rico::fazer_compreas()
{
	cout << nome << " comprou um outifit de 30000 dol." << endl;
}
