#include "Pobre.h"



Pobre::Pobre()
{
	nome = "Jose";
	idade = 25;
}


Pobre::~Pobre()
{
}

void Pobre::trabalha()
{
	cout << "Nome: " << nome << "\nIdade: " << idade << endl;
	cout << "O pobre trabalhou\n\n";
}
