#include "Miseravel.h"

Miseravel::Miseravel()
{
	nome = "Miseravis";
	idade = 23;

	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	Mendigar();
	cout << endl;
}

Miseravel::~Miseravel()
{
}

void Miseravel::Mendigar()
{
	cout << "Eu podia estar roubando, podia estar matando, mas estou só pedindo" << endl;
}
