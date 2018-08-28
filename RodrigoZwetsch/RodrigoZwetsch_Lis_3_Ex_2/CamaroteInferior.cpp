#include "CamaroteInferior.h"



CamaroteInferior::CamaroteInferior()
{
}


CamaroteInferior::~CamaroteInferior()
{
}

void CamaroteInferior::imprimirCI()
{
	preco = preco * 3;
	std::cout << "Ingresso Camarote Inferior: R$" << preco << std::endl;
}

void CamaroteInferior::LOC()
{
	loc = 2;
	std::cout << "Cadeira " << loc << std::endl << std::endl;;
}
