#pragma once
#include "CamaroteInf.h"
class CamaroteSup :
	public CamaroteInf
{
public:
	CamaroteSup();
	~CamaroteSup();
	void ImpValor() override;
	void Localizacao();
	void EscolherLoc(int l);

protected:
	int localizacao;
};

