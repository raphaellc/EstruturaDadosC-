#include "VIP.h"
#include "Normal.h"
#include "CamaroteSuperior.h"
#include "CamaroteInferior.h"

int main() {
	VIP v;
	Normal n;
	CamaroteInferior i;
	CamaroteSuperior s;

	n.ImprimirNormal();
	v.imprimirValor();
	i.lugar();
	s.lugar();

	system("pause");
	return 0;
}