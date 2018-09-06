#include "Pobre.h"



Pobre::Pobre()
{
	nome = "Gordofredo";
	idade = 37;

	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	trabalha();
	cout << endl;
}


Pobre::~Pobre()
{
}

void Pobre::trabalha()
{
	cout << nome << " trabalha como condenado." << endl;
}
