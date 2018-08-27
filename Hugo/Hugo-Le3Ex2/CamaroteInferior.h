#pragma once
#include "VIP.h"
class CamaroteInferior :
	public VIP
{
protected:
	int localizacao;
public:
	CamaroteInferior();
	~CamaroteInferior();
	void imprimeLocalizcao();
	void definirLocalizacao(int l);
};

