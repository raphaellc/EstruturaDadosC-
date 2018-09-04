#include "pch.h"
#include "Imovel.h"


Imovel::Imovel()
{
	preco = 40000;
}


Imovel::~Imovel()
{
}

void Imovel::setPreco(int p)
{
	preco = p;
}

int Imovel::getPreco()
{
	return preco;
}



void Imovel::setLocal(std::string lo)
{
    local = lo;
}

string Imovel::getLocal()
{
	return local;
}

void Imovel::imprimiNaTela()
{

	std::cout << "Valor: R$ " << preco << "\n" << "Endereço: " << local << "\n";
	
}


