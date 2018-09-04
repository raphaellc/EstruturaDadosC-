#include "CamaroteInferior.h"
#include<iostream>

using namespace std;


CamaroteInferior::CamaroteInferior()
{
	localizacao = 33;
}


CamaroteInferior::~CamaroteInferior()
{
}

void CamaroteInferior::imprimeLocalizcao()
{
	cout << "Seu assento é o de número " << localizacao << endl;
}

void CamaroteInferior::definirLocalizacao(int l)
{
	localizacao = l;
}
