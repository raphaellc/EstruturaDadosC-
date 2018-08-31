#include "CamaroteInf.h"
#include<iostream>



CamaroteInf::CamaroteInf()
{
	localizacao = 40;
	
}


CamaroteInf::~CamaroteInf()
{
}

void CamaroteInf::ImpValor()
{
	std::cout << "Camarote Inferior: " << valor << std::endl;
}

void CamaroteInf::Localizacao()
{
	std::cout << "Sua localizacao eh: " << localizacao << std::endl;
}

void CamaroteInf::EscolherLoc(int l)
{
	localizacao = l;
}
