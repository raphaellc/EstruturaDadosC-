#include "Rico.h"
#include "Pobre.h"
#include "Miseravel.h"


int main() {
	Pobre p;
	Rico r;
	Miseravel m;

	r.comprar();
	p.trabalha();
	m.mendigar();

	system("pause");
	return 0;
}