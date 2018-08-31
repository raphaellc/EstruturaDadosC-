#pragma once
#include "VIP.h"
class CamaroteInf :
	public VIP
{
public:
	CamaroteInf();
	~CamaroteInf();
	void ImpValor() override;
	void Localizacao();
	void EscolherLoc(int l);

protected:
	int localizacao;

};

