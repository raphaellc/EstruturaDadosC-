#include "CamaroteSuperior.h"



CamaroteSuperior::CamaroteSuperior()
{
}

CamaroteSuperior::~CamaroteSuperior()
{
}

void CamaroteSuperior::ImpCS()
{
	preco = preco * 4;
	std::cout << "Ingresso Camarote Superior: R$" << preco << "	" << std::endl;
}

void CamaroteSuperior::LOC()
{
	Loc = 30;
	std::cout << "Cadeira " << Loc << std::endl << std::endl;;
}

