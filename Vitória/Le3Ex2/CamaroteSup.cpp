#include "CamaroteSup.h"
#include<iostream>



CamaroteSup::CamaroteSup()
{
	localizacao = 11;
	valor = valor + 100;
}


CamaroteSup::~CamaroteSup()
{
}

void CamaroteSup::ImpValor()
{
	std::cout << "Camarote Superior: " << valor << std::endl;
}

void CamaroteSup::Localizacao()
{
	std::cout << "Sua localizacao eh: " << localizacao << std::endl;
}

void CamaroteSup::EscolherLoc(int l)
{
	localizacao = l;
}
