// Lista 3 - EX3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include "Imovel.h"
#include "NovoImovel.h"
#include "VelhoImovel.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	

		Imovel* imovelNormal = new Imovel();
		std::cout << "Imóvel 1: " << "\n";
		imovelNormal->setLocal("Rua Jabiringui, 2022");
		imovelNormal->imprimiNaTela();

		std::cout << "\n";

		NovoImovel* novoImovel = new NovoImovel();
		std::cout << "Imóvel 2: " << "\n";
		novoImovel->setLocal("Rua Carlos Imaginário da Pátria, 788");
		novoImovel->variacao();
		novoImovel->imprimiNaTela();

		std::cout << "\n";

		VelhoImovel* velhoImovel = new VelhoImovel();
		std::cout << "Imóvel 3: " << "\n";
		velhoImovel->setLocal("Rua Fernando Carlos Imaginário da Pátria, 1780");
		velhoImovel->variacao();
		velhoImovel->imprimiNaTela();
	
}

