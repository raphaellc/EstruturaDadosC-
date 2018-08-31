#include "Novo.h"



Novo::Novo()
{
}


Novo::~Novo()
{
}

void Novo::ExibirValor()
{
	cout << "Imovel em: " << endereco << "\nDe valor: " << preco + preco * 0.2 << "\nEstado: Novo\n\n";
}
