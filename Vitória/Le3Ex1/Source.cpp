#include"Miseravel.h"
#include"Pobre.h"
#include"Rica.h"

int main() {
	Rica* rica = new Rica;
	Pobre* pobre = new Pobre;
	Miseravel* miseravel = new Miseravel;

	rica->fazCompras();
	pobre->Trabalha();
	miseravel->Mendigar();

	system("pause");
	return 0;
}