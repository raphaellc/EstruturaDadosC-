#pragma once
#include"CamaroteInf.h"
#include"CamaroteSup.h"
#include"Normal.h"
#include"VIP.h"
#include <iostream>

int main() {
	Normal* normal = new Normal;
	CamaroteInf* camainf = new CamaroteInf;
	CamaroteSup* camasup = new CamaroteSup;
	VIP* vip = new VIP;

	normal->ImpValor();
	vip->ImpValor();
	camainf->ImpValor();
	camainf->Localizacao();
	camasup->ImpValor();
	camasup->Localizacao();

	system("pause");
	return 0;
}
