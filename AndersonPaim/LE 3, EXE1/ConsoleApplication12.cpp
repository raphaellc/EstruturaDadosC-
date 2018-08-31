// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pessoa.h"
#include "Pobre.h"
#include "Rica.h"
#include "Miseravel.h"

int main()
{
	char classe;

	cout << "Qual a classe social?  (p/ pobre; r/ rica; m/ miseravel" << endl;
	cin >> classe;
	
	Miseravel M;
	Pobre P;
	Rica R;


	if (classe == 'r') {
		
		R.nome();
		R.idade();
		R.dinheiro();
		R.fazcompras();
}
	else if (classe == 'p') {

		P.nome();
		P.idade();
		P.dinheiro();
		P.trabalha();
	}

	else if (classe == 'm') {


		M.nome();
		M.idade();
		M.dinheiro();
		M.mendiga();

	}


	system("pause");
    return 0;
}

