#include "Miseravel.h"



Miseravel::Miseravel()
{
	nome = "Josisclayboll";
	idade = 43;
}


Miseravel::~Miseravel()
{
}

void Miseravel::mendigar()
{
	cout << "Nome: " << nome << "\nIdade: " << idade << endl;
	cout << "O miseravel mendigou\n\n";
}
