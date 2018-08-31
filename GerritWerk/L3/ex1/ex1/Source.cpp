#include "Pessoa.h"
#include "Miseravel.h"
#include "Pobre.h"
#include "Rica.h"

int main() {
	Miseravel mise;
	mise.nome();
	mise.idade();
	mise.mendiga();
	Pobre pobi;
	pobi.nome();
	pobi.idade();
	pobi.trabalhar();
	Rica riko;
	riko.nome();
	riko.idade();
	riko.fazCompra();
	Pessoa pessoa;
	pessoa.nome();
	pessoa.idade();

	system("pause");
	return 0;
}