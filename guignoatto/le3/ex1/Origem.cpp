#include "Pessoa.h"
#include "Rico.h"
#include "Pobre.h"
#include "Miseravel.h"

int main()
{
	setlocale(LC_ALL, "ptb");

	Miseravel miseravel;
	Pobre pobre;
	Rico rico;
	
	//Ações rico
	rico.fazCompras();
	rico.Pessoa_();

	cout << endl;

	//Ações pobre
	pobre.trabalhar();
	pobre.Pessoa_();

	cout << endl;

	//Ações miserável
	miseravel.mendigar();
	miseravel.Pessoa_();

	system("pause");
	return 0;
}