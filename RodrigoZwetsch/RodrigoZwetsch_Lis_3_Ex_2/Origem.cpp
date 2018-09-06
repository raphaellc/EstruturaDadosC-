#include "Ingresso.h"
#include "Vip.h"
#include "CamaroteSuperior.h"
#include "CamaroteInferior.h"
#include "Normal.h"

int main()
{
	Vip* VIP = new Vip();
	CamaroteSuperior* CS = new CamaroteSuperior();
	CamaroteInferior* CI = new CamaroteInferior();
	Normal* Nor = new Normal();

	Nor->ImpNor();

	VIP->imprimirVip();

	CI->imprimirCI();
	CI->LOC();

	CS->ImpCS();
	CS->LOC();

	system("Pause");
	return 0;
}
